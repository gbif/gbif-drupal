<?php

/**
 * Implements hook_drush_command().
 */
function gbif_resource_drush_command() {
	$items = array();
	/* Disabled since we no longer need to sync from the FileMaker.
	$items['resource-sync'] = array(
		'callback' => 'drush_gbif_resource_sync',
		'description' => 'Synchronise resources from IMS base tables.',
	);
	*/
	return $items;
}

/* Disabled since we no longer need to sync from the FileMaker.
function drush_gbif_resource_sync() {
	$result = gbif_resource_sync();
	drupal_set_message($result);
}
*/