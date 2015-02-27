<?php
/**
 * Forms and functions for the admin page of gbif_ims module.
 * @link http://getlevelten.com/blog/randall-knutson/cron-queues-processing-large-amounts-data-cron
 * @link http://www.ent.iastate.edu/it/Batch_and_Queue.pdf
 * @link http://dominiquedecooman.com/blog/drupal-7-tip-cron-queues
 */

function gbif_ims_config_form() {
	// Cron job configuration.
	$form['status'] = array(
		'#type' => 'fieldset',
		'#title' => t('Sync status information'),
	);
	$form['status']['intro'] = array(
		'#markup' => '<div>' . t('If you have administrative privileges you can run synchronisation from this page and see the results.') . '</div>',
	);
	$form['status']['last'] = array(
		'#markup' => '<div>' . t('The synchronisation will next execute the first time cron runs after %time (%seconds seconds from now).',
				array(
					'%time' => date_iso8601(variable_get('gbif_ims_sync_next_execution', time())),
					'%seconds' => variable_get('gbif_ims_sync_next_execution', time()) - time(),
				)
			) . '</div>',
	);

	if (user_access('administer site configuration')) {
		// Manual synchronisation.
		$form['ims_sync'] = array(
			'#type' => 'fieldset',
			'#title' => t('GBIF Information Management System Synchronisation'),
			'#description' => t('Manually synchronise the following content from the IMS: contact, country, GBIF area, group, group role, node, participant, event, city, event status, list of people in events and list of resources in events. This will temporarily make pages that uses these table unavailable until the synchronisation is complete.'),
		);
		$form['ims_sync']['cron_reset'] = array(
			'#type' => 'checkbox',
			'#title' => t("Run synchronisation regardless of whether interval has expired."),
			'#default_value' => FALSE,
		);
		$form['ims_sync']['sync_trigger'] = array(
			'#type' => 'submit',
			'#value' => t('Sync now'),
			'#prefix' => '<div id="sync-div">',
			'#suffix' => '<div id="status-wrapper-sync"></div></div>',
			'#ajax' => array(
				'callback' => 'gbif_ims_sync_ui',
				'wrapper' => 'status-wrapper-sync',
				'effect' => 'fade',
			),
		);
	}

	$form['configuration'] = array(
		'#type' => 'fieldset',
		'#title' => t('Configuration of the IMS synchronisation'),
	);
	$form['configuration']['gbif_ims_sync_interval'] = array(
		'#type' => 'select',
		'#title' => t('Synchronisation interval'),
		'#description' => t('Time after which the synchronisation will respond to a processing request. The new setting will take effect after the next run.'),
		'#default_value' => variable_get('gbif_ims_sync_interval', 3 * 60 * 60),
		'#options' => array(
			3600 => t('1 hour'),
			60 * 60 * 3 => t('3 hours'),
			60 * 60 * 6 => t('6 hours'),
			60 * 60 * 12 => t('12 hours'),
			60 * 60 * 24 => t('1 day'),
			0 => t('Stop'),
		),
	);

	$queue = 'gbif_ims_queue';

	$form['queue_name'] = array(
		'#type' => 'hidden',
		'#value' => $queue,
	);
	$form['queue'] = array(
		'#type' => 'fieldset',
		'#title' => t('Queue status for @name', array('@name' => $queue)),
		'#collapsible' => TRUE,
	);

	// Queue status.
	$items = gbif_ims_retrieve_queue($queue);
	$form['queue']['status'] = array(
		'#type' => 'markup',
		'#markup' => theme('ims_queue_items', array('items' => $items)),
	);

	$form['queue_manage'] = array(
		'#type' => 'fieldset',
		'#title' => t('Queue item management for @name', array('@name' => $queue)),
	);
	$form['queue_manage']['item_to_add'] = array(
		'#title' => t('Choose an item to add'),
		'#type' => 'select',
		'#options' => array('event_update' => t('Event update')),
	);
	$form['queue_manage']['add_item'] = array(
		'#type' => 'submit',
		'#value' => t('Insert into queue'),
		'#submit' => array('gbif_ims_queue_insert'),
	);
	$form['queue_manage']['delete_queue'] = array(
		'#type' => 'submit',
		'#value' => t('Delete the queue and its items'),
		'#submit' => array('gbif_ims_queue_clear'),
	);
	return system_settings_form($form);
}

/**
 * Retrieves the queue from the database for display purposes only.
 *
 * It is not recommended to access the database directly, and this is only here
 * so that the user interface can give a good idea of what's going on in the
 * queue.
 *
 * @param array $queue_name
 *   The name of the queue from which to fetch items.
 */
function gbif_ims_retrieve_queue($queue_name) {
	$items = array();
	$result = db_query("SELECT item_id, data, expire, created FROM {queue} WHERE name = :name ORDER BY item_id",
		array(':name' => $queue_name),
		array('fetch' => PDO::FETCH_ASSOC));
	foreach ($result as $item) {
		$items[] = $item;
	}
	return $items;
}

function gbif_ims_queue_insert($form, &$form_state) {
	$queue = DrupalQueue::get($form_state['values']['queue_name']);
	$queue->createQueue();
	$queue->createItem($form_state['values']['item_to_add']);
	$count = $queue->numberOfItems();
	drupal_set_message(t('Queued your item (@item_to_add). There are now @count items in the queue.', array('@count' => $count, '@item_to_add' => $form_state['values']['item_to_add'])));
	$form_state['rebuild'] = TRUE;
	unset($form_state['input']['item_to_add']);
	$form_state['storage']['insert_counter']++;
}

function gbif_ims_queue_clear($form, &$form_state) {
	$queue = DrupalQueue::get($form_state['values']['queue_name']);
	$queue->deleteQueue();
	drupal_set_message(t('Deleted the @queue_name queue and its items.', array('@queue_name' => $form_state['values']['queue_name'])));
}