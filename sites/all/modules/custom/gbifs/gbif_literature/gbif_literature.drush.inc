<?php

/**
 * Implements hook_drush_command().
 */
function gbif_literature_drush_command() {
  $items = array();
  $items['mendeley-import'] = array(
    'callback' => 'drush_gbif_literature_import',
    'description' => 'Import/update all literature items to Drupal DB.',
  );
  return $items;
}

function drush_gbif_literature_import() {
  // Prepare the uri for storing retrieved documents
  $documents_file_loc = file_build_uri('gbif_mendeley/documents.json');
  $documents_exist = file_exists($documents_file_loc);

  if ($documents_exist !== TRUE) {
    drupal_set_message('Documents file not available. Check if Mendeley sync is required.', 'error');
  }
  else {
    $documents = json_decode(file_get_contents(drupal_realpath($documents_file_loc)));

    foreach($documents as $doc) {



    }
  }

}