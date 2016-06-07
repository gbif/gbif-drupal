<?php
/**
 * @file
 * gbif_bibliography.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gbif_bibliography_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_def_taxonomy|node|biblio_mendeley|form';
  $field_group->group_name = 'group_def_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio_mendeley';
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
  $field_groups['group_def_taxonomy|node|biblio_mendeley|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gbif_cms_taxonomy|node|biblio_mendeley|form';
  $field_group->group_name = 'group_gbif_cms_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio_mendeley';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GBIF CMS Taxonomy',
    'weight' => '4',
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
  $field_groups['group_gbif_cms_taxonomy|node|biblio_mendeley|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regions|node|biblio_mendeley|form';
  $field_group->group_name = 'group_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio_mendeley';
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
  $field_groups['group_regions|node|biblio_mendeley|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_tags|node|biblio_mendeley|form';
  $field_group->group_name = 'group_topics_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio_mendeley';
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
  $field_groups['group_topics_tags|node|biblio_mendeley|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defined Taxonomy');
  t('GBIF CMS Taxonomy');
  t('Regions');
  t('Topics and tags');

  return $field_groups;
}
