<?php

/**
 * Implements hook_drush_command().
 */
function gbif_participant_drush_command() {
  $items = array();
  $items['participant-sync'] = array(
    'callback' => 'drush_gbif_participant_sync',
    'description' => 'Synchronise participant from IMS base table to "participant" vocabulary',
  );
  $items['participant-map'] = array(
    'callback' => 'drush_gbif_participant_map',
    'description' => 'Re-map language to indexable fields.',
  );
  return $items;
}

/**
 * As of 12 Jun 2015, our Participant content type only covers country
 * participants. A taxonomy is then created, as an interim solution, for other
 * content types to refer to participants of all membership types. This script
 * is developed to synchronise the terms with gbif_ims_participant table.
 */
function drush_gbif_participant_sync() {
  // look for vocabulary "participant", if not, create one
  $participant_voc = taxonomy_vocabulary_machine_name_load('participant');
  if ($participant_voc === FALSE) {
    $voc_definition = (object) array(
      'name' => 'Participant',
      'description' => 'Terms that are synced with gbif_ims_participant table',
      'machine_name' => 'participant'
    );
    $participant_voc = taxonomy_vocabulary_save($voc_definition);
  }
  $vid = $participant_voc->vid;

  // query gbif_ims_participant. For each of them, create or update one
  $query = db_select('gbif_ims_participant', 'p');
  $query->leftJoin('gbif_ims_country', 'c', 'p.countryID = c.countryID');
  $query->addField('p', 'participantID', 'participantID');
  $query->addField('p', 'name_full', 'participant_name_full');
  $query->addField('p', 'name_short', 'participant_abbrev');
  $query->addField('p', 'member_as_of');
  $query->addField('p', 'gbif_membership');
  $query->addField('p', 'mou2012_date');
  $query->addField('c', 'iso2', 'iso2');
  $query->addField('p', 'url_hosting');
  $query->orderBy('p.name_full');
  $results = $query->execute()->fetchAll();

  foreach ($results as $result) {
    // search for the term with Participant ID. if not found, create one.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'taxonomy_term')
      ->entityCondition('bundle', 'participant')
      ->fieldCondition('field_participant_id', 'value', $result->participantID, '=');
    $result_entity_query = $query->execute();

    // if the term exists, update it
    if (isset($result_entity_query['taxonomy_term']) && count($result_entity_query['taxonomy_term']) === 1) {
      // load term and update
      foreach ($result_entity_query['taxonomy_term'] as $taxonomy_term) {
        $term = taxonomy_term_load($taxonomy_term->tid);
      }
      if (is_object($term)) {
        $term->path['pathauto'] = FALSE;
        taxonomy_term_save($term);
        gbif_participant_term_update($term, $result);
      }
    }
    // if the term doesn't exist, create one
    elseif (is_array($result_entity_query) && count($result_entity_query) === 0) {
      // create when the title is not empty
      $name = trim($result->participant_full);
      $short_name = trim($result->participant_abbrev);
      if (empty($name) && empty($short_name)) {
        // do nothing if both are empty
      }
      else {
        $term = new stdClass();
        $term->vid = $vid;
        $term->name = (!empty($name)) ? $name : $short_name;
        $term->path['pathauto'] = FALSE;
        taxonomy_term_save($term);
        gbif_participant_term_update($term, $result);
      }
    }
    else {
      $message = 'There may be data integrity issues with Participant vocabulary.';
      drupal_set_message($message, 'error');
      watchdog('gbif_participant', $message, array(), WATCHDOG_ERROR);
    }
  }
  drupal_set_message('Participant terms updated.', 'status');
}

/**
 * Helper function that updates a term object using entity metadata wrapper
 * @param $term
 * @param $result
 */
function gbif_participant_term_update($term, $result) {
  $term_wrapper = entity_metadata_wrapper('taxonomy_term', $term);

  // GBIF Membership
  $membership = array(
    'Voting Participant' => 'vp',
    'Associate Country Participant' => 'acp',
    'Other Associate Participant' => 'oap',
    'Former Participant' => 'fp',
    'Observer' => 'ob',
    'GBIF Affiliate' => 'ga'
  );
  $gbif_membership_value = $membership[$result->gbif_membership];
  $term_wrapper->field_gbif_membership->set($gbif_membership_value);

  // ISO2
  $term_wrapper->field_iso2->set($result->iso2);

  // Member as of
  $member_as_of = DateTime::createFromFormat('Y-m-d H:i:s', $result->member_as_of);
  if ($member_as_of !== FALSE) $term_wrapper->field_member_as_of->set($member_as_of->getTimestamp());

  // MOU 2012 Date
  $mou_2012_date = DateTime::createFromFormat('Y-m-d H:i:s', $result->mou2012_date);
  if ($mou_2012_date !== FALSE) $term_wrapper->field_mou_2012_date->set($mou_2012_date->getTimestamp());

  // Name
  $term_wrapper->name->set($result->participant_name_full);

  // Short name
  $term_wrapper->field_short_name->set($result->participant_abbrev);

  // URL
  $term_wrapper->field_url->url = $result->url_hosting;

  // Participant ID
  $term_wrapper->field_participant_id->set($result->participantID);

  // Save the change
  $term_wrapper->save();
}

function drush_gbif_participant_map() {
  $time_begin = time();
  $processed_resources = 0;

  // map all events to English
  // map ge_venue_country to field_country
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'gbif_participant');
  $result = $query->execute();

  if (isset($result['node']) && count($result['node']) > 0) {
    $nids = array_keys($result['node']);
    $set_node_mapping = function($nid) use (&$processed_resources) {
      $wrapper = entity_metadata_wrapper('node', $nid);
      $wrapper->language->set('en');
      $wrapper->log->set('CMS API deployment: Event content property mappings for language and country.');
      $wrapper->save();
      drupal_set_message('Participant nid: ' . $wrapper->getIdentifier() . ' saved with language ' . 'en', 'status');
      $processed_resources++;
    };
    array_walk($nids, $set_node_mapping);
  }

  $time_end = time();
  $time_elapsed = date('i:s', $time_end - $time_begin);
  $num_not_processed = count($result['node']) - $processed_resources;
  drupal_set_message($processed_resources . ' participant info language mapped. ' . $num_not_processed . ' not processed. Time elapsed: ' . $time_elapsed . '.', 'status');

}