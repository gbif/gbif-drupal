<?php
/**
* @file
* Administration page callbacks for the gfxr module.
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
function gfxr_form($form, &$form_state) {

	$form['status'] = array(
		'#type' => 'fieldset',
		'#title' => t('GBIF Fixer status information'),
		);
		
	$form['status']['last'] = array(
		'#markup' => '<div><b>[</b>gfxr:baseurl<b>]</b> as read by the module: '. $GLOBALS['base_url'] . '</div>'
			);
		
	return system_settings_form($form);
}

/**
* Allow user to directly execute cron, optionally forcing it.
*/
function gfxr_form_cron_run_submit($form, &$form_state) {
	// no work needed so far
}

