<?php
/**
 * @file
 * gbif_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gbif_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding|node|programme|form';
  $field_group->group_name = 'group_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '8',
    'children' => array(
      0 => 'field_co_funder',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-funding field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_funding|node|programme|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding|node|project|form';
  $field_group->group_name = 'group_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '30',
    'children' => array(
      0 => 'field_co_funder',
      1 => 'field_pj_funding_allocated',
      2 => 'field_pj_funding_delivered',
      3 => 'field_pj_matching_fund',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-funding field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_funding|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_miscellaneous|node|project|form';
  $field_group->group_name = 'group_miscellaneous';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Miscellaneous',
    'weight' => '35',
    'children' => array(
      0 => 'field_internal_notes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-miscellaneous field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_miscellaneous|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_details|node|programme|form';
  $field_group->group_name = 'group_node_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node details',
    'weight' => '6',
    'children' => array(
      0 => 'group_related_docs_and_info',
      1 => 'group_funding',
      2 => 'group_related_activities',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-node-details field-group-tabs',
      ),
    ),
  );
  $export['group_node_details|node|programme|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_details|node|project|form';
  $field_group->group_name = 'group_node_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node details',
    'weight' => '3',
    'children' => array(
      0 => 'group_funding',
      1 => 'group_miscellaneous',
      2 => 'group_participant_partner',
      3 => 'group_programme',
      4 => 'group_related_activities',
      5 => 'group_related_docs_and_info',
      6 => 'group_tags',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_node_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participant_partner|node|project|form';
  $field_group->group_name = 'group_participant_partner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Participant / partner',
    'weight' => '31',
    'children' => array(
      0 => 'field_pj_participants',
      1 => 'field_pj_partners',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participant-partner field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_participant_partner|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_programme|node|project|form';
  $field_group->group_name = 'group_programme';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Programme',
    'weight' => '29',
    'children' => array(
      0 => 'field_duration',
      1 => 'field_programme',
      2 => 'field_status',
      3 => 'pj_call',
      4 => 'pj_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-programme field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_programme|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_activities|node|programme|form';
  $field_group->group_name = 'group_related_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Related activities',
    'weight' => '9',
    'children' => array(
      0 => 'field_related_news',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-activities field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_activities|node|programme|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_activities|node|project|form';
  $field_group->group_name = 'group_related_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Related activities',
    'weight' => '32',
    'children' => array(
      0 => 'field_related_events',
      1 => 'field_related_news',
      2 => 'field_related_projects',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-activities field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_activities|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_docs_and_info|node|programme|form';
  $field_group->group_name = 'group_related_docs_and_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Related documents and information',
    'weight' => '10',
    'children' => array(
      0 => 'field_related_resources',
      1 => 'gr_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_docs_and_info|node|programme|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_docs_and_info|node|project|form';
  $field_group->group_name = 'group_related_docs_and_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Related resouces',
    'weight' => '33',
    'children' => array(
      0 => 'field_related_resources',
      1 => 'gr_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_docs_and_info|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|project|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node_details';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '34',
    'children' => array(
      0 => 'field_regions',
      1 => 'gr_purpose',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tags|node|project|form'] = $field_group;

  return $export;
}
