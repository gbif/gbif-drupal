<?php
/**
 * @file
 * gbif_entry.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_entry_ctools_plugin_api($module = NULL, $api = NULL) {
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
function gbif_entry_node_info() {
  $items = array(
    'entry' => array(
      'name' => t('Entry'),
      'base' => 'node_content',
      'description' => t('A content unit that is used to construct a page. By default each entry is supposed to be displayed as a visual section, and a group of entries are linked together by their menu structure.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
