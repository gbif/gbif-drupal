<?php

/**
 * Implements hook_drush_command().
 */
function gbif_navigation_drush_command() {
	$items = array();
	$items['delete-menu-items'] = array(
		'callback' => 'drush_gbif_navigation_menu_item_delete',
		'description' => 'Delete all menu items of a given menu.',
	);
	$items['refresh-gbif-menus'] = array(
		'callback' => 'drush_gbif_navigation_refresh_gbif_menus',
		'description' => 'Refresh all GBIF menus.',
	);
	return $items;
}

function drush_gbif_navigation_menu_item_delete() {
	$menu = menu_load_links('main-menu');
	foreach ($menu as $item) {
		menu_link_delete($item['mlid']);
	}
	drupal_set_message(t('Menu items in main-menu are deleted.', array()), 'notice');
}

/**
 * Refresh GBIF related menus from code.
 */
function drush_gbif_navigation_refresh_gbif_menus() {
	$menus = _gbif_navigation_default_menus();

	$options = array(
		'create_content'  => FALSE,
		'link_to_content' => TRUE,
		'remove_menu_items' => FALSE
	);

	$result = array(
		'failed' => 0
	);

	foreach ($menus as $menu) {
		// Delete all menu items
		menu_delete_links($menu['menu_name']);
		menu_delete(menu_load($menu['menu_name']));

		// Populate all menu items
		menu_save($menu);
		$menu_file = drupal_get_path('module', 'gbif_navigation') . '/' . $menu['menu_name'] . '-default.txt';
		$import_result = menu_import_file($menu_file, $menu['menu_name'], $options);

		$result['failed'] += $import_result['failed'];
	}

	// logging
	$message = format_plural($import_result['failed'],
		'Menu refreshed with @count failed item',
		'Menu refreshed with @count failed items', array());
	watchdog('gbif_navigation', $message, NULL, WATCHDOG_INFO);
  drupal_set_message($message, 'status');

	$rebuild_result = menu_rebuild();
	if ($rebuild_result == TRUE) {
    $message = 'Menu successfully rebuilt.';
		watchdog('gbif_navigation', $message, NULL, WATCHDOG_INFO);
    drupal_set_message($message, 'status');
	}
	else {
    $message = 'Menu rebuilt failed.';
		watchdog('gbif_navigation', $message, NULL, WATCHDOG_INFO);
    drupal_set_message($message, 'error');
	}
}