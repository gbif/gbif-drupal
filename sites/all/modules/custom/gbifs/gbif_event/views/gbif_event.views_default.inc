<?php

/**
 * Implements hook_views_default_views().
 */
function gbif_event_views_default_views() {
	$views = array();

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
	/* Field: Content: Event date */
	$handler->display->display_options['fields']['ims_date']['id'] = 'ims_date';
	$handler->display->display_options['fields']['ims_date']['table'] = 'field_data_ims_date';
	$handler->display->display_options['fields']['ims_date']['field'] = 'ims_date';
	$handler->display->display_options['fields']['ims_date']['label'] = '';
	$handler->display->display_options['fields']['ims_date']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['ims_date']['settings'] = array(
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
		'trim_length' => '580',
		'trim_type' => 'chars',
		'trim_suffix' => '...',
		'more_link' => '0',
		'more_text' => 'Read more',
		'summary_handler' => 'full',
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
	/* Sort criterion: Content: Event date -  start date (ims_date) */
	$handler->display->display_options['sorts']['ims_date_value']['id'] = 'ims_date_value';
	$handler->display->display_options['sorts']['ims_date_value']['table'] = 'field_data_ims_date';
	$handler->display->display_options['sorts']['ims_date_value']['field'] = 'ims_date_value';
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
	/* Filter criterion: Content: Event date -  start date (ims_date) */
	$handler->display->display_options['filters']['ims_date_value']['id'] = 'ims_date_value';
	$handler->display->display_options['filters']['ims_date_value']['table'] = 'field_data_ims_date';
	$handler->display->display_options['filters']['ims_date_value']['field'] = 'ims_date_value';
	$handler->display->display_options['filters']['ims_date_value']['operator'] = '>=';
	$handler->display->display_options['filters']['ims_date_value']['group'] = 1;
	$handler->display->display_options['filters']['ims_date_value']['granularity'] = 'hour';
	$handler->display->display_options['filters']['ims_date_value']['default_date'] = '1AM today';
	$handler->display->display_options['filters']['ims_date_value']['year_range'] = '-0:+5';

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
	/* Sort criterion: Content: Event date -  start date (ims_date) */
	$handler->display->display_options['sorts']['ims_date_value']['id'] = 'ims_date_value';
	$handler->display->display_options['sorts']['ims_date_value']['table'] = 'field_data_ims_date';
	$handler->display->display_options['sorts']['ims_date_value']['field'] = 'ims_date_value';
	$handler->display->display_options['sorts']['ims_date_value']['order'] = 'DESC';
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
	/* Filter criterion: Content: Event date -  start date (ims_date) */
	$handler->display->display_options['filters']['ims_date_value']['id'] = 'ims_date_value';
	$handler->display->display_options['filters']['ims_date_value']['table'] = 'field_data_ims_date';
	$handler->display->display_options['filters']['ims_date_value']['field'] = 'ims_date_value';
	$handler->display->display_options['filters']['ims_date_value']['operator'] = '<';
	$handler->display->display_options['filters']['ims_date_value']['group'] = 1;
	$handler->display->display_options['filters']['ims_date_value']['granularity'] = 'hour';
	$handler->display->display_options['filters']['ims_date_value']['default_date'] = '1AM today';
	$handler->display->display_options['filters']['ims_date_value']['year_range'] = '-0:+5';
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
	/* Field: Content: Event date */
	$handler->display->display_options['fields']['ims_date']['id'] = 'ims_date';
	$handler->display->display_options['fields']['ims_date']['table'] = 'field_data_ims_date';
	$handler->display->display_options['fields']['ims_date']['field'] = 'ims_date';
	$handler->display->display_options['fields']['ims_date']['label'] = '';
	$handler->display->display_options['fields']['ims_date']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['ims_date']['settings'] = array(
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
	$handler->display->display_options['row_options']['description_field'] = 'field_data_body.body';
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

	$views[] = $view;

	return $views;
}