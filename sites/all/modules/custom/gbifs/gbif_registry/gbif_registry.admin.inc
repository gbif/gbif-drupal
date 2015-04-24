<?php

function gbif_registry_eoi_settings_form($form, &$form_state) {

	// Scan the directory and list the status of EOIs.
	if (user_access('access registry console')) {

		$queue_type = 'queue';
		$form = array(
			'#title' => t('Awaiting for approval'),
			'#type' => 'fieldset',
			'#theme' => 'eoi_queue_form'
		);
		$queue_uri = drupal_realpath('public://gbif_registry/eoi/' . $queue_type);
		$directory_exist = file_prepare_directory($queue_uri, FILE_MODIFY_PERMISSIONS);

		if ($directory_exist) {
			$queue_items = _gbif_registry_list_queue($queue_type);
			if (!empty($queue_items)) {
				foreach ($queue_items as $i => $item) {
					$form_item = '';
					$form_item = $item['raw_json']['workflow_control']['date'] . '_' . $item['raw_json']['workflow_control']['UUID'];

					// raw value
					$form[$form_item]['raw_value'] = array(
						'#type' => 'hidden',
						'#value' => $item['raw_json'],
					);

					// date
					$form[$form_item]['date'] = array(
						'#markup' => $item['raw_json']['workflow_control']['date']
					);

					$form[$form_item]['institution'] = array(
						'#markup' => $item['raw_json']['org']['title']
					);
					$contact_name = $item['raw_json']['contact']['title'] . ' ' .$item['raw_json']['contact']['firstName'] . ' ' .$item['raw_json']['contact']['lastName'];
					$form[$form_item]['contact'] = array(
						'#markup' => l($contact_name, 'mailto:' . $item['raw_json']['contact']['email'], array('absolute' => TRUE))
					);

					// endorsing body
					if ($item['raw_json']['endorsement']['beEndorsedByType'] == 'nc') {
						$form[$form_item]['beEndorsedBy'] = array('#markup' => 'GBIF Participant Nodes Committee');
					}
					else {
						$form[$form_item]['beEndorsedBy'] = array('#markup' => $item['raw_json']['endorsement']['endorsingParticipant']['participantTitle']);
					}

					// status
					$form[$form_item]['status'] = array(
						'#markup' => $item['raw_json']['workflow_control']['status']
					);

					// file path
					$form[$form_item]['file_path'] = array(
						'#type' => 'hidden',
						'#value' => $item['file_path']
					);

					// operations according to $queue_type
					switch ($queue_type) {
						case 'queue':
							// Approve and reject
							$form[$form_item]['operation_approve'] = array('#type' => 'link', '#title' => t('approve'), '#href' => 'admin/config/gbif/registry/eoi/process/approve/' . $form_item, '#options' => array('query' => drupal_get_destination()));
							$form[$form_item]['operation_reject'] = array('#type' => 'link', '#title' => t('reject'), '#href' => 'admin/config/gbif/registry/eoi/process/reject/' . $form_item, '#options' => array('query' => drupal_get_destination()));
							break;
						case 'rejected':
							// Only approve
							$form[$form_item]['operation_approve'] = array(
								'#id' => 'gbif_registry_eoi_approve_' . $i,
								'#type' => 'button',
								'#value' => t('Approve'),
								'#ajax' => array(
									'callback' => 'gbif_registry_eoi_approve',
									'wrapper' => 'action-wrapper-' . $queue_type,
									'effect' => 'fade'
								),
								'#attributes' => array(
									'style' => 'margin:0px;padding:5px;',
								)
							);
							break;
						case 'approved':
							// Only view
							$form[$form_item]['operation_view'] = array(
								'#id' => 'gbif_registry_eoi_view_' . $i,
								'#type' => 'button',
								'#value' => t('View'),
								'#ajax' => array(
									'callback' => 'gbif_registry_eoi_view',
									'wrapper' => 'action-wrapper-' . $queue_type,
									'effect' => 'fade'
								),
								'#attributes' => array(
									'style' => 'margin:0px;padding:5px;',
								)
							);
							break;
					}
				}
			}
			else {
				$form['gbif_registry_eoi'] = array(
					'#title' => t('Expression of interest'),
					'#type' => 'fieldset',
					'#description' => t("No EOI request in queue."),
				);
			}
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