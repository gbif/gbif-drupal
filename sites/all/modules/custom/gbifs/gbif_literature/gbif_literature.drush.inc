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
  $time_begin = time();

  $term_ref_fields = [
    'keywords' => 'field_mdl_keywords',
    'tags' => 'tx_tags',
  ];

  // Prepare the uri for storing retrieved documents
  $documents_file_loc = file_build_uri('gbif_mendeley/documents.json');
  $documents_exist = file_exists($documents_file_loc);

  if ($documents_exist !== TRUE) {
    drupal_set_message('Documents file not available. Check if Mendeley sync is required.', 'error');
  }
  else {
    $documents = json_decode(file_get_contents(drupal_realpath($documents_file_loc)));

    $import_document = function($doc) {
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

        // set text/integer fields
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
          'year' => 'field_mdl_year',
          'month' => 'field_mdl_month',
          'day' => 'field_mdl_day',
        ];
        $set_text_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set($doc->$source_field);
        };
        array_walk($text_fields, $set_text_value);

        //
        // set serialized fields
        $serialized_fields = [
          'authors' => 'field_mdl_authors',
          'identifiers' => 'field_mdl_identifiers',
          'editors' => 'field_mdl_editors',
          'websites' => 'field_mdl_websites',
        ];
        $set_serialized_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field = serialize($doc->$source_field);
        };
        array_walk($serialized_fields, $set_serialized_value);

        // boolean fields
        $boolean_fields = [
          'authored' => 'field_mdl_authored',
          'read' => 'field_mdl_read',
          'starred' => 'field_mdl_starred',
          'confirmed' => 'field_mdl_confirmed',
          'hidden' => 'field_mdl_hidden',
          'file_attached' => 'field_mdl_file_attached',
        ];
        $set_boolean_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set($doc->$source_field);
        };
        array_walk($boolean_fields, $set_boolean_value);

        // list fields
        $list_fields = [
          'type' => 'field_mdl_type',
        ];
        $set_list_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set($doc->$source_field);
        };
        array_walk($list_fields, $set_list_value);

        // date fields
        $date_fields = [
          'created' => 'field_mdl_created',
          'last_modified' => 'field_mdl_last_modified',
        ];
        $set_date_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set(date('U', strtotime($doc->$source_field)));
        };
        array_walk($date_fields, $set_date_value);

        $wrapper->save();
      }
      else {
        drupal_set_message('Exception.', 'error');
      }
    };

    array_map($import_document, $documents);

    $time_end = time();
    $time_elapsed = date('i:s', $time_end - $time_begin);
    drupal_set_message('Literature import finished. Time elapsed: ' . $time_elapsed . '.', 'status');
  }

}

function drush_gbif_literature_delete() {
  $time_begin = time();
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

  $time_end = time();
  $time_elapsed = date('i:s', $time_end - $time_begin);
  drupal_set_message('Time elapsed: ' . $time_elapsed . '.', 'status');
};