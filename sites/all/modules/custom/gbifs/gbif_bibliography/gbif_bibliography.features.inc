<?php
/**
 * @file
 * gbif_bibliography.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_bibliography_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gbif_bibliography_node_info() {
  $items = array(
    'biblio_mendeley' => array(
      'name' => t('Bibliography'),
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
