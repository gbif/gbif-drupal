<?php
/**
 * @file
 * gbif_legacy_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_legacy_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gbif_legacy_news_node_info() {
  $items = array(
    'newsarticle' => array(
      'name' => t('News item'),
      'base' => 'node_content',
      'description' => t('Legacy news content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
