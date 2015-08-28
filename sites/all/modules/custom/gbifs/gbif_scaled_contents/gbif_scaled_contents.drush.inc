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
  $items['sc-file-clean'] = array(
    'callback' => 'drush_gbif_scaled_contents_file_clean',
    'description' => 'Clean up file table.',
  );
  return $items;
}

function drush_gbif_scaled_contents_migrate() {
  $result = gbif_scaled_contents_migrate();
  drupal_set_message($result);
}

function drush_gbif_scaled_contents_file_clean() {
  $query = db_select('file_managed', 'f');
  $query->addField('f', 'fid');
  $query->addField('f', 'uri');
  $results = $query->execute()->fetchAll();

  foreach ($results as $result) {
    if (file_destination($result->uri, FILE_EXISTS_ERROR) == false) {
      // do nothing
    }
    else {
      $file_obj = file_load($result->fid);
      $delete_result = file_delete($file_obj);
      if ($delete_result == TRUE) {
      }
      elseif ($delete_result == FALSE) {
        $message = t('!uri deletion failed.', array('!uri' => $file_obj->uri));
        watchdog('gbif_scaled_contents', $message, array(), WATCHDOG_ERROR);
      }
      elseif (is_array($delete_result)) {
        $message = t('!uri is being used.', array('!uri' => $file_obj->uri));
        watchdog('gbif_scaled_contents', $message, array(), WATCHDOG_ERROR);
      }
      unset($message);
    }
  }
}