<?php

/**
 * Implements hook_drush_command().
 */
function gbif_literature_drush_command() {
  $items = array();
  $items['mendeley-import'] = array(
    'callback' => 'drush_gbif_literature_import',
    'description' => 'Import/update all literature items to Drupal DB.',
    'arguments' => array(
      'bnum' => 'The number of batches by which this task will be divided.',
      'batch' => 'The n-th of the batches this task will run.'
    ),
  );
  $items['mendeley-delete'] = array(
    'callback' => 'drush_gbif_literature_delete',
    'description' => 'Delete all literature items in Drupal DB.',
    'arguments' => array(
      'batch' => 'The batch in a thousand unit.'
    ),
  );
  return $items;
}

function drush_gbif_literature_import($bnum = 6, $batch = 0) {
  $time_begin = time();
  $processed_docs = 0;
  $topic_mapped = 0;
  $topic_bio_science_mapped = 0;

  // country objects
  static $gbif_countries;
  if (!isset($gbif_countries)) {
    $gbif_enum_countries = json_decode(file_get_contents(GBIF_ENUMERATION_COUNTRY));
    $gbif_countries = [];
    $prepare_countries = function($c) use (&$gbif_countries) {
      $gbif_countries[$c->iso2] = (array)$c;
    };
    array_map($prepare_countries, $gbif_enum_countries);
    ksort($gbif_countries);
  }

  static $topic_mapping;
  if (!isset($topic_mapping)) {
    $topic_mapping = gbif_literature_topic_term_mapping();
  }

  static $topic_mapping_keys;
  if (!isset($topic_mapping_keys)) {
    $topic_mapping_keys = array_keys($topic_mapping);
  }

  static $literature_annotations;
  if (!isset($literature_annotations)) {
    $literature_annotations = gbif_literature_annotations();
  }

  static $documents_exist;
  if (!isset($documents_exist)) {
    $documents_file_loc = file_build_uri('gbif_mendeley/documents.json');
    $documents_exist = file_exists($documents_file_loc);
  }

  static $country_region;
  if (!isset($country_region)) {
    $country_region = _gbif_participant_region_lookup();
  }

  // language
  $available_languages = [
    'chinese_simplified' => 'zh-hans',
    'chinese_traditional' => 'zh-hant',
    'danish' => 'da',
    'german' => 'de',
    'english' => 'en',
    'french' => 'fr',
    'japanese' => 'ja',
    'portuguese' => 'pt',
    'russian' => 'ru',
    'spanish' => 'es',
  ];

  $field_mapping = [
    // set text/integer fields
    'text_fields' => [
      'title' => 'title',   'abstract' => 'field_mdl_abstract',
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
    ],
    // boolean fields
    'boolean_fields' => [
      'authored' => 'field_mdl_authored',
      'read' => 'field_mdl_read',
      'starred' => 'field_mdl_starred',
      'confirmed' => 'field_mdl_confirmed',
      'hidden' => 'field_mdl_hidden',
      'file_attached' => 'field_mdl_file_attached',
    ],
    // serialized fields
    'serialized_fields' => [
      'authors' => 'field_mdl_authors_json',
      'editors' => 'field_mdl_editors_json',
      'identifiers' => 'field_mdl_identifiers',
      'websites' => 'field_mdl_websites',
    ],
    // entity reference fields
    'ent_ref_fields' => [
      'authors' => 'field_mdl_authors',
      'editors' => 'field_mdl_editors',
    ],
    // list fields
    'list_fields' => [
      'type' => 'field_mdl_type',
    ],
    // date fields
    'date_fields'=> [
      'created' => 'field_mdl_created',
      'last_modified' => 'field_mdl_last_modified',
    ],
  ];

  if ($documents_exist !== TRUE) {
    drupal_set_message('Documents file not available. Check if Mendeley sync is required.', 'error');
  }
  else {
    static $documents;
    if (!isset($documents)) {
      $documents = json_decode(file_get_contents(drupal_realpath($documents_file_loc)));
    }

    // journal only documents
    static $docs_journal_only;
    if (!isset($docs_journal_only)) {
      $docs_journal_only = [];
      foreach ($documents as $d) {
        if (isset($d->type) && $d->type == 'journal') {
          $docs_journal_only[] = $d;
        }
      }
    }
    static $journal_only_count;
    if (!isset($journal_only_count)) {
      $journal_only_count = count($docs_journal_only);
    }

    // journal only with GBIF_used
    static $docs_journal_only_gbif_used;
    if (!isset($docs_journal_only_gbif_used)) {
      $docs_journal_only_gbif_used = [];
      foreach ($documents as $d) {
        if (isset($d->type) && $d->type == 'journal' && is_array($d->tags) && in_array('GBIF_used', $d->tags)) {
          $docs_journal_only_gbif_used[] = $d;
        }
      }
    }

    // available sets: $documents, $docs_journal_only, $docs_journal_only_gbif_used
    $sliced_docs = gbif_literature_batch_create($docs_journal_only, $bnum, $batch);
    drupal_set_message('Importing ' . count($sliced_docs) . ' of ' . $journal_only_count . ' documents, starts with ' . $sliced_docs[0]->id, 'status');

    $import_document = function($doc) use (&$processed_docs, &$topic_mapped, &$topic_bio_science_mapped, $topic_mapping, $topic_mapping_keys, $literature_annotations, $gbif_countries, $available_languages, $field_mapping, $country_region) {
      // query if already an item with the same ID
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'literature')
        ->fieldCondition('field_mdl_id', 'value', $doc->id);
      $exist = $query->execute();

      if (isset($exist['node']) && count($exist['node']) == 1) {
        // @todo update procedure
      }
      elseif (empty($exist)) {
        // import
        $entity_type = 'node';
        $entity = entity_create($entity_type, ['type' => 'literature']);
        $wrapper = entity_metadata_wrapper($entity_type, $entity);
        $bio_iso2 = '';

        $set_text_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set($doc->$source_field);
        };
        array_walk($field_mapping['text_fields'], $set_text_value);

        $set_serialized_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field = serialize($doc->$source_field);
        };
        array_walk($field_mapping['serialized_fields'], $set_serialized_value);

        // entity referenced fields
        $set_author_value = function($target_field, $source_field) use (&$wrapper, $doc) {
          if (isset($doc->$source_field)) {
            foreach ($doc->authors as $author) {
              $query = new EntityFieldQuery();
              $query->entityCondition('entity_type', 'node')
                ->entityCondition('bundle', 'literature_author')
                ->propertyCondition('title', $author->last_name, '=')
                ->fieldCondition('field_mdl_first_name', 'value', $author->first_name, '=');

              $result = $query->execute();

              // if there are matched author(s)
              if (isset($result['node'])) {
                $ids = array_keys($result['node']);
                $match_count = count($ids);
                if ($match_count > 1) {
                  drupal_set_message(t('More than one existing authors matched when importing author entities while processing !document_title id: !id.', ['!document_title' => $doc->title, '!id' => $doc->id]), 'error');
                }
                elseif ($match_count == 1) {
                  $target_ids = _append_author_ref($wrapper, $target_field, $ids[0]);
                  $wrapper->$target_field->set($target_ids);
                }
              }
              // when no match author, create one and insert it
              else {
                $literature_author = new stdClass();
                $literature_author->type = 'literature_author';
                node_object_prepare($literature_author);
                $literature_author = entity_metadata_wrapper('node', $literature_author);
                $literature_author->title->set($author->last_name);
                $literature_author->field_mdl_first_name->set($author->first_name);
                $literature_author->status->set(1);
                $literature_author->save();
                $target_ids = _append_author_ref($wrapper, $target_field, $literature_author->getIdentifier());
                $wrapper->$target_field->set($target_ids);
              }
            }
          }
        };
        array_walk($field_mapping['ent_ref_fields'], $set_author_value);

        $set_boolean_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set($doc->$source_field);
        };
        array_walk($field_mapping['boolean_fields'], $set_boolean_value);

        $set_list_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set($doc->$source_field);
        };
        array_walk($field_mapping['list_fields'], $set_list_value);

        $set_date_value = function($target_field, $source_field) use ($wrapper, $doc) {
          if (isset($doc->$source_field)) $wrapper->$target_field->set(date('U', strtotime($doc->$source_field)));
        };
        array_walk($field_mapping['date_fields'], $set_date_value);

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

        // GBIF topic tags
        // Papers tagged GBIF_used will be topically assigned according to this
        // logic:
        // 1) if the tag is already defined in the mapping, following the
        //    mapping to insert into tx_topic field;
        // 2) if no matches found, assign to topic “Biodiversity Science(1327)”.
        if (isset($doc->tags) && is_array($doc->tags)) {
          $mapped_tags = array_intersect($topic_mapping_keys, $doc->tags);
          $mapped_tags_count = count($mapped_tags);
          if ($mapped_tags_count > 0) {
            foreach($mapped_tags as $mapped_tag) {
              $wrapper->tx_topic[] = taxonomy_term_load($topic_mapping[$mapped_tag]);
            }
            $topic_mapped++;
          }
          else {
            $wrapper->tx_topic[] = taxonomy_term_load(1327);
            $topic_bio_science_mapped++;
          }
        }

        // Other tags
        $set_tags_value = function($tag) use ($wrapper, $doc, $literature_annotations, $gbif_countries, $bio_iso2, $available_languages, $country_region) {

          // if the tag is gbif_xyz, put them in gbif literature annotation
          if (in_array($tag, $literature_annotations)) {
            // see if the tag is already in the field.
            $existing_lit_types = $wrapper->field_mdl_gbif_ref_annt->value();
            $matched = false;
            $find_lit_match = function($type) use ($tag, &$matched){
              if ($type->name == $tag) $matched = true;
            };
            array_map($find_lit_match, $existing_lit_types);
            if ($matched === false) {
              $type_terms = taxonomy_get_term_by_name($tag, 'gbif_literature_annotation');
              if (count($type_terms) === 1) {
                $term_keys = array_keys($type_terms);
                $wrapper->field_mdl_gbif_ref_annt[] = taxonomy_term_load($term_keys[0]);
              }
              else {
                drupal_set_message('Tag matching exception for ' . $tag . ' when adding into gbif_literature_annotation', 'error');
              }
            }
            unset($matched);
          }
          // if the tag is iso2 country code, associate with the author from country.
          elseif (isset($gbif_countries[$tag])) {
            $query = new EntityFieldQuery();
            $query->entityCondition('entity_type', 'taxonomy_term')
              ->entityCondition('bundle', 'countries')
              ->fieldCondition('field_iso2', 'value', $tag, '=');

            $result = $query->execute();
            if (isset($result['taxonomy_term']) && count($result['taxonomy_term']) === 1) {
              $term_keys = array_keys($result['taxonomy_term']);
              $wrapper->field_mdl_author_from_country[] = taxonomy_term_load($term_keys[0]);

              // based on this country value, assign gbif_region
              // 'gbif_region' => 'field_gbif_region', is a multi-value list field.
              if (isset($country_region[$tag])) {
                $wrapper->field_gbif_region[] = $country_region[$tag];
              }
            }
          }
          // if [country_title]_biodiversity, associate with generic country
          // @todo include [iso2]_biodiversity.
          elseif (_gbif_literature_bio_tag($tag, $gbif_countries, $bio_iso2)) {
            $query = new EntityFieldQuery();
            $query->entityCondition('entity_type', 'taxonomy_term')
              ->entityCondition('bundle', 'countries')
              ->fieldCondition('field_iso2', 'value', $bio_iso2, '=');

            $result = $query->execute();
            if (isset($result['taxonomy_term']) && count($result['taxonomy_term']) === 1) {
              $term_keys = array_keys($result['taxonomy_term']);
              $wrapper->field_country[] = taxonomy_term_load($term_keys[0]);
            }
            unset($bio_iso2);
          }
          // @todo if the tag is year
          // set language if the tag indicates
          elseif (isset($available_languages[strtolower($tag)])) {
            $wrapper->language->set($available_languages[strtolower($tag)]);
          }
          // the rest will go to tx_tags.
          else {
            $existing_tags = $wrapper->tx_tags->value();
            $matched = false;
            $find_tag_match = function($tx_tag) use (&$matched) {
              if ($tx_tag->name) $matched = true;
            };
            array_map($find_tag_match, $existing_tags);
            if ($matched === false) {
              $tag_terms = taxonomy_get_term_by_name($tag, 'tags');
              if (count($tag_terms) === 1) {
                $tag_keys = array_keys($tag_terms);
                $wrapper->tx_tags[] = taxonomy_term_load($tag_keys[0]);
              }
              elseif (count($tag_terms) ===  0) {
                $voc = taxonomy_vocabulary_machine_name_load('tags');
                $new_tag = gbif_literature_create_taxonomy_term($tag, $voc->vid);
                $wrapper->tx_tags[] = $new_tag;
              }
            }
            unset($matched);
          }
        };
        if (isset($doc->tags) && is_array($doc->tags)) array_map($set_tags_value, $doc->tags);
        // array_unique the field_gbif_region
        $regions = $wrapper->field_gbif_region->raw();
        $regions = array_map('unserialize', array_unique(array_map('serialize', $regions)));
        sort($regions);
        $wrapper->field_gbif_region->set($regions);

        // if after tag mapping the language is still not set, set it to 'en'
        if ($wrapper->language->value() == 'und') $wrapper->language->set('en');
        $wrapper->status->set(1);
        $wrapper->save();
        $processed_docs ++;
      }
      else {
        drupal_set_message('Exception.', 'error');
      }
    };
    array_map($import_document, $sliced_docs);

    $time_end = time();
    $time_elapsed = date('i:s', $time_end - $time_begin);
    drupal_set_message($topic_mapped . ' items mapped in topic, ' . $topic_bio_science_mapped . ' items mapped to biodiversity science.', 'status');
    drupal_set_message($processed_docs . ' literature import finished. Time elapsed: ' . $time_elapsed . '.', 'status');
    drupal_set_message('At ' . format_date(time()), 'status');
  }

}

