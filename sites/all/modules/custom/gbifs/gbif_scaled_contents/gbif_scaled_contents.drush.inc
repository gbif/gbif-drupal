<?php

/**
* Implements hook_drush_command().
*/
function gbif_scaled_contents_drush_command() {
  $items = array();
  $items['sc-migrate'] = array(
    'callback' => 'drush_gbif_scaled_contents_migrate',
    'description' => 'Migrate legacy contents to the new scaled ones.',
  );
  $items['sc-tx-generate'] = array(
    'callback' => 'drush_gbif_scaled_contents_tx_generate',
    'description' => 'Generate taxonomy array for mapping.',
  );
  return $items;
}

function drush_gbif_scaled_contents_migrate() {
  $result = gbif_scaled_contents_migrate();
  drupal_set_message($result);
}
