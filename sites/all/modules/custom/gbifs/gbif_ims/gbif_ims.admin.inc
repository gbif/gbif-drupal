<?php

function gbif_ims_settings_form() {
	$form['ims'] = array(
		'#type' => 'fieldset',
		'#title' => t('GBIF Information Management System'),
		'#description' => t('Trigger the format update of the events.'),
	);
	$form['ims']['update_submit'] = array(
		'#type' => 'submit',
		'#value' => t('Update events'),
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