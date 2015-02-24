<?php

function gbif_event_settings_form() {
	$form['ge_update'] = array(
		'#type' => 'fieldset',
		'#title' => t('Update event information'),
		'#description' => t('Update event information from the gbif_ims_* tables to Drupal content type, where event information can be edited. This update action honours the update interval of the IMS settings. You can however force the update by checking the option below.'),
	);
	$form['ge_update']['cron_reset'] = array(
		'#type' => 'checkbox',
		'#title' => t("Run event update regardless of whether the interval has expired."),
		'#default_value' => FALSE,
	);
	$form['ge_update']['update'] = array(
		'#type' => 'submit',
		'#value' => t('Update now'),
		'#prefix' => '<div id="updatediv">',
		'#suffix' => '<div id="status-wrapper-update"></div></div>',
		'#ajax' => array(
			'callback' => 'gbif_event_sync',
			'wrapper' => 'status-wrapper-update',
			'effect' => 'fade',
		),
	);

	return system_settings_form($form);
}

function _ge_get_all_ims_events() {
	$query = db_select('gbif_ims_event', 'e');
	$query->leftjoin('gbif_ims_event_status', 'es', 'es.event_statusID = e.event_statusID');
	$query->leftjoin('gbif_ims_city', 'ci', 'ci.cityID = e.cityID');
	$query->leftjoin('gbif_ims_country', 'c', 'c.countryID = ci._kf_countryID');

	$query->addField('e', 'eventID');
	$query->addField('e', 'recordID');
	$query->addField('ci', 'cityname');
	$query->addField('c', 'name', 'venue_country');
	$query->addField('c', 'iso2');
	$query->addField('e', 'date_end');
	$query->addField('e', 'date_start');
	$query->addField('e', 'date_text');
	$query->addField('e', 'desc_long');
	$query->addField('e', 'desc_short');
	$query->addField('e', 'evaluation');
	$query->addField('e', 'language');
	$query->addField('e', 'full_title');
	$query->addField('es', 'status');
	$query->addField('e', 'how_to_contact');
	$query->addField('e', 'abbr_title');
	$query->addField('e', 'no_participant');
	$query->addField('e', 'target_public');
	$query->addField('e', 'venue');
	$query->addField('e', 'on_the_web');

	$results = $query->execute()->fetchAll();

	return $results;
}

/**
 * Update events from the gbif_ims_event_* tables.
 */
