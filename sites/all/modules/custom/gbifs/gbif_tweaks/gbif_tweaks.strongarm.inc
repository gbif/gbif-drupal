<?php
/**
 * @file
 * gbif_tweaks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gbif_tweaks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_mmm_yyyy';
  $strongarm->value = 'M Y';
  $export['date_format_mmm_yyyy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_batch_size';
  $strongarm->value = '200';
  $export['prev_next_batch_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_index_nid';
  $strongarm->value = '106487';
  $export['prev_next_index_nid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_call';
  $strongarm->value = 0;
  $export['prev_next_node_type_call'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_call_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_call_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_call_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_call_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_call_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_call_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_call_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_call_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_call_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_call_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_call_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_call_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset';
  $strongarm->value = 1;
  $export['prev_next_node_type_dataset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_dataset_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_dataset_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_dataset_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_dataset_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_dataset_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_dataset_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dataset_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_dataset_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use';
  $strongarm->value = 1;
  $export['prev_next_node_type_data_use'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_data_use_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_data_use_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_data_use_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_data_use_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_data_use_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_data_use_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_data_use_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_data_use_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dir_organization';
  $strongarm->value = 0;
  $export['prev_next_node_type_dir_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dir_organization_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_dir_organization_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dir_organization_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_dir_organization_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dir_organization_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_dir_organization_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dir_organization_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_dir_organization_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dir_organization_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_dir_organization_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_dir_organization_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_dir_organization_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event';
  $strongarm->value = 1;
  $export['prev_next_node_type_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_event_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_event_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_event_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_event_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_event_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_event_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_event_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_event_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant';
  $strongarm->value = 0;
  $export['prev_next_node_type_gbif_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_gbif_participant_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_gbif_participant_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_gbif_participant_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_gbif_participant_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_gbif_participant_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_gbif_participant_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_gbif_participant_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_gbif_participant_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic';
  $strongarm->value = 1;
  $export['prev_next_node_type_generic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_generic_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_generic_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_generic_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_generic_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_generic_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_generic_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_generic_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_generic_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature';
  $strongarm->value = 0;
  $export['prev_next_node_type_literature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_author';
  $strongarm->value = 0;
  $export['prev_next_node_type_literature_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_author_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_literature_author_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_author_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_literature_author_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_author_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_literature_author_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_author_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_literature_author_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_author_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_literature_author_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_author_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_literature_author_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_literature_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_literature_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_literature_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_literature_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_literature_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_literature_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_literature_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_literature_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news';
  $strongarm->value = 1;
  $export['prev_next_node_type_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_news_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_news_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_news_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_news_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_news_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_news_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_news_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_news_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page';
  $strongarm->value = 0;
  $export['prev_next_node_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_page_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_page_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_page_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_page_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_page_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_page_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_page_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_page_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme';
  $strongarm->value = 1;
  $export['prev_next_node_type_programme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_programme_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_programme_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_programme_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_programme_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_programme_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_programme_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_programme_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project';
  $strongarm->value = 1;
  $export['prev_next_node_type_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_project_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_project_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_project_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_project_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_project_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_project_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_project_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource';
  $strongarm->value = 0;
  $export['prev_next_node_type_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource_category_criteria';
  $strongarm->value = 'none';
  $export['prev_next_node_type_resource_category_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource_category_criteria_current';
  $strongarm->value = 'none';
  $export['prev_next_node_type_resource_category_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_resource_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_resource_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_resource_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_resource_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_resource_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_resource_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_num_blocks';
  $strongarm->value = '1';
  $export['prev_next_num_blocks'] = $strongarm;

  return $export;
}
