<?php
/**
 * @file
 * gbif_literature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_literature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gbif_literature_node_info() {
  $items = array(
    'literature' => array(
      'name' => t('literature'),
      'base' => 'node_content',
      'description' => t('A temporary content type that hosts Mendeley library for site-wide CMS content service.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Before we shift the curation away from Mendeley web/desktop, any changes made here will be overwritten upon Mendeley crawling.'),
    ),
    'literature_author' => array(
      'name' => t('Literature author'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Surname'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
