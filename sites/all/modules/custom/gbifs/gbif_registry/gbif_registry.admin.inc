<?php

/**
 * Use tableselect with nested options in each row.
 * @see http://www.hexblot.com/blog/drupal-tableselect-fields
 * @param $form
 * @param $form_state
 * @return array
 */
function gbif_registry_eoi_settings_form($form, &$form_state) {

	// Scan the directory and list the status of EOIs.
	if (user_access('access registry console')) {

		$queue_type = 'queue';
		$form = array(
			'#title' => t('Awaiting for approval'),
			'#type' => 'fieldset',
		);
		$queue_uri = drupal_realpath('public://gbif_registry/eoi/' . $queue_type);
		$directory_exist = file_prepare_directory($queue_uri, FILE_MODIFY_PERMISSIONS);

		if ($directory_exist) {
      $header = array(
        'date' => t('Date'),
        'institution' => t('Institution'),
        'contact' => t('Contact'),
        'endorsing_body' => t('Endorsing body'),
        'status' => t('Status'),
      );

      // prepare all rows
      $options = array();
      $default_values = array();
      $queue_items = _gbif_registry_list_queue($queue_type);
      if (!empty($queue_items)) {
        foreach ($queue_items as $k => $queue_item) {

          // row token
          $row_token = $queue_item['raw_json']['workflow_control']['date'] . '_' . $queue_item['raw_json']['workflow_control']['UUID'];

          // contact field
          $contact_name = $queue_item['raw_json']['contact']['title'] . ' ' . $queue_item['raw_json']['contact']['firstName'] . ' ' . $queue_item['raw_json']['contact']['lastName'];
          $contact_field = array(
            '#markup' => l($contact_name, 'mailto:' . $queue_item['raw_json']['contact']['email'], array('absolute' => TRUE))
          );

          // endorsing body
          if ($queue_item['raw_json']['endorsement']['beEndorsedByType'] == 'nc') {
            // If seeking arrangement by Nodes Committee, a select list is populated.
            // and chosen value is inserted when sending to the registry.
            if (!isset($nodes_options) || empty($nodes_options)) {
              $api_call = _gbif_participant_api_registry_node() . '?limit=300';
              $json = json_decode(file_get_contents($api_call), TRUE);
              $nodes = $json['results'];
              $nodes_options = array();
            }
            // prepare the array for options
            foreach ($nodes as $node) {
              $key = $node['key'];
              $nodes_options[$key] = $node['title'];
            }
            $endorsing_body_field = array(
              '#type' => 'select',
              '#title' => 'GBIF Participant Nodes Committee',
              '#options' => $nodes_options,
              '#name' => 'endorsing_body[' . $row_token . ']',
            );
          }
          else {
            $endorsing_body_field = array('#markup' => $queue_item['raw_json']['endorsement']['endorsingParticipant']['participantTitle']);
          }

          $options[$row_token] = array(
            'date' => $queue_item['raw_json']['workflow_control']['date'],
            'institution' => $queue_item['raw_json']['org']['title'],
            'contact' => array('data' => $contact_field),
            'endorsing_body' => array('data' => $endorsing_body_field),
            'status' => $queue_item['raw_json']['workflow_control']['status'],
          );
        }
      }
      $form['endorsing_body'] = array(
        '#type' => 'value',
      );

      // prepare the form
      $form['eoi_queue'] = array(
        '#type' => 'tableselect',
        '#header' => $header,
        '#options' => $options,
        '#empty' => t('No registration request in queue.')
      );
      $form['actions']['#type'] = 'actions';
      $form['actions']['approve'] = array(
        '#type' => 'submit',
        '#value' => t('Approve')
      );
      $form['actions']['reject'] = array(
        '#type' => 'submit',
        '#value' => t('Reject')
      );
      $form['#submit'] = array('gbif_registry_eoi_settings_form_submit');
		}
	}
	else {
		$form['gbif_registry_eoi'] = array(
			'#title' => t('Expression of interest'),
			'#type' => 'fieldset',
			'#description' => t("It seems like you don't have permission to access the registry console. Please consult system administrator."),
		);
	}
	return $form;
}

/**
 * Scan the directory and return the list of items in queue.
 */
function _gbif_registry_list_queue($queue_type) {
	$directory = drupal_realpath('public://gbif_registry/eoi/' . $queue_type);
	$queue_items = array();
	$iterator = new DirectoryIterator($directory);
	foreach ($iterator as $file) {
		if ($file->isFile() && $file->isReadable() && $file->isWritable()) {
			$file_path = $directory . '/' . $file->getFilename();
			$item = array(
				'raw_json' => json_decode(file_get_contents($file_path), TRUE),
				'file_path' => $file_path
			);
			$queue_items[] = $item;
		}
	}
	return $queue_items;
}

/**
 * Handles submitted data and process it accordingly.
 */
function gbif_registry_eoi_settings_form_submit($form, &$form_state) {
  if (isset($form_state['values'])) {
    $endorsing_body = $form_state['values']['endorsing_body'];
    $eoi_queue = $form_state['values']['eoi_queue'];
    $item_checked = FALSE;
    foreach ($eoi_queue as $token => $checked) {
      if ($checked == $token) {
        // find out if the endorsing body of the submission is empty.
        // if so, retrieve the Node object from the Registry and save it into the submission,
        // before posting to the Registry for a new organisation.
        $item_checked = TRUE;
        global $user;
        $case = explode('_', $checked);
        $directory = drupal_realpath('public://gbif_registry/eoi/queue');
        $file_path = $directory . '/' . $case[0] . '-' . $case[1] . '.json';
        $json = json_decode(file_get_contents($file_path), TRUE);
        if ($json['endorsement']['beEndorsedByType'] == 'nc' && strtolower($form_state['values']['op']) !== 'reject') {
          $uuid = $endorsing_body[$checked];
          $api_call = _gbif_participant_api_registry_node() . '/' . $uuid;
          $node_json = json_decode(file_get_contents($api_call), TRUE);
          $json['endorsement']['endorsingParticipant'] = $node_json;
          $json['workflow_control']['modified_timestamp'] = time();
          $json['workflow_control']['modified_time_formatted'] = gbif_tweaks_format_time();
          $json['workflow_control']['processor'] = $user->name;

          // save the file in its current location
          $file_destination = file_build_uri('gbif_registry/eoi/queue/' . $case[0] . '-' . $case[1] . '.json');
          $file_save_success = file_save_data(json_encode($json), $file_destination, FILE_EXISTS_REPLACE);
          if ($file_save_success !== FALSE) {
            $message = t('The selected organisation: !organisation has been designated as the endorsing node for !institution.', array('!organisation' => $node_json['title'], '!institution' => $json['org']['title']));
            watchdog('gbif_registry', $message, NULL, WATCHDOG_NOTICE);
            drupal_set_message($message, 'status');
          }
        }

        // proceed to initiate the POST request to the Registry.
        $op = strtolower($form_state['values']['op']);
        $post_url = url('admin/config/gbif/registry/eoi/process/' . $op . '/' . $checked);
        drupal_goto($post_url);
      }
    }
    if ($item_checked == FALSE) {
      $message = t('None has been selected.', array());
      watchdog('gbif_registry', $message, NULL, WATCHDOG_NOTICE);
      drupal_set_message($message, 'warning');
    }
  }
}