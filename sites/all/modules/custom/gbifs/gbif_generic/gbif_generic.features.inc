<?php
/**
 * @file
 * gbif_generic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_generic_ctools_plugin_api($module = NULL, $api = NULL) {
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
function gbif_generic_node_info() {
  $items = array(
    'generic' => array(
      'name' => t('Generic content'),
      'base' => 'node_content',
      'description' => t('A content unit that is used to construct a page or be a page itself.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
