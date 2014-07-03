<?php
	/**
 * @file
 * gbif_pages.views.newsarticles.inc
 */

function gbif_pages_view_viewallevents() {

	/* View All Events
	 */
	$view = new view();
	$view->name = 'viewallevents';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Events';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Current GBIF events';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['items_per_page'] = '10';
	$handler->display->display_options['pager']['options']['offset'] = '0';
	$handler->display->display_options['style_plugin'] = 'default';
	$handler->display->display_options['style_options']['default_row_class'] = FALSE;
	$handler->display->display_options['style_options']['row_class_special'] = FALSE;
	$handler->display->display_options['row_plugin'] = 'node';
	/* Field: Content: Title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'node';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
	$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
	/* Sort criterion: Content: start_date (field_start_date) */
	$handler->display->display_options['sorts']['field_start_date_value']['id'] = 'field_start_date_value';
	$handler->display->display_options['sorts']['field_start_date_value']['table'] = 'field_data_field_start_date';
	$handler->display->display_options['sorts']['field_start_date_value']['field'] = 'field_start_date_value';
	/* Filter criterion: Content: Type */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'node';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = array(
		'event_ims' => 'event_ims',
	);
	/* Filter criterion: Content: Published */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = '1';
	/* Filter criterion: Content: start_date (field_start_date) */
	$handler->display->display_options['filters']['field_start_date_value']['id'] = 'field_start_date_value';
	$handler->display->display_options['filters']['field_start_date_value']['table'] = 'field_data_field_start_date';
	$handler->display->display_options['filters']['field_start_date_value']['field'] = 'field_start_date_value';
	$handler->display->display_options['filters']['field_start_date_value']['operator'] = '>';
	$handler->display->display_options['filters']['field_start_date_value']['granularity'] = 'minute';
	$handler->display->display_options['filters']['field_start_date_value']['default_date'] = '1AM today';
	$handler->display->display_options['filters']['field_start_date_value']['year_range'] = '-0:+5';

	/* Display: Upcoming */
	$handler = $view->new_display('page', 'Upcoming', 'current');
	$handler->display->display_options['defaults']['title'] = FALSE;
	$handler->display->display_options['title'] = 'Upcoming GBIF events';
	$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
	$handler->display->display_options['defaults']['pager'] = FALSE;
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['items_per_page'] = '10';
	$handler->display->display_options['pager']['options']['offset'] = '0';
	$handler->display->display_options['pager']['options']['id'] = '0';
	$handler->display->display_options['pager']['options']['quantity'] = '9';
	$handler->display->display_options['defaults']['sorts'] = FALSE;
	/* Sort criterion: Content: start_date (field_start_date) */
	$handler->display->display_options['sorts']['field_start_date_value']['id'] = 'field_start_date_value';
	$handler->display->display_options['sorts']['field_start_date_value']['table'] = 'field_data_field_start_date';
	$handler->display->display_options['sorts']['field_start_date_value']['field'] = 'field_start_date_value';
	$handler->display->display_options['defaults']['filter_groups'] = FALSE;
	$handler->display->display_options['defaults']['filters'] = FALSE;
	/* Filter criterion: Content: Type */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'node';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = array(
		'event_ims' => 'event_ims',
	);
	/* Filter criterion: Content: Published */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = '1';
	/* Filter criterion: Content: start_date (field_start_date) */
	$handler->display->display_options['filters']['field_start_date_value']['id'] = 'field_start_date_value';
	$handler->display->display_options['filters']['field_start_date_value']['table'] = 'field_data_field_start_date';
	$handler->display->display_options['filters']['field_start_date_value']['field'] = 'field_start_date_value';
	$handler->display->display_options['filters']['field_start_date_value']['operator'] = '>=';
	$handler->display->display_options['filters']['field_start_date_value']['granularity'] = 'minute';
	$handler->display->display_options['filters']['field_start_date_value']['default_date'] = '1AM today';
	$handler->display->display_options['filters']['field_start_date_value']['year_range'] = '-0:+5';
	$handler->display->display_options['path'] = 'newsroom/events';
	$handler->display->display_options['menu']['type'] = 'normal';
	$handler->display->display_options['menu']['title'] = 'A view of all GBIF events';
	$handler->display->display_options['menu']['weight'] = '0';
	$handler->display->display_options['menu']['name'] = 'main-menu';
	$handler->display->display_options['menu']['context'] = 0;
	$handler->display->display_options['menu']['context_only_inline'] = 0;

	/* Display: Past */
	$handler = $view->new_display('page', 'Past', 'past');
	$handler->display->display_options['defaults']['title'] = FALSE;
	$handler->display->display_options['title'] = 'Past GBIF events';
	$handler->display->display_options['defaults']['sorts'] = FALSE;
	/* Sort criterion: Content: start_date (field_start_date) */
	$handler->display->display_options['sorts']['field_start_date_value']['id'] = 'field_start_date_value';
	$handler->display->display_options['sorts']['field_start_date_value']['table'] = 'field_data_field_start_date';
	$handler->display->display_options['sorts']['field_start_date_value']['field'] = 'field_start_date_value';
	$handler->display->display_options['sorts']['field_start_date_value']['order'] = 'DESC';
	$handler->display->display_options['defaults']['filter_groups'] = FALSE;
	$handler->display->display_options['defaults']['filters'] = FALSE;
	/* Filter criterion: Content: Type */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'node';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = array(
		'event_ims' => 'event_ims',
	);
	/* Filter criterion: Content: Published */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = '1';
	/* Filter criterion: Content: start_date (field_start_date) */
	$handler->display->display_options['filters']['field_start_date_value']['id'] = 'field_start_date_value';
	$handler->display->display_options['filters']['field_start_date_value']['table'] = 'field_data_field_start_date';
	$handler->display->display_options['filters']['field_start_date_value']['field'] = 'field_start_date_value';
	$handler->display->display_options['filters']['field_start_date_value']['operator'] = '<';
	$handler->display->display_options['filters']['field_start_date_value']['granularity'] = 'minute';
	$handler->display->display_options['filters']['field_start_date_value']['default_date'] = '1AM today';
	$handler->display->display_options['filters']['field_start_date_value']['year_range'] = '-0:+5';
	$handler->display->display_options['path'] = 'newsroom/events/archive';

	/* Display: Block of latest 4 */
	$handler = $view->new_display('block', 'Block of latest 4', 'latest4_fp');
	$handler->display->display_options['defaults']['use_more'] = FALSE;
	$handler->display->display_options['use_more'] = TRUE;
	$handler->display->display_options['defaults']['use_more_always'] = FALSE;
	$handler->display->display_options['defaults']['use_more_always'] = FALSE;
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['defaults']['use_more_text'] = FALSE;
	$handler->display->display_options['use_more_text'] = 'More';
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
	/* Field: Content: start_date */
	$handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
	$handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
	$handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
	$handler->display->display_options['fields']['field_start_date']['label'] = '';
	$handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['field_start_date']['settings'] = array(
		'format_type' => 'mmm_dd',
		'fromto' => 'both',
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
	$handler->display->display_options['fields']['title']['alter']['max_length'] = '110';
	$handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
	$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
	$handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	$translatables['viewallevents'] = array(
		t('Master'),
		t('Current GBIF events'),
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
		t('Upcoming'),
		t('Upcoming GBIF events'),
		t('Past'),
		t('Past GBIF events'),
		t('Block of latest 4'),
		t('More'),
	);

	return $view;
}

