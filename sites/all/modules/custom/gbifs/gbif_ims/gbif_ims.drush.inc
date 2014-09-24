<?php

/**
 * Implements hook_drush_command().
 */
function gbif_ims_drush_command() {
	$items['gbif-ims-sync'] = array(
		'description' => 'Update and clean up IMS events.',
		'aliases' => array('ims-up'),
	);
	return $items;
}

function drush_gbif_ims_update() {
	$result = gbif_ims_sync();
	drupal_set_message($result);
}