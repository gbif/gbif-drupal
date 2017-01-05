<?php
/**
 * @file
 * Providing administrative functions to update the statistics.
 * @todo throbber is not shown under the scratchpads_admin theme.
 */
 
function gbif_mendeley_settings_form() {
  drupal_add_library('gbif_mendeley', 'progress', false);
	$form['gbif_mendeley_api'] = array(
		'#title' => t('Mendeley Applications settings'),
		'#type' => 'fieldset',
		'#description' => t('You need to setup an application in http://dev.mendeley.com for the synchronisation to work. When setting up, remember the callback URL is always your base URL followed by "/mendeley/oauth2_callback".'),
	);
	$form['gbif_mendeley_api']['mendeley_app_id'] = array(
		'#title' => t('Mendeley application ID'),
		'#type' => 'textfield',
		'#default_value' => variable_get('mendeley_app_id'),
	);
	$form['gbif_mendeley_api']['mendeley_app_secret'] = array(
		'#title' => t('Mendeley application secret'),
		'#type' => 'textfield',
		'#default_value' => variable_get('mendeley_app_secret'),
	);
	/*
  $form['gbif_mendeley_update'] = array(
    '#type' => 'fieldset',
    '#title' => t('Update documents from Mendeley'),
    '#description' => '<p>' . t('Manually trigger the update of the publication information via Mendeley API and refresh the list of publications that are relevant to the Node.') . '</p>',
  );
  $form['gbif_mendeley_update']['update_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update now'),
		'#submit' => array('gbif_mendeley_retrieve_by_oauth2'),
  );
	*/
  $form['gbif_mendeley_analyse'] = array(
    '#type' => 'fieldset',
    '#title' => t('Analyse retrieved documents from Mendeley'),
    '#description' => '<p>' . t('Group retrieved documents according to pre-defined sets of tags and produce lists in configurable blocks.') . '</p>',
  );
  $form['gbif_mendeley_analyse']['analyse_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Analyse now'),
    '#prefix' => '<div id="analyse-div">',
    '#suffix' => '<div id="analyse-status-wrapper"></div></div>',
    '#ajax' => array(
      'callback' => 'gbif_mendeley_analyse',
      'wrapper' => 'analyse-status-wrapper',
      'effect' => 'fade',
    ),
  );
  $form['gbif_mendeley_update_interval'] = array(
    '#title' => t('Automatic update interval'),
    '#type' => 'fieldset',
    '#description' => t('You can decide how frequently you want to run the update together with the system cron jobs.'),
  );
  $interval = drupal_map_assoc(array(1800, 3600, 10800, 21600, 32400, 43200, 86400, 259200), 'format_interval');
  $interval[0] = '<' . t('none') . '>';
  $form['gbif_mendeley_update_interval']['update_interval'] = array(
    '#type' => 'select',
    '#default_value' => variable_get('gbif_mendeley_update_interval', 86400),
    '#options' => $interval,
  );
  $form['#submit'] = array('gbif_mendeley_settings_form_submit');
  return system_settings_form($form);
}

function gbif_mendeley_settings_form_submit($form, &$form_state) {
	variable_set('mendeley_app_id', $form_state['values']['mendeley_app_id']);
	variable_set('mendeley_app_secret', $form_state['values']['mendeley_app_secret']);
  variable_set('gbif_mendeley_update_interval', $form_state['values']['update_interval']);
}