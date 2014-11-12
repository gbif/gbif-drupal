<?php
/**
 *
 * @defgroup  Cron
 * @ingroup GBIF
 *
 * Attempt to keep the FileMaker related 
 * functions separate from the main module
 */

module_load_include('inc', 'gbif_ims', 'gbif_ims.schema');

/**
 * Break apart each of the data migration tasks 
 */
function _gbif_ims_sync() {
	$schema = _gbif_ims_tables();

	foreach ($schema as $table_name => $table) {
		db_truncate($table_name)->execute();

		$IMS = ims_connection();
		$IMS_records = $IMS->newFindCommand($table['ims_eqv']);

		/*
		 * Some tables have large amount of records that it'll drain memory to get
		 * all at once. Here we insert 3000 records per attempt until no more
		 * records found.
		 */
		$offset = 0;
		$interval = 3000;
		do {
			$IMS_records->setRange($offset, $offset + $interval);
			$result = $IMS_records->execute(); // Performance critical step.
			// Error handling (if any)
			if (FileMaker::isError($result)) {
				$error_message = $result->getMessage();
				$error_code = $result->code;
				watchdog('gbif_ims', 'FileMaker Error: @error_message. Code: @error_code', array(
					'@error_message' => $error_message,
					'@error_code' => $error_code
				), WATCHDOG_ERROR);
				drupal_set_message(t('FileMaker Error: @error_message. Code: @error_code', array(
					'@error_message' => $error_message,
					'@error_code' => $error_code
				)), 'error');
				return FALSE;
			}
			else {
				try {
					_gi_insert_records($result, $table_name, $table);
				} catch (Exception $e) {
					watchdog('gbif_ims', $e->getMessage(), array(), WATCHDOG_ERROR);
					return FALSE;
				}
			}
			$offset = $offset + $interval;
			$count_total = $result->getTableRecordCount();
		} while ($count_total - $offset > 0);

		unset($IMS);
	}

	// @todo Test the real success.
	return TRUE;
}

/**
 * Helper function to insert individual records to the targeted table.
 * @param $result
 * @param $table_name
 * @param $table
 * @throws Exception
 */
function _gi_insert_records($result, $table_name, $table) {
	$records = $result->getRecords();

	foreach ($records as $k => $record) {
		$values = array();
		$valid_record = TRUE;

		foreach ($table['fields'] as $field_name => $field) {
			// Special case for event image record ID.
			if ($field['ims_eqv'] == 'recordID') {
				$value = $record->getRecordId();
			}
			else {
				$value = $record->getField($field['ims_eqv']);
			}

			$is_empty = empty($value);
			if ($is_empty == TRUE && $field['not null'] == TRUE) {
				drupal_set_message(t('Null value conflict on record @id of table @table', array(
					'@id' => $k + 1,
					'@table' => $table_name
				)), 'warning');
				watchdog('GBIF', 'Null value conflict on record @id of table @table', array(
					'@id' => $k + 1,
					'@table' => $table_name
				), WATCHDOG_WARNING);
				$valid_record = FALSE;
				break;
			}

			if (isset($field['type'])) {
				switch ($field['type']) {
					case 'int':
						$value = (int) $value;
						if ($field_name == 'sort_weight') {
							$values[$field_name] = (empty($value)) ? 0 : $value;
						}
						else {
							$values[$field_name] = (empty($value)) ? NULL : $value;
						}
						break;
					default:
						$values[$field_name] = $value;
				}
			}
			elseif (isset($field['mysql_type'])) {
				switch ($field['mysql_type']) {
					case 'DATETIME':
						if (!empty($value)) {

							switch ($field['ims_eqv']) {
								case 'Member_AsOf':
									// original field is returned as "April 2001".
									$value = '01 ' . $value . ' 00:00';
									$format = 'd F Y H:i';
									break;
								case 'MOU2012_Date':
									// format is (so far...) 'mm/dd/yyyy' so we only patch the time.
									$value .= ' 00:00';
									$format = 'm/d/Y H:i';
									break;
								default:
									// IMS timestamp format 06/12/2008 14:07:37.
									$format = 'm/d/Y H:i:s';
									break;
							}

							$date = DateTime::createFromFormat($format, $value);
							// Catch unexpected date format.
							if (!is_object($date)) {
								drupal_set_message(t('Unexpected date format of IMS field !ims_field.', array('!ims_field' => $field['ims_eqv'])), 'error');
								watchdog('gbif_ims', 'Unexpected date format of IMS field !ims_field.', array('!ims_field' => $field['ims_eqv']), WATCHDOG_ERROR);
							}
							$values[$field_name] = $date->format('Y-m-d H:i:s');

						}
						else {
							$values[$field_name] = NULL;
						}
						break;
				}
			}
		}
		if ($valid_record == TRUE) {
			db_insert($table_name)->fields($values)->execute();
		}
	}
}

