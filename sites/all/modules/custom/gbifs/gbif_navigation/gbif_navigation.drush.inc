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
	return $items;
}

function drush_gbif_navigation_menu_item_delete() {
	$menu = menu_load_links('main-menu');
	foreach ($menu as $item) {
		menu_link_delete($item['mlid']);
	}
	drupal_set_message(t('Menu items in main-menu are deleted.', array()), 'notice');
}