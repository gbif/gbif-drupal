<?php
/**
 * @file
 * gbif_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gbif_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_gbifs_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event - GBIFS admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event - GBIFS admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'ge_date_ical' => 'ge_date_ical',
    'ge_location' => 'ge_location',
    'ge_venue_country' => 'ge_venue_country',
    'field_ge_gbifs_attendee_editable' => 'field_ge_gbifs_attendee_editable',
    'field_notes_editable' => 'field_notes_editable',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'ge_date_ical';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ge_date_ical' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ge_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ge_venue_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ge_gbifs_attendee_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['caption'] = 'Default view shows complete event list from start of 2016';
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Add to calendar */
  $handler->display->display_options['fields']['ge_date_ical']['id'] = 'ge_date_ical';
  $handler->display->display_options['fields']['ge_date_ical']['table'] = 'field_data_ge_date_ical';
  $handler->display->display_options['fields']['ge_date_ical']['field'] = 'ge_date_ical';
  $handler->display->display_options['fields']['ge_date_ical']['label'] = 'Date';
  $handler->display->display_options['fields']['ge_date_ical']['element_type'] = '0';
  $handler->display->display_options['fields']['ge_date_ical']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ge_date_ical']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['ge_date_ical']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['ge_location']['id'] = 'ge_location';
  $handler->display->display_options['fields']['ge_location']['table'] = 'field_data_ge_location';
  $handler->display->display_options['fields']['ge_location']['field'] = 'ge_location';
  $handler->display->display_options['fields']['ge_location']['element_type'] = '0';
  $handler->display->display_options['fields']['ge_location']['element_default_classes'] = FALSE;
  /* Field: Content: Venue country */
  $handler->display->display_options['fields']['ge_venue_country']['id'] = 'ge_venue_country';
  $handler->display->display_options['fields']['ge_venue_country']['table'] = 'field_data_ge_venue_country';
  $handler->display->display_options['fields']['ge_venue_country']['field'] = 'ge_venue_country';
  $handler->display->display_options['fields']['ge_venue_country']['element_type'] = '0';
  $handler->display->display_options['fields']['ge_venue_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['ge_venue_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: GBIF attendee (editable) */
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['id'] = 'field_ge_gbif_attendee_editable';
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['table'] = 'field_data_field_ge_gbif_attendee';
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['field'] = 'field_ge_gbif_attendee_editable';
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['label'] = 'GBIF attendee';
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['widget_type'] = 'text_textfield';
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ge_gbif_attendee_editable']['suppress_description'] = 0;
  /* Field: Content: Notes (editable) */
  $handler->display->display_options['fields']['field_notes_editable']['id'] = 'field_notes_editable';
  $handler->display->display_options['fields']['field_notes_editable']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes_editable']['field'] = 'field_notes_editable';
  $handler->display->display_options['fields']['field_notes_editable']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_notes_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notes_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_notes_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_notes_editable']['suppress_description'] = 1;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Public';
  $handler->display->display_options['fields']['status']['element_type'] = '0';
  $handler->display->display_options['fields']['status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Filter criterion: Content: Add to calendar -  start date (ge_date_ical) */
  $handler->display->display_options['filters']['ge_date_ical_value']['id'] = 'ge_date_ical_value';
  $handler->display->display_options['filters']['ge_date_ical_value']['table'] = 'field_data_ge_date_ical';
  $handler->display->display_options['filters']['ge_date_ical_value']['field'] = 'ge_date_ical_value';
  $handler->display->display_options['filters']['ge_date_ical_value']['operator'] = '>=';
  $handler->display->display_options['filters']['ge_date_ical_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['ge_date_ical_value']['expose']['operator_id'] = 'ge_date_ical_value_op';
  $handler->display->display_options['filters']['ge_date_ical_value']['expose']['label'] = 'Start date';
  $handler->display->display_options['filters']['ge_date_ical_value']['expose']['operator'] = 'ge_date_ical_value_op';
  $handler->display->display_options['filters']['ge_date_ical_value']['expose']['identifier'] = 'ge_date_ical_value';
  $handler->display->display_options['filters']['ge_date_ical_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    10 => 0,
    11 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['ge_date_ical_value']['default_date'] = 'first day of January 2016';
  /* Filter criterion: Content: Add to calendar - end date (ge_date_ical:value2) */
  $handler->display->display_options['filters']['ge_date_ical_value2']['id'] = 'ge_date_ical_value2';
  $handler->display->display_options['filters']['ge_date_ical_value2']['table'] = 'field_data_ge_date_ical';
  $handler->display->display_options['filters']['ge_date_ical_value2']['field'] = 'ge_date_ical_value2';
  $handler->display->display_options['filters']['ge_date_ical_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['ge_date_ical_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['ge_date_ical_value2']['expose']['operator_id'] = 'ge_date_ical_value2_op';
  $handler->display->display_options['filters']['ge_date_ical_value2']['expose']['label'] = 'End date';
  $handler->display->display_options['filters']['ge_date_ical_value2']['expose']['operator'] = 'ge_date_ical_value2_op';
  $handler->display->display_options['filters']['ge_date_ical_value2']['expose']['identifier'] = 'ge_date_ical_value2';
  $handler->display->display_options['filters']['ge_date_ical_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    10 => 0,
    11 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['ge_date_ical_value2']['default_date'] = 'last day of December 2016';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/event-gbifs-admin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Event - GBIFS admin';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['event_gbifs_admin'] = array(
    t('Master'),
    t('Event - GBIFS admin'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Date'),
    t('Location'),
    t('Venue country'),
    t('GBIF attendee'),
    t('Notes'),
    t('Public'),
    t('Start date'),
    t('End date'),
    t('Page'),
  );
  $export['event_gbifs_admin'] = $view;

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'event-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'event-lists';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['ge_ims_date']['id'] = 'ge_ims_date';
  $handler->display->display_options['fields']['ge_ims_date']['table'] = 'field_data_ge_ims_date';
  $handler->display->display_options['fields']['ge_ims_date']['field'] = 'ge_ims_date';
  $handler->display->display_options['fields']['ge_ims_date']['label'] = '';
  $handler->display->display_options['fields']['ge_ims_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ge_ims_date']['settings'] = array(
    'format_type' => 'mmm_dd',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '350',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['ge_location']['id'] = 'ge_location';
  $handler->display->display_options['fields']['ge_location']['table'] = 'field_data_ge_location';
  $handler->display->display_options['fields']['ge_location']['field'] = 'ge_location';
  $handler->display->display_options['fields']['ge_location']['label'] = '';
  $handler->display->display_options['fields']['ge_location']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (ge_ims_date) */
  $handler->display->display_options['sorts']['ge_ims_date_value']['id'] = 'ge_ims_date_value';
  $handler->display->display_options['sorts']['ge_ims_date_value']['table'] = 'field_data_ge_ims_date';
  $handler->display->display_options['sorts']['ge_ims_date_value']['field'] = 'ge_ims_date_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event Date - end date (ge_ims_date:value2) */
  $handler->display->display_options['filters']['ge_ims_date_value2']['id'] = 'ge_ims_date_value2';
  $handler->display->display_options['filters']['ge_ims_date_value2']['table'] = 'field_data_ge_ims_date';
  $handler->display->display_options['filters']['ge_ims_date_value2']['field'] = 'ge_ims_date_value2';
  $handler->display->display_options['filters']['ge_ims_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['ge_ims_date_value2']['default_date'] = '1AM today';

  /* Display: upcoming */
  $handler = $view->new_display('page', 'upcoming', 'upcoming');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['display_description'] = 'List of upcoming events.';
  $handler->display->display_options['path'] = 'newsroom/events/upcoming';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: past */
  $handler = $view->new_display('page', 'past', 'past');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past events';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (ge_ims_date) */
  $handler->display->display_options['sorts']['ge_ims_date_value']['id'] = 'ge_ims_date_value';
  $handler->display->display_options['sorts']['ge_ims_date_value']['table'] = 'field_data_ge_ims_date';
  $handler->display->display_options['sorts']['ge_ims_date_value']['field'] = 'ge_ims_date_value';
  $handler->display->display_options['sorts']['ge_ims_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event Date - end date (ge_ims_date:value2) */
  $handler->display->display_options['filters']['ge_ims_date_value2']['id'] = 'ge_ims_date_value2';
  $handler->display->display_options['filters']['ge_ims_date_value2']['table'] = 'field_data_ge_ims_date';
  $handler->display->display_options['filters']['ge_ims_date_value2']['field'] = 'ge_ims_date_value2';
  $handler->display->display_options['filters']['ge_ims_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['ge_ims_date_value2']['default_date'] = '1AM today';
  $handler->display->display_options['path'] = 'newsroom/events/past';

  /* Display: Block of latest 4 */
  $handler = $view->new_display('block', 'Block of latest 4', 'latest4_fp');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['display_description'] = 'The latest 4 upcoming events in a block.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More';
  $handler->display->display_options['link_url'] = 'newsroom/events/upcoming';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'latest4-fp';
  $handler->display->display_options['style_options']['wrapper_class'] = 'latest4-fp';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['ge_ims_date']['id'] = 'ge_ims_date';
  $handler->display->display_options['fields']['ge_ims_date']['table'] = 'field_data_ge_ims_date';
  $handler->display->display_options['fields']['ge_ims_date']['field'] = 'ge_ims_date';
  $handler->display->display_options['fields']['ge_ims_date']['label'] = '';
  $handler->display->display_options['fields']['ge_ims_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ge_ims_date']['settings'] = array(
    'format_type' => 'mmm_dd',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['ge_location']['id'] = 'ge_location';
  $handler->display->display_options['fields']['ge_location']['table'] = 'field_data_ge_location';
  $handler->display->display_options['fields']['ge_location']['field'] = 'ge_location';
  $handler->display->display_options['fields']['ge_location']['label'] = '';
  $handler->display->display_options['fields']['ge_location']['element_label_colon'] = FALSE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_upcoming');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'newsroom/events/upcoming.xml';
  $handler->display->display_options['displays'] = array(
    'upcoming' => 'upcoming',
    'default' => 0,
    'past' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed iCal */
  $handler = $view->new_display('feed', 'Feed iCal', 'feed_ical');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = 'GBIF Upcoming Events';
  $handler->display->display_options['style_options']['no_calname'] = TRUE;
  $handler->display->display_options['style_options']['exclude_dtstamp'] = TRUE;
  $handler->display->display_options['style_options']['unescape_punctuation'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_ge_date_ical.ge_date_ical_value';
  $handler->display->display_options['row_options']['summary_field'] = 'default_title';
  $handler->display->display_options['row_options']['location_field'] = 'field_data_ge_location.ge_location';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'newsroom/events/calendar/upcoming.ics';
  $handler->display->display_options['displays'] = array(
    'upcoming' => 'upcoming',
    'default' => 0,
    'past' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['events'] = array(
    t('Master'),
    t('Events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('upcoming'),
    t('Upcoming events'),
    t('List of upcoming events.'),
    t('past'),
    t('Past events'),
    t('Block of latest 4'),
    t('The latest 4 upcoming events in a block.'),
    t('More'),
    t('Feed'),
    t('Feed iCal'),
  );
  $export['events'] = $view;

  return $export;
}