/**
 * @param $group
 * @return (array) query results.
 *
 * @todo Evaluate whether we consolidate this query and combine it with others.
 */
function _gi_get_participant_list($group) {

	$query = db_select('gbif_ims_participant', 'p');
	$query->leftJoin('gbif_ims_institution', 'i', 'p.institutionID = i.institutionID');
	$query->leftJoin('gbif_ims_country', 'cou', 'p.countryID = cou.countryID');

	// Subquery to be joined.
	$subquery = db_select('gbif_ims_participant', 'p');
	$subquery->leftJoin('gbif_ims_institution', 'i', 'p.institutionID = i.institutionID');
	$subquery->leftJoin('gbif_ims_country', 'cou', 'p.countryID = cou.countryID');
	$subquery->leftJoin('gbif_ims_contact_group_role_node_participant', 'cgrnp', 'p.participantID = cgrnp.participantID');
	$subquery->leftJoin('gbif_ims_contact', 'con', 'cgrnp.contactID = con.contactID');
	$subquery->leftJoin('gbif_ims_institution', 'i_adrs', 'con.institutionID = i_adrs.institutionID');
	$subquery->leftJoin('gbif_ims_country', 'cou_adrs', 'con.countryID_address = cou_adrs.countryID');
	$subquery->leftJoin('gbif_ims_group_role', 'gr', 'cgrnp.group_role_ID = gr.group_role_ID');
	$subquery->addField('p', 'participantID', 'pid');
	$subquery->addField('con', 'first_name');
	$subquery->addField('con', 'last_name');
	$subquery->addField('cgrnp', 'active');
	$subquery->addField('cou_adrs', 'name', 'contact_country');
	$subquery->addField('gr', 'name', 'group_role_name');
	$subquery->addField('con', 'job_position');
	$subquery->addField('i', 'name', 'institution');
	$subquery->addField('i_adrs', 'name', 'contact_institution');
	$subquery->addField('gr', 'sort_weight');
	$subquery->addField('con', 'address');
	$subquery->addField('con', 'email_address');
	$subquery->addField('con', 'city');
	$subquery->addField('con', 'zip_code');
	$subquery->addField('con', 'phone_office');
	$subquery->addField('con', 'fax');
	$subquery->condition('p.gbif_membership', $group);
	$subquery->condition('cgrnp.active', 1);

	$query->leftJoin($subquery, 'con', 'p.participantID = con.pid');

	$query->addField('p', 'name_full', 'participant_name_full');
	$query->addField('p', 'name_short', 'participant_name_short');
	$query->addField('con', 'first_name');
	$query->addField('con', 'last_name');
	$query->addField('con', 'contact_country');
	$query->addField('con', 'group_role_name');
	$query->addField('con', 'job_position');
	$query->addField('con', 'institution');
	$query->addField('con', 'address');
	$query->addField('con', 'contact_institution');
	$query->addField('con', 'email_address');
	$query->addField('con', 'city');
	$query->addField('con', 'zip_code');
	$query->addField('con', 'phone_office');
	$query->addField('con', 'fax');

	$query->condition('p.gbif_membership', $group);
	$query->orderBy('p.name_full')
		->orderBy('con.sort_weight')
		->orderBy('con.first_name');

	$results = $query->execute()->fetchAll();

	// Group contacts according to participant.
	$grouped_results = array();
	foreach ($results as $k => $contact) {
		$grouped_results[$contact->participant_name_short][] = $contact;
	}

	return $grouped_results;
}


