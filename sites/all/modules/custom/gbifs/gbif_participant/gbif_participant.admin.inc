<?php

function gbif_participant_settings_form() {
	$form['gp_populate'] = array(
		'#type' => 'fieldset',
		'#title' => t('Populate participant information'),
		'#description' => t('Populate participant information from the IMS to Drupal content type, where participant information can be edited. Before totally cutting off the data management on the IMS, fields that mean to be edited on the IMS will be shown locked on Drupal.'),
	);
	$form['gp_populate']['populate'] = array(
		'#type' => 'submit',
		'#value' => t('Populate'),
		'#prefix' => '<div id="populate-div">',
		'#suffix' => '<div id="status-wrapper-populate"></div></div>',
		'#ajax' => array(
			'callback' => 'gbif_participant_populate',
			'wrapper' => 'status-wrapper-populate',
			'effect' => 'fade',
		),
	);
	return system_settings_form($form);
}