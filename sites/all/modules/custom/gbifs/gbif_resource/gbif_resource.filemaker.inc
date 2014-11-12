<?php

/*
 * @file Functions here don't talk to FileMaker directly but gbif_ims_* tables.
 * They are organised this way to be consistent across our Drupal modules.
 */

function _gr_get_all_ims_resources() {
	$query = db_select('gbif_ims_file', 'f');

	$query->leftjoin('gbif_ims_file_path', 'fp', 'fp.file_pathID = f._kf_file_pathID');
	$query->leftjoin('gbif_ims_file_type', 'ft', 'ft.file_typeID = f._kf_file_typeID');
	$query->leftjoin('gbif_ims_language', 'l', 'l.languageID = f._kf_languageID');
	$query->leftjoin('gbif_ims_resource_type', 'rt', 'rt.resource_typeID = f._kf_typeID');

	$query->addField('f', 'fid');
	$query->addField('f', 'title_text');
	$query->addField('f', 'alternative_title');
	$query->addField('f', 'description');
	$query->addField('f', 'author');
	$query->addField('f', 'publisher');
	$query->addField('f', 'audience');
	$query->addField('f', 'abstract');
	$query->addField('f', 'bibliographic_citation');
	$query->addField('f', 'contributor');
	$query->addField('f', 'rights');
	$query->addField('f', 'rights_holder');
	$query->addField('f', 'num_downloads');
	$query->addField('f', 'short_listed');
	$query->addField('f', 'on_the_web');
	$query->addField('f', 'date_of_publication');
	$query->addField('f', 'coverage');
	$query->addField('f', 'sort_order');
	$query->addField('f', 'subject');
	$query->addField('f', 'url');
	$query->addField('f', 'filename');
	$query->addField('f', 'restricted__lcn');
	$query->addField('f', 'hexID');
	$query->addField('l', 'iso_639_1');
	$query->addField('l', 'language');
	$query->addField('ft', 'mime_type');
	$query->addField('rt', 'resource_type');

	$query->isNull('f.restricted__lcn');
	$query->isNotNull('rt.resource_type');
	$query->condition('rt.resource_type', 'Digital file', '<>');

	$results = $query->execute()->fetchAll();

	return $results;
}

/**
 * Update resource from the gbif_ims_file_*, gbif_ims_keyword_*, gbif_ims_resource_* tables.
 */
