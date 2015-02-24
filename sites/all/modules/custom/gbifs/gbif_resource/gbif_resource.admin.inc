<?php

function gbif_resource_settings_form() {
	$form['gr_update'] = array(
		'#type' => 'fieldset',
		'#title' => t('Update resource information'),
		'#description' => t('Update resource information from the gbif_ims_file_* and gbif_ims_keyword_* tables to Drupal content type, where event information can be edited. This update action honours the update interval of the IMS settings. You can however force the update by checking the option below.'),
	);
	$form['gr_update']['cron_reset'] = array(
		'#type' => 'checkbox',
		'#title' => t("Run resource update regardless of whether the interval has expired."),
		'#default_value' => FALSE,
	);
	$form['gr_update']['update'] = array(
		'#type' => 'submit',
		'#value' => t('Update now'),
		'#prefix' => '<div id="updatediv">',
		'#suffix' => '<div id="status-wrapper-update"></div></div>',
		'#ajax' => array(
			'callback' => 'gbif_resource_sync_ui',
			'wrapper' => 'status-wrapper-update',
			'effect' => 'fade',
		),
	);

	return system_settings_form($form);
}