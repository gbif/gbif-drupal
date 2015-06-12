<?php
/**
 * @file drush utilities for GBIF Portal
 * @see http://www.sitepoint.com/drupal-create-drush-command/
 */

/**
 * Implements hook_drush_command().
 */
function gbif_tweaks_drush_command() {
  $items = array();
  $items['stop-auto-sync'] = array(
    'callback' => 'drush_gbif_tweaks_stop_auto_sync',
    'description' => 'Stop synchronizing with external data source.',
    'aliases' => array('sas'),
  );
  $items['resume-auto-sync'] = array(
    'callback' => 'drush_gbif_tweaks_resume_auto_sync',
    'description' => 'Resume synchronizing with external data source.',
    'aliases' => array('ras'),
  );
  return $items;
}

function drush_gbif_tweaks_stop_auto_sync() {
  variable_set('gbif_tweaks_sync_status', 'halted');
  drupal_set_message('External data source syncing stopped.', 'status');
}

function drush_gbif_tweaks_resume_auto_sync() {
  variable_set('gbif_tweaks_sync_status', 'normal');
  drupal_set_message('External data source syncing resumed.', 'status');
}