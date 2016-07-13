<?php

/**
 * Implements hook_drush_command().
 */
function gbif_mendeley_drush_command() {
  $items = array();
  $items['mendeley-counts'] = array(
    'callback' => 'drush_gbif_mendeley_counts',
    'description' => 'Delete all menu items of a given menu.',
  );
  return $items;
}

function drush_gbif_mendeley_counts() {
  $stats = gbif_mendeley_group_counts();
  drush_print_r($stats);
}