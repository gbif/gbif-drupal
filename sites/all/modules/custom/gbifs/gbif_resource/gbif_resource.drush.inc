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
  $query->entityCondition('bundle', 'resource')
    ->fieldCondition('gr_language', 'tid', $tid_values, 'IN');
  $result = $query->execute();

  if (isset($result['node']) && count($result['node']) > 0) {
    $nids = array_keys($result['node']);
    $set_node_language = function($nid) use ($existing_lang_tid, &$processed_resources) {
      $wrapper = entity_metadata_wrapper('node', $nid);
      $lang_tid = $wrapper->gr_language->value()->tid;
      if (isset($existing_lang_tid[$lang_tid])) {
        $wrapper->language->set($existing_lang_tid[$lang_tid]);
        $wrapper->save();
        $processed_resources++;
      }
    };
    array_walk($nids, $set_node_language);
  }

  $time_end = time();
  $time_elapsed = date('i:s', $time_end - $time_begin);
  drupal_set_message($processed_resources . ' resource language mapped. Time elapsed: ' . $time_elapsed . '.', 'status');

}