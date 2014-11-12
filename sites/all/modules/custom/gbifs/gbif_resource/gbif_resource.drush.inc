<?php

/**
 * Implements hook_drush_command().
 */
function gbif_resource_drush_command() {
	$items = array();
	$items['resource-sync'] = array(
		'callback' => 'drush_gbif_resource_sync',
		'description' => 'Synchronise resources from IMS base tables.',
	);
	return $items;
}

function drush_gbif_resource_sync() {
	$result = gbif_resource_sync();
	drupal_set_message($result);
}