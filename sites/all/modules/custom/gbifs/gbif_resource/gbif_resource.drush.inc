<?php

/**
 * Implements hook_drush_command().
 */
function gbif_resource_drush_command() {
  $items = array();
  /* Disabled since we no longer need to sync from the FileMaker.
  $items['resource-sync'] = array(
    'callback' => 'drush_gbif_resource_sync',
    'description' => 'Synchronise resources from IMS base tables.',
  );
  */
  $items['resource-lang-map'] = array(
    'callback' => 'drush_gbif_resource_language_map',
    'description' => 'Re-map language from term reference field to node language property.',
  );

  return $items;
}

/* Disabled since we no longer need to sync from the FileMaker.
function drush_gbif_resource_sync() {
	$result = gbif_resource_sync();
	drupal_set_message($result);
}
*/

function drush_gbif_resource_language_map() {
  $time_begin = time();
  $processed_resources = 0;
  $existing_lang_tid = [
    '843' => 'zh-hans',
    '864' => 'ca',
    '929' => 'zh-hant',
    '941' => 'nl',
    '942' => 'ja',
    '944' => 'de',
    '954' => 'da',
    '971' => 'en',
    '989' => 'pt',
    '1016' => 'fr',
    '1024' => 'en',
    '1031' => 'ru',
    '1042' => 'ko',
    '1043' => 'pt',
    '1059' => 'ar',
    '1074' => 'es',
  ];
  $tid_values = array_keys($existing_lang_tid);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'resource')
    ->propertyCondition('status', 1);
  $result = $query->execute();

  if (isset($result['node']) && count($result['node']) > 0) {
    $nids = array_keys($result['node']);
    $set_node_language = function($nid) use ($existing_lang_tid, &$processed_resources, $tid_values) {
      $wrapper = entity_metadata_wrapper('node', $nid);
      $node = node_load($nid);

      // if the node has language term reference set, set accordingly. Or use 'en'
      $lang_tid = $wrapper->gr_language->value()->tid;

      $lang_code = (isset($lang_tid) && isset($existing_lang_tid[$lang_tid])) ? $existing_lang_tid[$lang_tid] : 'en';
      $node->language = $lang_code;

      $node->path = ['pathauto' => 0, 'alias' => 0];

      if (isset($node->workbench_moderation_state_current)) {
        $node->revision = 1;
        $node->workbench_moderation_state_new = 'published';
        $node->workbench_moderation_state_current = 'draft';
      }
      $node->log = 'CMS API deployment: Resource language mapping to content property.';

      node_save($node);
      $processed_resources++;
      drupal_set_message('Resource nid: ' . $node->nid . ' saved with language ' . $lang_code, 'status');
    };
    array_walk($nids, $set_node_language);
  }

  $time_end = time();
  $time_elapsed = date('i:s', $time_end - $time_begin);
  $num_not_processed = count($result['node']) - $processed_resources;
  drupal_set_message($processed_resources . ' resource language mapped. ' . $num_not_processed . ' not processed. Time elapsed: ' . $time_elapsed . '.', 'status');
}