function _gbif_resource_sync() {
	// Check whether all necessary tables exist.
	$exist = gbif_ims_tables_exist('_gr_required_tables');
	if ($exist == FALSE) {
		return t('One or more required table missing. Please run !sync before continuing.', array('!sync' => l('IMS Sync', 'admin/config/gbif/ims_settings')));
	}

	// Import events from the gbif_ims_* tables to the "event" content type.
	$results = _gr_get_all_ims_resources();

	// Resource counts. For debugging.
	$entity_query = new EntityFieldQuery();
	$entity_query->entityCondition('entity_type', 'node')
		->entityCondition('bundle', 'resource_ims');
	$exist = $entity_query->execute();
	$count_resource_ims = count($exist['node']);

	$entity_query = new EntityFieldQuery();
	$entity_query->entityCondition('entity_type', 'node')
		->entityCondition('bundle', 'resource');
	$exist = $entity_query->execute();
	$count_resource = count($exist['node']);

	$count_old_node = 0;
	$count_new_node = 0;
	$count_duplicate = 0;

	foreach ($results as $record) {
		// We don't import "Digital file" type or "restricted to committee" files.
		// if ($record->resource_type == "Digital file" || !isset($record->resource_type)) continue;

		try {
			$ims_id = $record->fid;
			// Find if it's already a node in Drupal.
			$query = new EntityFieldQuery();
			$query->entityCondition('entity_type', 'node')
				->entityCondition('bundle', 'resource')
				->fieldCondition('gr_kp_id', 'value', $ims_id, '=');
			$exist = $query->execute();

			// Initialise the node object for creation or update.
			// If there is no resource with the same IMS ID, create a new one.
			// Or load the existing one so it'll be updated.
			if (empty($exist)) {
				$node = new stdClass();
				$node->type = 'resource';
				node_object_prepare($node);
				$count_new_node++;
			}
			elseif (isset($exist['node']) && count($exist['node']) == 1) {
				$node = node_load(key($exist['node']));
				if (!empty($node)) $count_old_node++;
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
				return t('There are possibly duplicates of the same resources in the system. Check nodes with nid: !ids.', array('ids' => $ids));
			}
			unset($query);

			// Use entity_metadata_wrapper() for handling field updating.
			$node_wrapper = entity_metadata_wrapper('node', $node);

			$node_wrapper->title = htmlspecialchars_decode($record->title_text);
			$node_wrapper->language = LANGUAGE_NONE;

			// Alternative title.
			$node_wrapper->gr_alternative_title->set($record->alternative_title);

			// IMS ID.
			$node_wrapper->gr_kp_id->set($ims_id);

			// Description(body).
			$node_wrapper->body = array(
				'value' => (!empty($record->description)) ? htmlspecialchars_decode($record->description) : NULL,
				'summary' => NULL,
				'format' => 'full_html',
			);

			// Author.
			$node_wrapper->gr_author = gbif_ims_format_value($record->author, 'filtered_html');

			// Publisher.
			$node_wrapper->gr_publisher = gbif_ims_format_value($record->publisher, 'filtered_html');

			// Audience.
			$node_wrapper->gr_audience = gbif_ims_format_value($record->audience, 'filtered_html');

			// Abstract.
			$node_wrapper->gr_abstract = gbif_ims_format_value($record->abstract, 'filtered_html');

			// Bibliographic citation.
			$node_wrapper->gr_citation = gbif_ims_format_value($record->bibliographic_citation, 'filtered_html');

			// Contributor.
			$node_wrapper->gr_contributor = gbif_ims_format_value($record->contributor, 'filtered_html');

			// Rights.
			$node_wrapper->gr_right = gbif_ims_format_value($record->rights, 'filtered_html');

			// Rights holder.
			$node_wrapper->gr_right_holder = gbif_ims_format_value($record->rights_holder, 'filtered_html');

			// Number of downloads.
			$node_wrapper->gr_number_of_downloads->set(gbif_ims_format_value($record->num_downloads));

			// Short listed.
			if ($record->short_listed == 1) {
				$node_wrapper->gr_short_listed->set(1);
			}

			// Resource type. A term reference field.
			$mapping = array(
				'Digital document' => 'Document',
				'Internet URL' => 'Link',
				'Tool' => 'Tool',
				'Presentation' => 'Presentation',
				'Data resource' => 'Data resource'
			);
			$query = new EntityFieldQuery();
			$entities = $query->entityCondition('entity_type', 'taxonomy_term')
				->entityCondition('bundle', 'resource_type')
				->propertyCondition('name', $mapping[$record->resource_type])
				->execute();
			if (!empty($entities['taxonomy_term']) && count($entities['taxonomy_term']) == 1) {
				$tid = key($entities['taxonomy_term']);
				$node_wrapper->gr_resource_type->set($tid);
			}
			else {
				$node_wrapper->gr_resource_type->set(NULL);
			}
			unset($query, $tid, $mapping, $entities);

			// Resource language. A term reference field.
			$value = gbif_ims_format_value(strtolower($record->iso_639_1));
			if ($value == 'zh') {
				switch ($record->language) {
					case 'Chinese, Simplified':
						$value = 'zh-hans';
						break;
					case 'Chinese, Traditional':
						$value = 'zh-hant';
						break;
				}
			}
			$query = new EntityFieldQuery();
			$entities = $query->entityCondition('entity_type', 'taxonomy_term')
				->entityCondition('bundle', 'language')
				->fieldCondition('field_term_iso_639_1', 'value', $value, '=')
				->execute();
			if (!empty($entities['taxonomy_term']) && count($entities['taxonomy_term']) == 1) {
				$tid = key($entities['taxonomy_term']);
				$node_wrapper->gr_language->set($tid);
			}
			else {
				$node_wrapper->gr_language->set(NULL);
			}
			unset($query, $value, $tid, $entities);

			// @todo Purpose. A term reference field. Loaded from Keywords.
			// @todo Data type. A term reference field. Loaded from Keywords.
			// @todo Tags. A term reference field. Loaded from Keywords.

			// Old resource nid. If there are duplicates, use all of them.
			// The old resource nid(s) are used for URL redirection.
			// @link http://drupal.stackexchange.com/questions/50358/save-a-new-value-with-entity-metadata-wrapper-to-an-entity-field-which-is-an-arr
			$query = new EntityFieldQuery();
			$query->entityCondition('entity_type', 'node')
				->entityCondition('bundle', 'resource_ims')
				->fieldCondition('field_orc_original_ims_id', 'value', $ims_id, '=');
			$exist = $query->execute();
			if (isset($exist['node'])) {
				foreach ($exist['node'] as $nid => $obj) {
					$node_wrapper->gr_old_resource_nid[] = $nid;
				}
				$count_duplicate += count($exist['node']) - 1;
			}
			unset($query, $exist);

			// Determine "publish status" to "Published" if OnTheWeb == "Yes".
			$on_the_web = $record->on_the_web;
			if ($on_the_web == 'Yes' || $on_the_web == '1') {
				$node_wrapper->status->set(1);
			}
			unset($on_the_web);

			$node_wrapper->save();

			// We update file fields after node_save() as we need nid as part of the filename.
			// Prepare a directory within gbif_resource to host files that are associated to a resource.
			$uri = 'public://gbif_resource';
			$dir_exists = file_prepare_directory($uri);

			if ($dir_exists == TRUE) {
				$resource_file_uri = $uri . '/' . 'resource-' . $node->nid;
				// Make sure the directory for node files is in place.
				$node_dir_exist = file_prepare_directory($resource_file_uri);
				if ($node_dir_exist == FALSE) drupal_mkdir($resource_file_uri, NULL, TRUE);

				// Image. This actually attaches the image to the resource node.
				$id_length = strlen($ims_id);
				if ($id_length == 3) {
					$image_url = 'http://fms.gbif.org:8020/SuperContainer/RawData/THMB/' . substr($ims_id, 0, 1) . '/' . $ims_id . '?width=150&username=zordesign&password=GBIF2010';
				}
				elseif ($id_length == 4) {
					$image_url = 'http://fms.gbif.org:8020/SuperContainer/RawData/THMB/' . substr($ims_id, 0, 2) . '/' . $ims_id . '?width=150&username=zordesign&password=GBIF2010';
				}
				$image = file_get_contents($image_url);
				$size = getimagesize($image_url);
				if (!empty($size) && $size[0] != 1 && $size[1] != 1 ) {
					$image_file_uri = $resource_file_uri . '/' . 'resource-image-' . $node->nid . image_type_to_extension($size[2]);
					$file = file_save_data($image, $image_file_uri, FILE_EXISTS_REPLACE);
					if (is_object($file)) {
						watchdog('gbif_resource', '!file uploaded successfully.', array('!file' => $file->uri), WATCHDOG_NOTICE);
						file_usage_add($file, 'gbif_resource', 'node', $file->uid);
						$file = (array)$file;
						$file['alt'] = $node->title;
						$file['title'] = t('Click to see in full size');
						$node_wrapper->gr_image->set($file);
					}
					elseif ($file == FALSE) {
						watchdog('gbif_resource', 'Failed saving !file.', array('!file' => $file->uri), WATCHDOG_ERROR);
					}
				}
				unset($image_url, $image, $image_file_uri, $size, $file);

				// File.
				$file_url = 'http://fms.gbif.org:8020/SuperContainer/RawData/DOCS/' . substr($record->hexID, 0, 1) . '/' . $record->hexID . '?username=zordesign&password=GBIF2010';
				$file = file_get_contents($file_url);
				$file_uri = $resource_file_uri . '/' . $record->filename;
				$file = file_save_data($file, $file_uri, FILE_EXISTS_REPLACE);
				if (is_object($file)) {
					watchdog('gbif_resource', '!file uploaded successfully.', array('!file' => $file->uri), WATCHDOG_NOTICE);
					file_usage_add($file, 'gbif_resource', 'node', $file->uid);
					$file = (array)$file;
					$file['description'] = $record->description;
					$file['display'] = 1;
					$node_wrapper->gr_file->set(array($file)); // Wrapping the $file in an array is inconsistent with image file for image field. To learn why.
				}
				elseif ($file == FALSE) {
					watchdog('gbif_resource', 'Failed saving !file.', array('!file' => $file->uri), WATCHDOG_ERROR);
				}
				unset($file_url, $file, $file_uri);

				$node_wrapper->save();
			}
			else {
				drupal_set_message(t('!uri is not available for saving files. Please check whether this module is installed correctly from Web UI.', array('!uri' => $uri)), 'error');
				watchdog('gbif_resource', '!uri is not available for saving files. Please check whether this module is installed correctly from Web UI.', array('!uri' => $uri), WATCHDOG_ERROR);
			}
			unset($ims_id, $node_wrapper, $node);

		} catch (Exception $e) {
			watchdog('gbif_resource', $e->getMessage(), array(), WATCHDOG_ERROR);
			continue;
		}
	}
	return TRUE;
}