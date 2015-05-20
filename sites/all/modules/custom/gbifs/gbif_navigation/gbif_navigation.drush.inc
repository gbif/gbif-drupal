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
  $items['batch-url-style'] = array(
    'callback' => 'drush_gbif_navigation_batch_url_style',
    'description' => 'Batch update url style.',
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

function drush_gbif_navigation_batch_url_style() {
  $batchs = array(
    array(
      'from' => 'usingdata/summary',
      'to' => 'using-data/summary'
    ),
    array(
      'from' => 'usingdata/sciencerelevance',
      'to' => 'using-data/science-relevance'
    ),
    array(
      'from' => 'usingdata/methods',
      'to' => 'using-data/methods'
    ),
    array(
      'from' => 'usingdata/dataapplications',
      'to' => 'using-data/data-applications'
    ),
    array(
      'from' => 'usingdata/policyrelevance',
      'to' => 'using-data/policy-relevance'
    ),
    array(
      'from' => 'participation/howtojoin',
      'to' => 'participation/how-to-join'
    ),
    array(
      'from' => 'capacityenhancement/summary',
      'to' => 'capacity-enhancement/summary'
    ),
    array(
      'from' => 'capacityenhancement/support-programme',
      'to' => 'capacity-enhancement/support-programme'
    ),
    array(
      'from' => 'capacityenhancement/regionalcollaboration',
      'to' => 'capacity-enhancement/regional-collaboration'
    ),
    array(
      'from' => 'capacityenhancement/training',
      'to' => 'capacity-enhancement/training'
    ),
    array(
      'from' => 'capacityenhancement/capacityprogrammes',
      'to' => 'capacity-enhancement/capacity-programmes'
    ),
    array(
      'from' => 'capacityenhancement/current-projects',
      'to' => 'capacity-enhancement/current-projects'
    ),
    array(
      'from' => 'capacityenhancement/past-projects',
      'to' => 'capacity-enhancement/past-projects'
    ),
    array(
      'from' => 'resources/keyinformation',
      'to' => 'resources/key-information'
    ),
    array(
      'from' => 'whatisgbif',
      'to' => 'what-is-gbif'
    ),
    array(
      'from' => 'governance/standingcommittees',
      'to' => 'governance/standing-committees'
    ),
    array(
      'from' => 'whoweworkwith',
      'to' => 'who-we-work-with'
    ),
    array(
      'from' => 'contact/contactus',
      'to' => 'contact/contact-us'
    ),
    array(
      'from' => 'contact/directoryofcontacts',
      'to' => 'contact/directory-of-contacts'
    ),
    array(
      'from' => 'faq/datause',
      'to' => 'faq/data-use'
    ),
  );

  foreach ($batchs as $batch) {
    // update the node URL alias
    $node = menu_get_object('node', 1, drupal_lookup_path('source', $batch['from']));
    if (is_object($node)) {
      $path = array();
      $path = path_load('node/' . $node->nid);
      if (isset($path['pid'])) {
        $node->path = array(
          'alias' => $batch['to'],
          'language' => 'und',
          'pathauto' => 0,
          'pid' => $path['pid'],
          'source' => $path['source'],
          'original' => $path,
        );
        try {
          node_save($node);
        }
        catch (Exception $e) {
          watchdog('gbif_navigation', $e, array(), WATCHDOG_ERROR);
        }
      }
      else {
        watchdog('gbif_navigation', 'Path !path not retrieved correctly.', array('!path' => 'node/' . $node->nid), WATCHDOG_ERROR);
      }
    }
  }
  $message = t('Batch processing finished.');
  watchdog('gbif_navigation', $message , NULL, WATCHDOG_NOTICE);
}