<?php

/**
 * Implements hook_drush_command().
 */
function gbif_ims_drush_command() {
	$items['gbif-ims-sync'] = array(
		'callback' => 'drush_gbif_ims_sync',
		'description' => 'Synchronise IMS base tables.',
	);
	return $items;
}

function drush_gbif_ims_sync() {
	$result = gbif_ims_sync();
	drupal_set_message($result);
}