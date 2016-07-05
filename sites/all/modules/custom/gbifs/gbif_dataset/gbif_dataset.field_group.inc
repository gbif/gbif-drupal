<?php
/**
 * @file
 * gbif_dataset.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gbif_dataset_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_annotations|node|dataset|form';
  $field_group->group_name = 'group_annotations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content annotations',
    'weight' => '8',
    'children' => array(
      0 => 'group_attributes',
      1 => 'group_citations',
      2 => 'group_data',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-annotations field-group-tabs',
      ),
    ),
  );
  $field_groups['group_annotations|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributes|node|dataset|form';
  $field_group->group_name = 'group_attributes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_annotations';
  $field_group->data = array(
    'label' => 'Attributes',
    'weight' => '5',
    'children' => array(
      0 => 'field_link_to_research',
      1 => 'field_num_rs_used',
      2 => 'field_organizations',
      3 => 'field_programme',
      4 => 'field_researcher_location',
      5 => 'field_study_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attributes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_attributes|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|dataset|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '14',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-body field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_body|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citations|node|dataset|form';
  $field_group->group_name = 'group_citations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_annotations';
  $field_group->data = array(
    'label' => 'Citations',
    'weight' => '7',
    'children' => array(
      0 => 'field_citation_information',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-citations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_citations|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cnt_management|node|dataset|form';
  $field_group->group_name = 'group_cnt_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Content management',
    'weight' => '17',
    'children' => array(
      0 => 'field_content_stream',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cnt-management field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cnt_management|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|dataset|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_body',
      1 => 'group_cnt_management',
      2 => 'group_gbits',
      3 => 'group_social_media',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content field-group-tabs',
      ),
    ),
  );
  $field_groups['group_content|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|dataset|form';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_annotations';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '6',
    'children' => array(
      0 => 'field_data_source',
      1 => 'field_dataset_uuid',
      2 => 'field_related_gbif_resources',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-data field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_data|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_def_taxonomy|node|dataset|form';
  $field_group->group_name = 'group_def_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Defined Taxonomy',
    'weight' => '23',
    'children' => array(
      0 => 'field_tx_data_type',
      1 => 'field_tx_purpose',
      2 => 'tx_about_gbif',
      3 => 'tx_audience',
      4 => 'tx_capacity_enhancement',
      5 => 'tx_data_use',
      6 => 'tx_informatics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-def-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_def_taxonomy|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gbif_cms_taxonomy|node|dataset|form';
  $field_group->group_name = 'group_gbif_cms_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GBIF CMS Taxonomy',
    'weight' => '9',
    'children' => array(
      0 => 'group_def_taxonomy',
      1 => 'group_regions',
      2 => 'group_topics_tags',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-gbif-cms-taxonomy field-group-tabs',
      ),
    ),
  );
  $field_groups['group_gbif_cms_taxonomy|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gbits|node|dataset|form';
  $field_group->group_name = 'group_gbits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'GBits',
    'weight' => '15',
    'children' => array(
      0 => 'field_content_gbits',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gbits field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gbits|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regions|node|dataset|form';
  $field_group->group_name = 'group_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Regions',
    'weight' => '22',
    'children' => array(
      0 => 'field_country',
      1 => 'field_gbif_area',
      2 => 'field_un_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-regions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_regions|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|dataset|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Social media',
    'weight' => '16',
    'children' => array(
      0 => 'field_post_to_facebook',
      1 => 'field_facebook_message',
      2 => 'twitter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_social_media|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_tags|node|dataset|form';
  $field_group->group_name = 'group_topics_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Topics and tags',
    'weight' => '24',
    'children' => array(
      0 => 'tx_tags',
      1 => 'tx_topic',
      2 => 'field_featured_search_terms',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-topics-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_topics_tags|node|dataset|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attributes');
  t('Body');
  t('Citations');
  t('Content');
  t('Content annotations');
  t('Content management');
  t('Data');
  t('Defined Taxonomy');
  t('GBIF CMS Taxonomy');
  t('GBits');
  t('Regions');
  t('Social media');
  t('Topics and tags');

  return $field_groups;
}
