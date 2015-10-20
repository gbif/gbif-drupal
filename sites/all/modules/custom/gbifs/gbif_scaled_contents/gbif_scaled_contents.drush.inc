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

/**
 * The one-time migration script which converts old content types to the new one.
 * 1) Unpublished nodes will remain unpublished.
 * 2) Old node will be deleted after the redirect is saved.
 */
function drush_gbif_scaled_contents_migrate() {
  include_once('taxonomy_terms_mapping.php');
  $voc_field_mapping = gbif_scaled_contents_voc_field_mapping();
  $content_type_mapping = array(
    'newsarticle' => 'news',
    //'usesofdata' => 'data_use',
    //'featureddataset' => 'dataset',
  );

  foreach ($content_type_mapping as $old_type => $new_type) {
    $entity_query = new EntityFieldQuery();
    $entity_query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', array($old_type), 'IN');
    $exist = $entity_query->execute();

    if (isset($exist['node'])) {

      $count = count($exist['node']);
      drush_print($count . ' nodes to be processed...');
      $count_unpublished = 0;
      $count_published = 0;
      $count_migrated = 0;

      // Migrate each of them by iterating through.
      // First round to save only legacy nid and the title.
      foreach ($exist['node'] as $nid => $n_obj) {
        $legacy_node = node_load($nid);
        drush_print('Node ' . $legacy_node->nid . ' is being processed...');
        $legacy_node_wrapper = entity_metadata_wrapper('node', $legacy_node);
        $legacy_node_status = $legacy_node_wrapper->status->value();
        switch ($legacy_node_status) {
          case "1":
            $count_published++;
            break;
          case "0":
            $count_unpublished++;
            break;
        }
        $legacy_node_created = (int)$legacy_node_wrapper->created->value();
        $legacy_node_changed = (int)$legacy_node_wrapper->changed->value();

        $new_node = new stdClass();
        $new_node->type = $new_type; // The new type of node being created.
        node_object_prepare($new_node);
        $new_node->legacy_node_created = $legacy_node_created;
        $new_node->legacy_node_changed = $legacy_node_changed;
        $new_node_wrapper = entity_metadata_wrapper('node', $new_node);

        // Legacy nid
        $new_node_wrapper->field_legacy_nid->set($nid);

        // Title
        $title = $legacy_node_wrapper->title->value();
        $new_node_wrapper->title->set($title);

        // Body
        $body = $legacy_node_wrapper->body->value();
        // If this node only has title and no body, and is unpublished, delete and exit the loop.
        if (!empty($body)) {
          $new_node_wrapper->body->set($body);
        }

        // Images
        // @see http://dropbucket.org/node/1201 for checking a field is set.
        if ($legacy_node_wrapper->__isset('field_image')) {
          $image = $legacy_node_wrapper->field_image->value();
          if (!empty($image)) {
            // Move the image file to the new location
            $file_destination_dir_uri = 'public://gbif_scaled_contents/news/' . date('Y-F', $legacy_node_created) . '/' . $legacy_node->nid;
            $dir_exists = file_prepare_directory($file_destination_dir_uri);
            if (!$dir_exists) {
              $dir_created = drupal_mkdir($file_destination_dir_uri, NULL, TRUE);
              if ($dir_created == TRUE) {
                drush_print('  Node ' . $legacy_node->nid . ' directory created.');
              }
              else {
                drush_print('  Node ' . $legacy_node->nid . ' directory creation failed.');
              }
            }
            $image_real_path = drupal_realpath($image['uri']);
            $image_content = file_get_contents($image_real_path);
            $file_destination_uri = $file_destination_dir_uri . '/' . $image['filename'];
            file_unmanaged_save_data($image_content, $file_destination_uri, FILE_EXISTS_REPLACE);
            file_unmanaged_delete_recursive($image['uri']);

            $image['uri'] = $file_destination_uri;
            $new_node_wrapper->field_uni_images->set(array($image));
          }
        }

        // fields that can be migrated without term mapping.
        $fields_wo_term_mapping = array(
          'field_citationinformation' => 'field_citation_information',
          'field_relatedgbifresources' => 'field_related_gbif_resources', // links
          'field_numofresused' => 'field_num_rs_used',
          'field_reasearcherslocation' => 'field_researcher_location',
          'field_linkstoresearch' => 'field_link_to_research',
          'field_datasetkey' => 'field_dataset_uuid',
          'field_country' => 'field_country',
          'field_programme' => 'field_programme',
          'field_organizations' => 'field_organizations',
        );
        foreach ($fields_wo_term_mapping as $field_from => $field_to) {
          //drush_print('  Field ' . $field_from . ' are being analysed and migrated to ' . $field_to . '...');
          if (!empty($legacy_node->$field_from)) {
            //drush_print('  Processing ' . $field_from . '...');

            $field_from_value = $legacy_node_wrapper->$field_from->value();

            // EMW seems omitting delta when there is only one value in the field.
            // We need to restore the array structure here.
            if (is_array($field_from_value)) {
              $keys = array_keys($field_from_value);
              $delta_true = TRUE;
              foreach ($keys as $key) {
                if (!is_numeric($key)) $delta_true = FALSE;
              }
              if ($delta_true == FALSE) {
                $field_from_value = array($field_from_value);
              }
            }
            if ($field_from == 'field_datasetkey') {
              $field_from_value = array(
                array(
                  $field_from_value,
                ),
              );
            }
            $new_node_wrapper->$field_to->set($field_from_value);
            unset($field_from_value, $field_from, $field_to);
          }
        }

        // Converting text fields to link fields
        // Study area
        if (!empty($legacy_node->field_studyarea)) {
          $field_studyarea_value = $legacy_node_wrapper->field_studyarea->value();
          $field_studyarea_values = explode(', ', $field_studyarea_value);
          $new_study_area_value = array();
          foreach ($field_studyarea_values as $value) {
            $value_array = array(
              'url' => '',
              'title' => $value,
              'attributes' => array(),
            );
            $new_study_area_value[] = $value_array;
          }
          $new_node_wrapper->field_study_area->set($new_study_area_value);
        }
        // Data sources
        if (!empty($legacy_node->field_datasources)) {
          $field_datasources_value = $legacy_node_wrapper->field_datasources->value();
          $field_datasources_values = explode(', ', $field_datasources_value);
          $new_data_source_value = array();
          foreach ($field_datasources_values as $value) {
            if (substr($value, 0, 7) === 'http://') {
              $value_array = array(
                'url' => $value,
                'title' => '',
                'attributes' => array(),
              );
            }
            elseif (strpos($value, '(') !== FALSE) {
              $values = explode(' (', $value);
              if (substr($values[1], 0, 7) === 'http://') {
                $url = str_replace(')', '', $values[1]);
                $value_array = array(
                  'url' => $url,
                  'title' => $values[0],
                  'attributes' => array(),
                );
              }
              else {
                $value_array = array(
                  'url' => '',
                  'title' => trim($value),
                  'attributes' => array(),
                );
              }
            }
            else {
              $value_array = array(
                'url' => '',
                'title' => trim($value),
                'attributes' => array(),
              );
            }
            $new_data_source_value[] = $value_array;
          }
          $new_node_wrapper->field_data_source->set($new_data_source_value);
        }

        // Term reference fields that needs to map to the new core taxonomy.
        $target_fields = array();
        if (in_array($legacy_node->type, array('newsarticle', 'usesofdata', 'featureddataset'))) {
          $legacy_term_fields = array(
            array(
              'field' => 'field_datausecategories',
              'mapping' => 'gbif_scaled_contents_get_data_use_mapping'
            ),
            array(
              'field' => 'field_capacity',
              'mapping' => 'gbif_scaled_contents_get_thematic_tags_mapping'
            ),
            array(
              'field' => 'field_regions',
              'mapping' => 'gbif_scaled_contents_get_regions_mapping',
            ),
          );
          foreach ($legacy_term_fields as $f) {
            if (!empty($legacy_node->$f['field'])) {
              // retrieve tids from the legacy node
              $legacy_values = $legacy_node_wrapper->$f['field']->value();
              drush_print('  Term references of ' . $f['field'] . ' are being analysed...');
              foreach ($legacy_values as $v) {
                $mapping = $f['mapping']();
                foreach ($mapping as $cat) {
                  $new_tid = ($cat['old_tid'] == $v->tid) ? $cat['new_tid'] : NULL;
                  if (!empty($new_tid)) {
                    $new_t_obj = taxonomy_term_load($new_tid);
                    $target_field = $voc_field_mapping[$new_t_obj->vid];
                    $target_fields[$target_field][] = $new_t_obj;
                  }
                }
                unset($new_tid);
              }
            }
          }
        }
        foreach ($target_fields as $f_name => $f_values) {
          if (count($f_values) !== 0) {
            $unique_values = array_map('unserialize', array_unique(array_map('serialize', $f_values)));
            $new_node_wrapper->$f_name->set($unique_values);
          }
        }

        // Save content
        $author = $legacy_node_wrapper->author->value();
        $new_node_wrapper->author->set($author);
        $new_node_wrapper->log->set('Revision created by the migration script.');
        $new_node_wrapper->language->set('en');
        $new_node_wrapper->created->set($legacy_node_created);
        $new_node_wrapper->status->set($legacy_node->status);
        $new_node_wrapper->promote->set($legacy_node->promote);
        $new_node_wrapper->sticky->set($legacy_node->sticky);

        $new_node_wrapper->save();
        drush_print('New node ' . $new_node->nid . ' created and saved.');
        if ($legacy_node->status == '1') {
          workbench_moderation_moderate($new_node, 'published');
        }

        // Path, alias, and redirects
        $url_alias = drupal_get_path_alias('node/' . $legacy_node->nid);
        if (isset($url_alias)) $new_node->path = array('alias' => $url_alias, 'pathauto' => FALSE);
        // redirect for published nodes
        // to update the old node path with the new one.
        // to add old URL alias as a new redirect.
        /*
        $redirect = new stdClass();
        redirect_object_prepare(
          $redirect,
          array(
            'source' => $url_alias,
            'source_options' => array(),
            'redirect' => 'node/' . $new_node->nid,
            'redirect_options' => array(),
            'language' => 'en',
          )
        );
        redirect_save($redirect);
        unset($redirect);
        */
        $redirect_results = db_select('redirect', 'r')
          ->fields('r')
          ->condition('redirect', 'node/' . $legacy_node->nid, '=')
          ->execute()
          ->fetchAll();
        // delete old node
        node_delete($legacy_node->nid);
        drush_print('Old node ' . $legacy_node->nid . ' deleled.');
        $count_migrated++;
        if (!empty($redirect_results)) {
          foreach ($redirect_results as $redirect_result) {
            $redirect_result->redirect = 'node/' . $new_node->nid;
            redirect_save($redirect_result);
          }
        }

        // reset all variables
        unset($legacy_node, $legacy_node_wrapper, $new_node, $new_node_wrapper);
      }
    }

    drush_print($count . ' ' . $old_type . ' nodes processed.');
    drush_print($count_published . ' ' . $new_type . ' node(s) published.');
    drush_print($count_unpublished . ' ' . $new_type . ' node(s) unpublished.');
    drush_print($count_migrated . ' ' . $old_type . ' node(s) migrated.');

    node_type_delete($old_type);
    drush_print($old_type . ' node type deleted.');

  }
}

/**
 * File cleaning. The goal is to make sure files in the file_managed table reflect
 * the actual file systems in default/files directory.
 */
function drush_gbif_scaled_contents_file_clean() {
  $query = db_select('file_managed', 'f');
  $query->addField('f', 'fid');
  $query->addField('f', 'uri');
  $db_or = db_or();
  $db_or->condition('uri', '%' . db_like('/temp/') . '%', 'LIKE')
    ->condition('uri', '%' . db_like('/orc/') . '%', 'LIKE')
    ->condition('uri', '%' . db_like('/npt_mendeley/') . '%', 'LIKE')
    ->condition('uri', '%' . db_like('/temp/') . '%', 'LIKE')
    ->condition('uri', '%' . db_like('/orc_temp/') . '%', 'LIKE')
    ->condition('uri', '%' . db_like('/fontyourface/') . '%', 'LIKE');
  $query->condition($db_or);
  $results = $query->execute()->fetchAll();

  foreach ($results as $result) {
    if (file_destination($result->uri, FILE_EXISTS_ERROR) == false) {
      // do nothing
    }
    else {
      $file_obj = file_load($result->fid);
      $delete_result = file_delete($file_obj, TRUE);
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