function _gbif_event_sync() {
	// Check whether all necessary tables exist.
	$exist = gbif_ims_tables_exist('_ge_required_tables');
	if ($exist == FALSE) {
		return t('One or more required table missing. Please run !sync before continuing.', array('!sync' => l('IMS Sync', 'admin/config/gbif/ims_settings')));
	}

	// Import events from the gbif_ims_* tables to the "event" content type.
	$results = _ge_get_all_ims_events();

	foreach ($results as $record) {

		$ims_id = $record->eventID;

		// Find if it's already a node in Drupal.
		$entity_query = new EntityFieldQuery();
		$entity_query->entityCondition('entity_type', 'node')
			->entityCondition('bundle', 'event')
			->fieldCondition('ge_ims_kp_id', 'value', $ims_id, '=');
		$exist = $entity_query->execute();

		// Initialise the node object for creation or update.
		// If there is no event with the same IMS ID, create a new one.
		// Or load the existing one so it'll be in updating mode.
		if (empty($exist)) {
			$node = new stdClass();
			$node->type = 'event';
			node_object_prepare($node);
		}
		elseif (isset($exist['node']) && count($exist['node']) == 1) {
			foreach ($exist['node'] as $obj) {
				$node = node_load($obj->nid);
			}
		}
		elseif (count($exist['node']) > 1) {
			$i = 0;
			$ids = '';
			foreach ($exist['node'] as $obj) {
				$ids .= $obj->nid;
				if ($i < count($exist['node'])) {
					$ids .= ', ';
				}
				$i++;
			}
			return t('There are possibly duplicates of the same event in the system. Check nodes with nid: !ids.', array('ids' => $ids));
		}

		// Use entity_metadata_wrapper() for handling field updating.
		$node_wrapper = entity_metadata_wrapper('node', $node);

		$node_wrapper->title = htmlspecialchars_decode($record->full_title);
		$node_wrapper->language = LANGUAGE_NONE;

		// Short description to body.
		$node_wrapper->body = array(
			'value' => (!empty($record->desc_short)) ? htmlspecialchars_decode($record->desc_short) : NULL,
			'summary' => NULL,
			'format' => 'full_html',
		);

		// Long description.
		$node_wrapper->ge_desc_long = gbif_ims_format_value($record->desc_long, 'full_html');

		// IMS ID.
		$node_wrapper->ge_ims_kp_id->set($ims_id);

		// Participant.
		$node_wrapper->ge_participants = gbif_ims_format_value(_ge_get_people($ims_id), 'full_html');

		// Resource.
		$node_wrapper->ge_lib_resources = gbif_ims_format_value(_ge_get_resources($ims_id), 'full_html');

		// Audience.
		$node_wrapper->ge_audience = gbif_ims_format_value(_ge_get_audience($record), 'full_html');

		// How to contact.
		$node_wrapper->ge_contact_info = gbif_ims_format_value($record->how_to_contact, 'full_html');

		// Venue.
		$node_wrapper->ge_venue->set(gbif_ims_format_value($record->venue));

		// Event status.
		$node_wrapper->ge_status->set(gbif_ims_format_value($record->status));

		// Location.
		$location = (!empty($record->cityname)) ? $record->cityname : NULL;
		$country = (!empty($record->iso2)) ? country_load($record->iso2) : NULL;
		if (isset($location) && isset($country)) {
			$location = $location . ', ' . $country->name;
		}
		elseif ($location == NULL && isset($country)) {
			$location = $country->name;
		}
		$node_wrapper->ge_location->set(gbif_ims_format_value($location));

		// Venue country. This is a term reference field so we need to find the tid.
		$query = new EntityFieldQuery();
		$entities = $query->entityCondition('entity_type', 'taxonomy_term')
			->entityCondition('bundle', 'countries')
			->fieldCondition('field_iso2', 'value', $record->iso2, '=')
			->execute();
		if (!empty($entities['taxonomy_term'])) {
			$tids = array_keys($entities['taxonomy_term']);
			$node_wrapper->ge_venue_country->set($tids[0]);
		}
		else {
			$node_wrapper->ge_venue_country->set(NULL);
		}

		// Event language.
		$value = gbif_ims_format_value($record->language);
		$node_wrapper->ge_language->set($value);

		// Date and iCal.
		// @todo Set time of start_date start from 9AM, and time of end_date ends at 5PM.
		if (!empty($record->date_start)) {
			$start_date = DateTime::createFromFormat('m/d/Y G:i:s', $record->date_start);
			$start_date = ($start_date != FALSE) ? $start_date->getTimestamp() : NULL;
		}
		if (!empty($record->date_end)) {
			$end_date = DateTime::createFromFormat('m/d/Y G:i:s', $record->date_end);
			$end_date = ($end_date != FALSE) ? $end_date->getTimestamp() : NULL;
		}
		$node_wrapper->ge_ims_date->set(array(
			'value' => (isset($start_date)) ? $start_date : NULL,
			'value2' => (isset($end_date)) ? $end_date : NULL,
		));
		// @todo Use timestamp when addtocal module supports.
		// Changed date format from "Y-m-d H:i:s" to "Y-m-d" to just have date.
		$node_wrapper->ge_date_ical->set(array(
			'value' => (isset($start_date)) ? date("Y-m-d", $start_date) : NULL,
			'value2' => (isset($end_date)) ? date("Y-m-d", $end_date) : NULL,
		));
		$node_wrapper->ge_date_text->set(gbif_ims_format_value($record->date_text));

		// Image. This actually attaches the image to the event node.
		$image_url = 'http://imsgbif.gbif.org/CMS/W_TR_EventDetail.php?image=Thumbnail&recid=' . $record->recordID;
		$image = file_get_contents($image_url);
		$size = getimagesize($image_url);
		if (!empty($size) && $size[0] != 1 && $size[1] != 1) {
			$extension = image_type_to_extension($size[2]);
			$image_file_name = 'event-image-' . $ims_id . '-' . $record->recordID . $extension;
			$uri = 'public://gbif_event/images';
			$dir_exists = file_prepare_directory($uri);
			if ($dir_exists == TRUE) {
				$image_file_uri = $uri . '/' . $image_file_name;
				$file = file_save_data($image, $image_file_uri, FILE_EXISTS_REPLACE);
				if (is_object($file)) {
					watchdog('gbif_event', '!file uploaded successfully.', array('!file' => $file->uri), WATCHDOG_NOTICE);
					file_usage_add($file, 'gbif_event', 'node', $file->uid);
					$file = (array) $file;
					$file['alt'] = $node->title;
					$file['title'] = t('Click to see in full size');
					$node_wrapper->ge_image->set($file);
				}
				elseif ($file == FALSE) {
					watchdog('gbif_event', 'Failed saving !file.', array('!file' => $file->uri), WATCHDOG_ERROR);
				}
			}
			else {
				drupal_set_message(t('!uri is not available for saving files. Please check whether this module is installed correctly from Web UI.', array('!uri' => $uri)), 'error');
				watchdog('gbif_event', '!uri is not available for saving files. Please check whether this module is installed correctly from Web UI.', array('!uri' => $uri), WATCHDOG_ERROR);
			}
		}

		// Determine "publish status" to "Published" if OnTheWeb == "Yes".
		$on_the_web = $record->on_the_web;
		if ($on_the_web == 'Yes') {
			$node_wrapper->status->set(1);
		}

		$node_wrapper->save();

		unset($ims_id, $entities, $entity_query, $audience, $country, $location, $start_date, $end_date, $node_wrapper);

	}

	return TRUE;
}

