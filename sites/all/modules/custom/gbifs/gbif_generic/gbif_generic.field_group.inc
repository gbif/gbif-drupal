<?php
/**
 * @file
 * gbif_generic.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gbif_generic_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_anchors|node|generic|form';
  $field_group->group_name = 'group_anchors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Anchors',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-anchors field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_anchors|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attached_items|node|generic|form';
  $field_group->group_name = 'group_attached_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attached items',
    'weight' => '4',
    'children' => array(
      0 => 'group_files',
      1 => 'group_images',
      2 => 'group_links',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-attached-items field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_attached_items|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_def_taxonomy|node|generic|form';
  $field_group->group_name = 'group_def_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Defined Taxonomy',
    'weight' => '12',
    'children' => array(
      0 => 'field_tx_data_type',
      1 => 'tx_about_gbif',
      2 => 'tx_audience',
      3 => 'tx_capacity_enhancement',
      4 => 'tx_data_use',
      5 => 'tx_informatics',
      6 => 'field_tx_purpose',
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
  $field_groups['group_def_taxonomy|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|node|generic|form';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attached_items';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '13',
    'children' => array(
      0 => 'field_attached_files',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-files field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_files|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gbif_cms_taxonomy|node|generic|form';
  $field_group->group_name = 'group_gbif_cms_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GBIF CMS Taxonomy',
    'weight' => '5',
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
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gbif_cms_taxonomy|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|generic|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attached_items';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '12',
    'children' => array(
      0 => 'field_uni_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_images|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|generic|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attached_items';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '14',
    'children' => array(
      0 => 'field_links_block',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_links|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regions|node|generic|form';
  $field_group->group_name = 'group_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Regions',
    'weight' => '11',
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
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_regions|node|generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_tags|node|generic|form';
  $field_group->group_name = 'group_topics_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'generic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gbif_cms_taxonomy';
  $field_group->data = array(
    'label' => 'Topics and tags',
    'weight' => '13',
    'children' => array(
      0 => 'field_featured_search_terms',
      1 => 'tx_tags',
      2 => 'tx_topic',
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
  $field_groups['group_topics_tags|node|generic|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Anchors');
  t('Attached items');
  t('Defined Taxonomy');
  t('Files');
  t('GBIF CMS Taxonomy');
  t('Images');
  t('Links');
  t('Regions');
  t('Topics and tags');

  return $field_groups;
}