function drush_gbif_literature_delete($bnum = 6, $batch = 0) {
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
    $batch_size = count($ids) / 7;
    $batch_remainder = count($ids) % 7;
    if ($batch_remainder > 0 && $batch == 7) {
      $sliced_ids = array_slice($ids, $batch * $batch_size + $batch_remainder, $batch_size);
    }
    else {
      $sliced_ids = array_slice($ids, $batch * $batch_size, $batch_size);
    }

    node_delete_multiple($sliced_ids);
  }
  else {
    drupal_set_message('No document to be deleted.', 'status');
  }

  // delete all authors
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'literature_author');
  $results = $query->execute();

  if (isset($results['node'])) {
    drupal_set_message(count($exist['node']) . ' authors are deleted.', 'status');

    $ids = [];
    foreach ($results['node'] as $nid => $node) {
      $ids[] = $nid;
    }

    $sliced_ids = gbif_literature_batch_create($ids, $bnum, $batch);

    drupal_set_message('Deleting starts with ' . $sliced_ids[0], 'status');
    node_delete_multiple($sliced_ids);
  }
  else {
    drupal_set_message('No author to be deleted.', 'status');
  }

  // delete all terms in Keywords vocabulary
  $processed_terms = 0;
  $voc = taxonomy_vocabulary_machine_name_load('keywords');
  $terms = taxonomy_get_tree((int) $voc->vid);
  $delete_term = function($term) use (&$processed_terms) {
    taxonomy_term_delete($term->tid);
    $processed_terms++;
  };

  $sliced_terms = gbif_literature_batch_create($terms, $bnum, $batch);
  array_map($delete_term, $sliced_terms);
  drupal_set_message($processed_terms . ' keywords are deleted.', 'status');

  $time_end = time();
  $time_elapsed = date('i:s', $time_end - $time_begin);
  drupal_set_message('Time elapsed: ' . $time_elapsed . '.', 'status');
};