function _ge_get_audience($record) {
	$audience = '';
	$num_participants = $record->no_participant;
	$audience .= (!empty($num_participants)) ? $num_participants . ' people.' : '';
	$target_public = $record->target_public;
	$audience .= (!empty($target_public)) ? ' ' . $target_public : '';
	return $audience;
}

function _ge_get_resources($_kf_eventID) {
	$query = db_select('gbif_ims_event_w_list_resources', 'ewr');

	$query->addField('ewr', 'event_resourceID');
	$query->addField('ewr', 'description');
	$query->addField('ewr', 'url');
	$query->addField('ewr', 'kf_event_resource_typeID');
	$query->addField('ewr', 'on_the_web');
	$query->addField('ewr', 'name_abr');
	$query->addField('ewr', 'resource_type');
	$query
		->condition('ewr._kf_eventID', $_kf_eventID)
		->condition('ewr.on_the_web', 'Yes');

	$results = $query->execute()->fetchAll();

	if (!empty($results)) {
		return theme('ge_resource_list', array('results' => $results));
	}
	else {
		return NULL;
	}
}

function _ge_get_people($_kf_eventID) {
	$query = db_select('gbif_ims_event_w_list_people', 'ewp');

	$query->addField('ewp', 'event_peopleID');
	$query->addField('ewp', 'name_abv__lct');
	$query->addField('ewp', 'email');
	$query->addField('ewp', 'people_role');
	$query
		->condition('ewp._kf_eventID', $_kf_eventID);

	$results = $query->execute()->fetchAll();

	if (!empty($results)) {
		return theme('ge_people_list', array('results' => $results));
	}
	else {
		return NULL;
	}
}