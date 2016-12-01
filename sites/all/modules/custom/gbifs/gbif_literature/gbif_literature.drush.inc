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
  $items['mendeley-delete'] = array(
    'callback' => 'drush_gbif_literature_delete',
    'description' => 'Delete all literature items in Drupal DB.',
  );
  return $items;
}

function drush_gbif_literature_import() {

  //fields
  $text_fields = [
    'title' => 'title',
    'abstract' => 'field_mdl_abstract',
    'citation_key' => 'field_mdl_citation_key',
    'code' => 'field_mdl_code',
    'firstAuthor' => 'field_mdl_first_author',
    'group_id' =>'field_mdl_group_id',
    'id' => 'field_mdl_id',
    'accessed' => 'field_mdl_accessed',
    'issue' => 'field_mdl_issue',
    'pages' => 'field_mdl_pages',
    'profile_id' => 'field_mdl_profile_id',
    'publisher' => 'field_mdl_publisher',
    'source' => 'field_mdl_source',
    'volume' => 'field_mdl_volume',
  ];

  $term_ref_fields = [
    'keywords' => 'field_mdl_keywords',
    'tags' => 'tx_tags',
  ];

  $serialized_fields = [
    'authors' => 'field_mdl_authors',
    'identifiers' => 'field_mdl_identifiers',
    'editors' => 'field_mdl_editors',
    'websites' => 'field_mdl_websites',
  ];

  $boolean_fields = [
    'authored' => 'field_mdl_authored',
    'read' => 'field_mdl_read',
    'starred' => 'field_mdl_starred',
    'confirmed' => 'field_mdl_confirmed',
    'hidden' => 'field_mdl_hidden',
    'file_attached' => 'field_mdl_file_attached',
  ];

  $integer_fields = [
    'year' => 'field_mdl_year',
    'month' => 'field_mdl_month',
    'day' => 'field_mdl_day',
  ];

  $date_fields = [
    'created' => 'field_mdl_created',
    'last_modified' => 'field_mdl_last_modified',
  ];

  $list_fields = [
    'type' => 'field_mdl_type',
  ];

  // Prepare the uri for storing retrieved documents
  $documents_file_loc = file_build_uri('gbif_mendeley/documents.json');
  $documents_exist = file_exists($documents_file_loc);

  if ($documents_exist !== TRUE) {
    drupal_set_message('Documents file not available. Check if Mendeley sync is required.', 'error');
  }
  else {
    $documents = json_decode(file_get_contents(drupal_realpath($documents_file_loc)));

    foreach($documents as $doc) {

      // query if already an item with the same ID
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'literature')
        ->fieldCondition('field_mdl_id', 'value', $doc->id);
      $exist = $query->execute();

      if (isset($exist['node']) && count($exist['node']) == 1) {
        // update
      }
      elseif (empty($exist)) {
        // import
        $entity_type = 'node';
        $entity = entity_create($entity_type, ['type' => 'literature']);
        $wrapper = entity_metadata_wrapper($entity_type, $entity);

        // set text fields
        foreach ($text_fields as $jfield => $dfield) {
          if (isset($doc->$jfield)) $wrapper->$dfield->set($doc->$jfield);
        }
        unset($jfield, $dfield);

        // set serialized fields
        foreach ($serialized_fields as $jfield => $dfield) {
          // if (isset($doc->$jfield)) $wrapper->$dfield = serialize($doc->$jfield);
        }

        $wrapper->status->set(1);
        $wrapper->save();
      }
      else {
        drupal_set_message('Exception.', 'error');
      }

    }
    drupal_set_message('Literature import finished.', 'status');

  }

}

function drush_gbif_literature_delete() {
  // query if already an item with the same ID
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'literature');
  $exist = $query->execute();

  if (isset($exist['node'])) {
    drupal_set_message(count($exist['node']) . ' documents are deleted.', 'status');

    $ids = [];
    foreach ($exist['node'] as $nid => $node) {
      $ids[] = $nid;
    }
    node_delete_multiple($ids);
  }
  else {
    drupal_set_message('No document to be deleted.', 'status');
  }
};