function gbif_literature_batch_create($items, $bnum, $batch) {
  // available sets: $documents, $docs_journal_only, $docs_journal_only_gbif_used
  $items_count = count($items);
  static $batch_size;
  if (!isset($batch_size)) $batch_size = $items_count / $bnum;
  static $batch_remainder;
  if (!isset($batch_remainder)) $batch_remainder = $items_count % $bnum;

  if ($batch_remainder > 0 && $batch == $bnum - 1) {
    $sliced_items = array_slice($items, $batch * $batch_size);
  }
  else {
    $sliced_items = array_slice($items, $batch * $batch_size, $batch_size);
  }
  return $sliced_items;
}

function gbif_literature_create_taxonomy_term($name, $vid) {
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  taxonomy_term_save($term);
  return $term;
}

/**
 * Term mapping for mapping Mendeley tags to GBIF CMS core taxonomy.
 * Source tags are used with GBIF_used for intersecting.
 * @return array
 */
function gbif_literature_topic_term_mapping() {
  $mapping = [
    'climate_change' => 970, // Climate change
    'conservation' => 826, // Conservation
    'endangered_species' => 826, // Conservation
    'IUCN_red_list' => 826, // Conservation
    'data_management' => 1328, // data management
    'data_paper' => 1330, // data paper
    'ecosystem_services' => 902, // Ecosystem services
    'ecosystem_function' => 902, // Ecosystem services
    'human_health' => 878, // Human health
    'medical_plants' => 878, // Human health
    'invasives' => 968, // Invasives
    'phylogenetics' => 1329, // phylogenetics
    'evolution' => 951, // Evolution
    'species_distributions' => 1038, // Species distributions
    'biogeography' => 1048, // Biogeography
    'taxonomy' => 928, // taxonomy
    'ecology' => 836, // Ecology
    'freshwater' => 887, // Ecology
    'citizen_science' => 975, // Citizen science
    'marine' => 861, // Marine
  ];

  // Don't include GBIF_used in the topic mapping.
  /*
  foreach ($mappings as &$mapping) {
    $mapping['source_tags'][] = 'GBIF_used';
  }
  */
  return $mapping;
}

function gbif_literature_annotations() {
  return [
    'GBIF_used', 'GBIF_cited', 'GBIF_VIP', 'GBIF_discussed', 'GBIF_primary', 'GBIF_acknowledged', 'GBIF_published', 'GBIF_author'
    ];
}

function _gbif_literature_bio_tag($tag, $gbif_countries, &$bio_iso2) {
  $exploded_tag = explode('_', $tag);
  $exists = false;
  foreach ($gbif_countries as $iso2 => $country) {
    if ($exploded_tag[0] == $country['title']) {
      if (strtolower($exploded_tag[1]) == 'biodiversity') {
        $bio_iso2 = $country['iso2'];
        $exists = true;
      }
    }
  }
  return $exists;
}

function _append_author_ref(&$wrapper, $target_field, $new_id) {
  $author_refs = $wrapper->$target_field->raw();
  $target_ids = [];
  $append_nids = function($ref) use (&$target_ids) {
    $target_ids[] = intval($ref);
  };
  array_walk($author_refs, $append_nids);
  $target_ids[] = $new_id;
  return $target_ids;
}