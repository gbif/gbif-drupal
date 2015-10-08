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
 */
function drush_gbif_scaled_contents_migrate() {
  // node object structure for reference
  $test_news_node = node_load(82275);
  $test_newsarticle_node = node_load(82176);
  $test_datause_node = node_load(82262);
  $test_dataset_node = node_load(82265);

  // 1. Entity query all 'newsarticle' nodes
  // 2. Unpublished nodes will remain unpublished
  $entity_query = new EntityFieldQuery();
  $entity_query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'newsarticle');
  $exist = $entity_query->execute();

  if (isset($exist['node'])) {

    $count_newsarticle = count($exist['node']);
    drush_print($count_newsarticle . ' newsarticle nodes to be processed.');
    $count_unpublished = 0;
    $count_published = 0;
    $count_migrated = 0;

    // Migrate each of them by iterating through.
    // First round to save only legacy nid and the title.
    foreach ($exist['node'] as $nid => $n_obj) {
      $legacy_node = node_load($nid);
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
      $new_node->type = 'news';
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
      $new_node_wrapper->body->set($body);

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
              drush_print('Node ' . $legacy_node->nid . ' directory created.');
            }
            else {
              drush_print('Node ' . $legacy_node->nid . ' directory creation failed.');
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

      // fields having the same structure
      $text_fields = array(
        //'field_citationinformation' => 'field_citation_information',
        'field_relatedgbifresources' => 'field_related_gbif_resources', // links
        'field_numofresused' => 'field_num_rs_used',
        'field_reasearcherslocation' => 'field_researcher_location',
        'field_linkstoresearch' => 'field_link_to_research',
        'field_datasetkey' => 'field_dataset_uuid',
      );
      foreach ($text_fields as $field_from => $field_to) {
        if (!empty($legacy_node->$field_from)) {
          $field_from_value = $legacy_node_wrapper->$field_from->value();
          $new_node_wrapper->$field_to->set($field_from_value);
          unset($field_from_value);
        }
      }

      // fields needing conversion
      $link_conversion_fields = array(
        'field_studyarea' => 'field_study_area',
        'field_datasources' => 'field_data_source',
      );

      // Same term reference fields
      $same_term_fields = array(
        'field_country'
      );

      // term reference fields to be migrated

      // Path and alias

      // Save content
      $author = $legacy_node_wrapper->author->value();
      $new_node_wrapper->author->set($author);
      $new_node_wrapper->log->set('Revision created by the migration script.');
      $new_node_wrapper->language->set($legacy_node->language);
      $new_node_wrapper->created->set($legacy_node_created);
      $new_node_wrapper->status->set($legacy_node->status);
      $new_node_wrapper->promote->set($legacy_node->promote);
      $new_node_wrapper->sticky->set($legacy_node->sticky);
      $new_node_wrapper->save();
      if ($legacy_node->status == '1') {
        workbench_moderation_moderate($new_node, 'published');
      }
      // redirect for published nodes

      // delete old node
      unset($legacy_node, $legacy_node_wrapper, $new_node, $new_node_wrapper);
    }
  }

}

/**
 * Implements hook_node_presave().
 * @see http://drupal.stackexchange.com/questions/39591/how-to-stop-drupal-for-setting-node-changed-date-on-creation
 */
function gbif_scaled_contents_node_presave($node) {
  $node->changed = $node->legacy_node_changed;
  $node->created = $node->legacy_node_created;
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