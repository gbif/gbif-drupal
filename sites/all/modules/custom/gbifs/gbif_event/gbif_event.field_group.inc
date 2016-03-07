<?php
/**
 * @file
 * gbif_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gbif_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_time|node|event|form';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Date and time',
    'weight' => '29',
    'children' => array(
      0 => 'ge_date_ical',
      1 => 'ge_date_text',
      2 => 'ge_ims_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date-time field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_date_time|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|event|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '28',
    'children' => array(
      0 => 'body',
      1 => 'ge_desc_long',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_description|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|event|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '3',
    'children' => array(
      0 => 'group_date_time',
      1 => 'group_description',
      2 => 'group_host',
      3 => 'group_location',
      4 => 'group_people',
      5 => 'group_resources',
      6 => 'group_secretariat_admin',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_host|node|event|form';
  $field_group->group_name = 'group_host';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Host',
    'weight' => '32',
    'children' => array(
      0 => 'ge_contact_info',
      1 => 'ge_language',
      2 => 'ge_organising_participants',
      3 => 'ge_status',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-host field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_host|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|event|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '31',
    'children' => array(
      0 => 'ge_location',
      1 => 'ge_venue',
      2 => 'ge_venue_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|event|form';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '30',
    'children' => array(
      0 => 'ge_audience',
      1 => 'ge_participants',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-people field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_people|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|event|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '33',
    'children' => array(
      0 => 'ge_image',
      1 => 'ge_lib_resources',
      2 => 'ge_resources',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_resources|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secretariat_admin|node|event|form';
  $field_group->group_name = 'group_secretariat_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Secretariat admin',
    'weight' => '34',
    'children' => array(
      0 => 'ge_ims_kp_id',
      1 => 'field_notes',
      2 => 'field_ge_gbif_attendee',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-secretariat-admin field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_secretariat_admin|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Date and time');
  t('Description');
  t('Event');
  t('Host');
  t('Location');
  t('People');
  t('Resources');
  t('Secretariat admin');

  return $field_groups;
}