function _gi_print_staff_list($group) {
	$query = db_select('gbif_ims_contact', 'c')
		->fields('c');
	$query->condition('c.is_gbif_staff', 1);
	$query->orderBy('c.sort_weight', 'ASC');
	$results = $query->execute()->fetchAll();

	return theme('gi_contact_list', array('results' => $results, 'group' => $group)) ;
}

/**
 * With the same contact details as other lists, this list for Nodes Committee
 * should return the Chair and Vice Chairs, which will be duplicated as they are
 * also Node Managers, and nodes that don't have active Node Manager.
 *
 * The base table is different from _gi_get_committee_list() so for now it is a
 * separate call.
 *
 * @todo To evaluate whether it's easier to maintain if we combine this with _gi_get_committee_list().
 */
function _gi_get_node_committee_list($group) {
	$query = db_select('gbif_ims_node', 'n');
	$query->leftJoin('gbif_ims_participant', 'p', 'p.participantID = n.participantID');
	$query->leftJoin('gbif_ims_contact_group_role_node_participant', 'user_role', 'user_role.nodeID = n.nodeID');
	// Join to the same user role and bring back the active "person".
	$query->leftJoin('gbif_ims_contact_group_role_node_participant', 'active_user_role', 'user_role.group_role_ID = active_user_role.group_role_ID AND user_role.nodeID = active_user_role.nodeID AND active_user_role.active = :active', array(':active' => 1));
	$query->leftJoin('gbif_ims_group_role', 'gr', 'gr.group_role_ID = user_role.group_role_ID');
	$query->leftJoin('gbif_ims_group', 'g', 'g.groupID = gr.groupID');
	// Only bring back contacts for the active "person".
	$query->leftJoin('gbif_ims_contact', 'c', 'c.contactID = user_role.contactID AND user_role.active = :active', array(':active' => 1));
	$query->leftJoin('gbif_ims_institution', 'i', 'i.institutionID = c.institutionID');
	$query->leftJoin('gbif_ims_country', 'cou', 'c.countryID_address = cou.countryID');

	$query->addField('n', 'name_full');
	$query->addField('n', 'name_acronym');
	$query->addField('p', 'name_full', 'participant_name_full');
	$query->addField('p', 'name_short', 'participant_name_short');
	$query->addField('c', 'first_name', 'first_name');
	$query->addField('c', 'last_name', 'last_name');
	$query->addField('c', 'address', 'address');
	$query->addField('c', 'email_address');
	$query->addField('c', 'city');
	$query->addField('c', 'zip_code');
	$query->addField('c', 'phone_office');
	$query->addField('c', 'fax');
	$query->addField('c', 'job_position');
	$query->addField('i', 'acronym', 'contact_institution');
	$query->addField('cou', 'name', 'contact_country');
	$query->addField('gr', 'name', 'role');
	$query->addField('g', 'name', 'group_name');
	$query->addField('gr', 'sort_weight');

	$query->condition(db_or()->condition('p.gbif_membership', array('Voting Participant', 'Associate Country Participant', 'Other Associate Participant'), 'IN')->isNull('p.participantID'));
	$query->condition(db_or()->condition('g.name', $group, '=')->isNull('g.name'));
	$query->condition(db_or()->condition('gr.name', array('Node Manager', 'Chair', '1st Vice Chair', '2nd Vice Chair'), 'IN')->isNull('gr.name'));
	$query->condition('gr.name', array('Secretariat Support', 'Sci-staff', 'GBIF Secretariat Staff'), 'NOT IN');
	// Restrict to active users or accept when there is no active Node Manager for the node.
	$query->condition(db_or()->condition('user_role.active', 1, '=')->condition(db_and()->isNull('active_user_role.contact_group_role_node_participant_ID')->condition('gr.name', 'Node Manager', '=')));

	$query->groupBy('user_role.participantID')
		->groupBy('user_role.nodeID')
		->groupBy('user_role.group_role_ID')
		->groupBy('user_role.contactID');

	$query->orderBy('gr.sort_weight')
		->orderBy('p.name_short')
		->orderBy('c.last_name');

	$results = $query->execute()->fetchAll();

	// Insert "pending appointment" if first_name is empty.
	foreach ($results as &$row) {
		if (empty($row->first_name)) $row->first_name = t('Pending appointment');
	}

	return $results;
}

