<?php
/**
* @file
* Administration page callbacks for the gbifims module.
*/

/**
* Form builder. Configure annotations.
*
* @ingroup forms
* @see system_settings_form().
*/


/**
* The form to provide a link to cron.php.
*/
function gbifims_form($form, &$form_state) {

	$form['status'] = array(
		'#type' => 'fieldset',
		'#title' => t('Cron status information'),
		);
		
	$form['status']['last'] = array(
		'#markup' => '<div>' . t('gbifims_cron() will next execute the first time cron runs after %time (%seconds seconds from now)' . '</div>',
									array(
									'%time' => date_iso8601(variable_get('gbifims_next_execution', time())),
									'%seconds' => variable_get('gbifims_next_execution', time()) - time(),
									)
								),
								);
	
	if (user_access('administer site configuration')) {
		$form['cron_run'] = array(
			'#type' => 'fieldset',
			'#title' => t('Run cron manually'),
			);
		$form['cron_run']['cron_reset'] = array(
			'#type' => 'checkbox',
			'#title' => t("Run gbifims's cron regardless of whether interval has expired."),
			'#default_value' => FALSE,
			);
		$form['cron_run']['cron_trigger'] = array(
			'#type' => 'submit',
			'#value' => t('Run cron now'),
			'#submit' => array('gbifims_form_cron_run_submit'),
			);
	}
	
	$form['cron_queue_setup'] = array(
		'#type' => 'fieldset',
		'#title' => t('Cron queue setup (for hook_cron_queue_info(), etc.)'),
		);
	$queue_1 = DrupalQueue::get('gbifims_queue_1');
	$queue_2 = DrupalQueue::get('gbifims_queue_2');
		
	$form['cron_queue_setup']['current_cron_queue_status'] = array(
		'#markup' => '<div>' . t('There are currently %queue_1 items in queue 1 and %queue_2 items in queue 2',
									array(
										'%queue_1' => $queue_1->numberOfItems(),
										'%queue_2' => $queue_2->numberOfItems(),
									)
								) . '</div>',
		);
	
	$form['cron_queue_setup']['num_items'] = array(
		'#type' => 'select',
		'#title' => t('Number of items to add to queue'),
		'#options' => drupal_map_assoc(array(1, 5, 10, 100, 1000)),
		'#default_value' => 5,
		);
	
	$form['cron_queue_setup']['queue'] = array(
		'#type' => 'radios',
		'#title' => t('Queue to add items to'),
		'#options' => array(
		'gbifims_queue_1' => t('Queue 1'),
		'gbifims_queue_2' => t('Queue 2'),
		),
		'#default_value' => 'gbifims_queue_1',
		);
	
	$form['cron_queue_setup']['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Add jobs to queue'),
		'#submit' => array('gbifims_add_jobs_to_queue'),
		);
		
	$form['configuration'] = array(
		'#type' => 'fieldset',
		'#title' => t('Configuration of gbifims_cron()'),
		);
		
	$form['configuration']['gbifims_interval'] = array(
		'#type' => 'select',
		'#title' => t('Cron interval'),
		'#description' => t('Time after which gbifims_cron will respond to a processing request.'),
		'#default_value' => variable_get('gbifims_interval', 60*60),
		'#options' => array(
				60 => t('1 minute'),
				300 => t('5 minutes'),
				3600 => t('1 hour'),
				60*60*24 => t('1 day'),
				),
		);

	$form['filemaker'] = array(
		'#type' => 'fieldset',
		'#title' => t('FileMaker library status and configuration'),
		'#weight' => 4 ,
		);

	if ( ($library = libraries_detect('filemaker')) && !empty($library['installed']) ) {
			$form['filemaker']['intro'] = array(
				'#markup' => '<div>FileMaker library detected</div>',
				);
	} else {
		$error = $library['error'];
		$error_message = $library['error message'];
		$form['filemaker']['intro'] = array(
			'#markup' => '<div style="color: red; font-weight: bold">Warning: FileMaker library missing;'.$error.' '.$error_message.'</div>',
		);
		
	}		
		
		
		
	return system_settings_form($form);
}

/**
* Allow user to directly execute cron, optionally forcing it.
*/
function gbifims_form_cron_run_submit($form, &$form_state) {
	if (!empty($form_state['values']['cron_reset'])) {
		variable_set('gbifims_next_execution', 0);
	}

	// Used to make it easy to tell if cron was run by this form.
	$GLOBALS['gbifims_show_status_message'] = TRUE;
	
	if (drupal_cron_run()) {
		drupal_set_message(t('Cron ran successfully.'));
	} else {
		drupal_set_message(t('Cron run failed.'), 'error');
	}
}


/**
* #submit function used to add the items to the queue when signaled by
* the form.
*/
function gbifims_add_jobs_to_queue($form, &$form_state) {
	$queue = $form_state['values']['queue'];
	$num_items = $form_state['values']['num_items'];
	$queue = DrupalQueue::get($queue);
	
	for ($i=1; $i <= $num_items; $i++) {
		$item = new stdClass();
		$item->created = time();
		$item->sequence = $i;
		$queue->createItem($item);
	}
}

