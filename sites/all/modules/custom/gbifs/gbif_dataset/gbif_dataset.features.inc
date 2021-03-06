<?php
/**
 * @file
 * gbif_dataset.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_dataset_ctools_plugin_api($module = NULL, $api = NULL) {
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
function gbif_dataset_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gbif_dataset_node_info() {
  $items = array(
    'dataset' => array(
      'name' => t('Dataset'),
      'base' => 'node_content',
      'description' => t('The news content type as part of the new content publication workflow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
