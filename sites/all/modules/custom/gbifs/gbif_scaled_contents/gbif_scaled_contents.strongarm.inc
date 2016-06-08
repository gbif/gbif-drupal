<?php
/**
 * @file
 * gbif_scaled_contents.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gbif_scaled_contents_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_news';
  $strongarm->value = 0;
  $export['comment_anonymous_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_news';
  $strongarm->value = 1;
  $export['comment_default_mode_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_news';
  $strongarm->value = 1;
  $export['comment_form_location_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_news';
  $strongarm->value = '1';
  $export['comment_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news';
  $strongarm->value = '1';
  $export['comment_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_news';
  $strongarm->value = 1;
  $export['comment_subject_field_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_field_group';
  $strongarm->value = array(
    'group_gbif_cms_taxonomy|node|news|form' => FALSE,
    'group_regions|node|news|form' => FALSE,
    'group_annotations|node|news|form' => FALSE,
    'group_attributes|node|news|form' => FALSE,
    'group_data|node|news|form' => FALSE,
    'group_citations|node|news|form' => FALSE,
    'group_def_taxonomy|node|news|form' => FALSE,
    'group_topics_tags|node|news|form' => FALSE,
    'group_annotations|node|data_use|form' => FALSE,
    'group_attributes|node|data_use|form' => FALSE,
    'group_citations|node|data_use|form' => FALSE,
    'group_data|node|data_use|form' => FALSE,
    'group_def_taxonomy|node|data_use|form' => FALSE,
    'group_gbif_cms_taxonomy|node|data_use|form' => FALSE,
    'group_regions|node|data_use|form' => FALSE,
    'group_topics_tags|node|data_use|form' => FALSE,
    'group_annotations|node|dataset|form' => FALSE,
    'group_attributes|node|dataset|form' => FALSE,
    'group_citations|node|dataset|form' => FALSE,
    'group_data|node|dataset|form' => FALSE,
    'group_def_taxonomy|node|dataset|form' => FALSE,
    'group_gbif_cms_taxonomy|node|dataset|form' => FALSE,
    'group_regions|node|dataset|form' => FALSE,
    'group_topics_tags|node|dataset|form' => FALSE,
    'group_cnt_management|node|news|form' => FALSE,
  );
  $export['default_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'twitter' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_news';
  $strongarm->value = '1';
  $export['language_content_type_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news';
  $strongarm->value = array(
    0 => 'gbif-menu',
  );
  $export['menu_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news';
  $strongarm->value = 'gbif-menu:0';
  $export['menu_parent_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news';
  $strongarm->value = '1';
  $export['node_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news';
  $strongarm->value = 1;
  $export['node_submitted_news'] = $strongarm;

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
  $strongarm->value = 0;
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
  $strongarm->value = '0';
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
  $strongarm->value = 'nid';
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
  $strongarm->value = '0';
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
  $strongarm->value = '0';
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
  $strongarm->value = 'nid';
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
  $strongarm->value = '0';
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
  $strongarm->value = '0';
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
  $strongarm->value = 'nid';
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
  $strongarm->value = '0';
  $export['prev_next_node_type_news_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme';
  $strongarm->value = 0;
  $export['prev_next_node_type_programme'] = $strongarm;

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
  $strongarm->value = '0';
  $export['prev_next_node_type_programme_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_programme_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_programme_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_programme_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_programme_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_programme_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project';
  $strongarm->value = 0;
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
  $strongarm->value = '0';
  $export['prev_next_node_type_project_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_project_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_project_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_project_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_project_same_type_current';
  $strongarm->value = '0';
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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_file_lowercase';
  $strongarm->value = 0;
  $export['transliteration_file_lowercase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_file_uploads';
  $strongarm->value = 1;
  $export['transliteration_file_uploads'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_file_uploads_display_name';
  $strongarm->value = 1;
  $export['transliteration_file_uploads_display_name'] = $strongarm;

  return $export;
}