/**
 * Produce the list of various committees, except Nodes Committee.
 * @param $group
 * @return $results
 */
function _gi_get_committee_list($group) {

	$query = db_select('gbif_ims_contact_group_role_node_participant', 'cgrnp');
	$query->leftjoin('gbif_ims_contact', 'c', 'c.contactID = cgrnp.contactID');
	$query->leftjoin('gbif_ims_group_role', 'gr', 'gr.group_role_ID = cgrnp.group_role_ID');
	$query->leftjoin('gbif_ims_group', 'g', 'g.groupID = gr.groupID');
	$query->leftjoin('gbif_ims_country', 'con', 'con.countryID = c.countryID_address');

	$query->addField('c', 'first_name', 'first_name');
	$query->addField('c', 'last_name', 'last_name');
	$query->addField('c', 'address', 'address');
	$query->addField('c', 'email_address');
	$query->addField('c', 'city');
	$query->addField('c', 'zip_code');
	$query->addField('c', 'phone_office');
	$query->addField('c', 'fax');
	$query->addField('c', 'job_description');
	$query->addField('con', 'name', 'contact_country');
	$query->addField('gr', 'name', 'role');
	$query->addField('gr', 'sort_weight');

	$query->condition('cgrnp.active', 1, '=');
	$query->condition('gr.name', 'Secretariat Support', '<>');
	$query->condition('gr.name', 'Sci-staff', '<>');
	$query->condition('g.name', $group);
	$query->orderBy('gr.sort_weight', 'ASC')
		->orderBy('c.sort_weight', 'ASC')
		->orderBy('c.last_name', 'ASC');

	$results = $query->execute()->fetchAll();

	// For Nodes Steering Group, if there is no representative from a particular
	// region, insert an empty seat "pending appointment".
	// For Nodes Committee, insert "pending appointment" if there is no node
	// manager.
	if ($group == 'Nodes Steering Group') {
		$areas = db_select('gbif_ims_gbif_area', 'ga')->fields('ga')->execute()->fetchAll();

		// The role name of a regional representative has the name of the region.
		// We test the existing of the region name from the role name in order to
		// identify a missing representative.
		foreach ($results as $row) {
			foreach ($areas as $key => $area) {
				$region_exists = strpos($row->role, $area->gbif_area);
				if ($region_exists != FALSE) {
					unset($areas[$key]);
				}
			}
		}

		if (!empty($areas)) {
			foreach ($areas as $area) {
				$contact = new stdClass();
				$contact->first_name = t('Pending appointment');
				$contact->last_name = '';
				$contact->address = '';
				$contact->email_address = '';
				$contact->city = '';
				$contact->zip_code = '';
				$contact->phone_office = '';
				$contact->fax = '';
				$contact->job_description= '';
				$contact->role = 'Regional Node Representative - ' . $area->gbif_area;
				array_push($results, $contact);
			}
		}
	}
	return $results;
}

function _gi_print_committee_list($group) {
	if ($group == 'Nodes Committee') {
		$results = _gi_get_node_committee_list($group);
	}
	else {
		$results = _gi_get_committee_list($group);
	}
	return theme('gi_contact_list', array('results' => $results, 'group' => $group));
}

function _gi_print_participant_list($group) {
	$results = _gi_get_participant_list($group);
	return theme('gi_participant_list', array('results' => $results, 'group' => $group));
}