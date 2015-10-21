<?php
/**
 * @file
 * gbif_vocabularies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gbif_vocabularies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_node';
  $strongarm->value = array(
    'page' => 0,
    'event' => 0,
    'dataset' => 0,
    'data_use' => 0,
    'gbif_participant' => 0,
    'generictemplate' => 0,
    'news' => 0,
  );
  $export['uuid_features_entity_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'about_gbif' => 'about_gbif',
    'data_analysis_and_use' => 'data_analysis_and_use',
    'audience' => 'audience',
    'capacity_enhancement' => 'capacity_enhancement',
    'data_type' => 'data_type',
    'data_use' => 'data_use',
    'informatics' => 'informatics',
    'language' => 'language',
    'purpose' => 'purpose',
    'resource_type' => 'resource_type',
    'tags' => 'tags',
    'term_attribute' => 'term_attribute',
    'topic' => 'topic',
    'opportunities' => 0,
    'regions' => 0,
    'countries' => 0,
    'organizations' => 0,
    'thematic_tags' => 0,
    'corenews' => 0,
    'taxanavigation' => 0,
  );
  $export['uuid_features_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_assets_path';
  $strongarm->value = '';
  $export['uuid_features_file_assets_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_mode';
  $strongarm->value = 'inline';
  $export['uuid_features_file_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_node';
  $strongarm->value = array(
    'baremetal' => 0,
    'page' => 0,
    'event' => 0,
    'featureddataset' => 0,
    'usesofdata' => 0,
    'gbif_participant' => 0,
    'generictemplate' => 0,
    'newsarticle' => 0,
  );
  $export['uuid_features_file_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['uuid_features_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term';
  $strongarm->value = array(
    'opportunities' => 0,
    'regions' => 0,
    'countries' => 0,
    'organizations' => 0,
    'thematic_tags' => 0,
    'corenews' => 0,
    'taxanavigation' => 0,
    'about_gbif' => 0,
    'data_analysis_and_use' => 0,
    'audience' => 0,
    'capacity_enhancement' => 0,
    'data_type' => 0,
    'data_use' => 0,
    'informatics' => 0,
    'language' => 0,
    'purpose' => 0,
    'resource_type' => 0,
    'tags' => 0,
    'term_attribute' => 0,
    'topic' => 0,
  );
  $export['uuid_features_file_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_vocabulary_terms';
  $strongarm->value = 1;
  $export['uuid_features_vocabulary_terms'] = $strongarm;

  return $export;
}
