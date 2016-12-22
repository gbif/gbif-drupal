<?php

function gbif_event_drush_command() {
  $items['event-map'] = array(
    'callback' => 'drush_gbif_event_map',
    'description' => 'Re-map language and country to indexable fields.',
  );
  return $items;
}

function drush_gbif_event_map() {
  $time_begin = time();
  $processed_resources = 0;

  // map all events to English
  // map ge_venue_country to field_country
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'event');
  $result = $query->execute();

  if (isset($result['node']) && count($result['node']) > 0) {
    $nids = array_keys($result['node']);
    $set_node_mapping = function($nid) use (&$processed_resources) {
      $wrapper = entity_metadata_wrapper('node', $nid);
      $wrapper->language->set('en');
      $country = $wrapper->ge_venue_country->value();
      $wrapper->field_country->set([$country->tid]);
      $wrapper->log->set('CMS API deployment: Event content property mappings for language and country.');
      $wrapper->save();
      drupal_set_message('Event nid: ' . $wrapper->getIdentifier() . ' saved with language ' . 'en', 'status');
      $processed_resources++;
    };
    array_walk($nids, $set_node_mapping);
  }

  $time_end = time();
  $time_elapsed = date('i:s', $time_end - $time_begin);
  $num_not_processed = count($result['node']) - $processed_resources;
  drupal_set_message($processed_resources . ' resource language mapped. ' . $num_not_processed . ' not processed. Time elapsed: ' . $time_elapsed . '.', 'status');
}