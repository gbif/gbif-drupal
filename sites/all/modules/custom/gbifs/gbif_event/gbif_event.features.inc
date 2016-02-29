<?php
/**
 * @file
 * gbif_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gbif_event_views_api($module = NULL, $api = NULL) {
  return array(
    'api' => 3.0,
    'template path' => drupal_get_path('module', 'gbif_event' . '/theme'),
  );
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function gbif_event_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['d M Y'] = 'd M Y';
  return $custom_date_formats;
}

/**
 * Implements hook_node_info().
 */
function gbif_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Handling GBIF events to support internal and external communication.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
