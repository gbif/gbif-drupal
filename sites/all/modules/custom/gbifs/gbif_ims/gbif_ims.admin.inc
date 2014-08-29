<?php

function gbif_ims_settings_form() {
	$form['ims_sync'] = array(
		'#type' => 'fieldset',
		'#title' => t('GBIF Information Management System'),
		'#description' => t('Synchronise contact, country, GBIF area, group, group role, node and participant information from the IMS on FileMaker.'),
	);
	$form['ims_sync']['sync_trigger'] = array(
		'#type' => 'submit',
		'#value' => t('Sync'),
		'#prefix' => '<div id="sync-div">',
		'#suffix' => '<div id="status-wrapper-sync"></div></div>',
		'#ajax' => array(
			'callback' => 'gbif_ims_sync',
			'wrapper' => 'status-wrapper-sync',
			'effect' => 'fade',
		),
	);
	$form['ims_event'] = array(
		'#type' => 'fieldset',
		'#title' => t('IMS event and resource update'),
		'#description' => t('This is a temporary feature that fixes how event and resource are saved in Drupal DB. This ensures the HTML coming from IMS are properly filtered by normal Drupal content filtering.'),
	);
	$form['ims_event']['update_submit'] = array(
		'#type' => 'submit',
		'#value' => t('Update'),
		'#prefix' => '<div id="update-div">',
		'#suffix' => '<div id="status-wrapper"></div></div>',
		'#ajax' => array(
			'callback' => 'gbif_ims_event_update',
			'wrapper' => 'status-wrapper',
			'effect' => 'fade',
		),
	);
	return system_settings_form($form);
}