<?php
/**
 * @file
 * gbif_scaled_contents.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gbif_scaled_contents_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_annotations|node|news|form';
  $field_group->group_name = 'group_annotations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content annotations',
    'weight' => '7',
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
  $export['group_annotations|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributes|node|news|form';
  $field_group->group_name = 'group_attributes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_annotations';
  $field_group->data = array(
    'label' => 'Attributes',
    'weight' => '5',
    'children' => array(
      0 => 'field_link_to_research',
      1 => 'field_num_rs_used',
      2 => 'field_researcher_location',
      3 => 'field_study_area',
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
  $export['group_attributes|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citations|node|news|form';
  $field_group->group_name = 'group_citations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
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
  $export['group_citations|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|news|form';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
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
  $export['group_data|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_def_taxonomy|node|news|form';
  $field_group->group_name = 'group_def_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Defined Taxonomy',
    'weight' => '23',
    'children' => array(
      0 => 'tx_about_gbif',
      1 => 'tx_audience',
      2 => 'tx_capacity_enhancement',
      3 => 'tx_data_use',
      4 => 'tx_informatics',
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
  $export['group_def_taxonomy|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gbif_cms_taxonomy|node|news|form';
  $field_group->group_name = 'group_gbif_cms_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GBIF CMS Taxonomy',
    'weight' => '8',
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
  $export['group_gbif_cms_taxonomy|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regions|node|news|form';
  $field_group->group_name = 'group_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
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
  $export['group_regions|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_tags|node|news|form';
  $field_group->group_name = 'group_topics_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Topics and tags',
    'weight' => '24',
    'children' => array(
      0 => 'tx_tags',
      1 => 'tx_topic',
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
  $export['group_topics_tags|node|news|form'] = $field_group;

  return $export;
}
