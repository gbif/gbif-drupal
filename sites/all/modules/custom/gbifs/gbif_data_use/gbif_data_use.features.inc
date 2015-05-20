<?php
/**
 * @file
 * gbif_data_use.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_data_use_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gbif_data_use_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gbif_data_use_node_info() {
  $items = array(
    'usesofdata' => array(
      'name' => t('Featured data use'),
      'base' => 'node_content',
      'description' => t('<em>Uses of Data articles</em> is for content pages featured under "Uses of Data menu" '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
