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

        // keywords
        // 1) see if a new term is already in the voc, if not, create one.
        $set_keywords_value = function($keyword) use ($wrapper, $doc) {
          $terms = taxonomy_get_term_by_name($keyword, 'keywords');
          $voc = taxonomy_vocabulary_machine_name_load('keywords');
          if (count($terms) === 0) {
            $new_term = gbif_literature_create_taxonomy_term($keyword, $voc->vid);
            $wrapper->field_mdl_keywords[] = $new_term;
          }
          elseif (count($terms) === 1) {
            $wrapper->field_mdl_keywords[] = $terms[0];
          }
          elseif (count($terms) > 1) {
            drupal_set_message('More than one keywords matched.', 'error');
          }
          else {
            drupal_set_message('Exception while inserting Keywords field.', 'error');
          }
        };
        if (isset($doc->keywords) && is_array($doc->keywords)) array_map($set_keywords_value, $doc->keywords);

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

  // delete all terms in Keywords vocabulary
  $voc = taxonomy_vocabulary_machine_name_load('keywords');
  $terms = taxonomy_get_tree((int) $voc->vid);
  $delete_term = function($term) {
    taxonomy_term_delete($term->tid);
  };
  array_map($delete_term, $terms);

  $time_end = time();
  $time_elapsed = date('i:s', $time_end - $time_begin);
  drupal_set_message('Time elapsed: ' . $time_elapsed . '.', 'status');
};

function gbif_literature_create_taxonomy_term($name, $vid) {
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  taxonomy_term_save($term);
  return $term;
}

function gbif_literature_topic_term_mapping() {
  return $mapping = [
    [
      'source_tagss' => ['climate_change'],
      'target_tid' => 970,
    ],
    [
      'source_tagss' => ['conservation', 'endangered_species', 'IUCN_red_list'],
      'target_tid' => 826,
    ],
    [
      'source_tags' => ['data_management'],
      'target_tid' => 1328,
    ],
    [
      'source_tags' => ['data_paper'],
      'target_tid' => 1330,
    ],
    [
      'source_tags' => ['ecosystem_services', 'ecosystem_function'],
      'target_tid' => 902,
    ],
    [
      'source_tags' => ['human_health', 'medical_plants'],
      'target_tid' => 878,
    ],
    [
      'source_tags' => ['invasives'],
      'target_tid' => 968,
    ],
    [
      'source_tags' => ['phylogenetics'],
      'target_tid' => 1329,
    ],
    [
      'source_tags' => ['evolution'],
      'target_tid' => 951,
    ],
    [
      'source_tags' => ['species_distributions'],
      'target_tid' => 1038,
    ],
    [
      'source_tags' => ['biogeography'],
      'target_tid' => 1048,
    ],
    [
      'source_tags' => ['taxonomy'],
      'target_tid' => 928,
    ],
    [
      'source_tags' => ['ecology'],
      'target_tid' => 836,
    ],
    [
      'source_tags' => ['freshwater'],
      'target_tid' => 887,
    ],
    [
      'source_tags' => ['citizen_science'],
      'target_tid' => 975,
    ],
    [
      'source_tags' => ['marine'],
      'target_tid' => 861,
    ],
  ];
}