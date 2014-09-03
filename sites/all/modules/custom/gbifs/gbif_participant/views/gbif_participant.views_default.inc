<?php
/**
 * @file
 * gbif_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gbif_participant_views_default_views() {

  $views = array();

	$view = new view();
	$view->name = 'country_page';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'country_page';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'country_page';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'some';
	$handler->display->display_options['pager']['options']['items_per_page'] = '10';
	$handler->display->display_options['style_plugin'] = 'list';
	$handler->display->display_options['row_plugin'] = 'node';
	$handler->display->display_options['row_options']['view_mode'] = 'full';
	$handler->display->display_options['row_options']['links'] = FALSE;
	/* Field: Content: Title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'node';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
	$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
	/* Sort criterion: Content: Post date */
	$handler->display->display_options['sorts']['created']['id'] = 'created';
	$handler->display->display_options['sorts']['created']['table'] = 'node';
	$handler->display->display_options['sorts']['created']['field'] = 'created';
	$handler->display->display_options['sorts']['created']['order'] = 'DESC';
	/* Contextual filter: Content: Participant ID (gp_id) */
	$handler->display->display_options['arguments']['gp_id_value']['id'] = 'gp_id_value';
	$handler->display->display_options['arguments']['gp_id_value']['table'] = 'field_data_gp_id';
	$handler->display->display_options['arguments']['gp_id_value']['field'] = 'gp_id_value';
	$handler->display->display_options['arguments']['gp_id_value']['default_action'] = 'not found';
	$handler->display->display_options['arguments']['gp_id_value']['default_argument_type'] = 'fixed';
	$handler->display->display_options['arguments']['gp_id_value']['summary']['number_of_records'] = '0';
	$handler->display->display_options['arguments']['gp_id_value']['summary']['format'] = 'default_summary';
	$handler->display->display_options['arguments']['gp_id_value']['summary_options']['items_per_page'] = '25';
	/* Filter criterion: Content: Published */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = 1;
	$handler->display->display_options['filters']['status']['group'] = 1;
	$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
	/* Filter criterion: Content: Type */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'node';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = array(
		'gbif_participant' => 'gbif_participant',
	);

	/* Display: Page */
	$handler = $view->new_display('page', 'Page', 'page');
	$handler->display->display_options['path'] = 'country-page/%/participation';
	$translatables['country_page'] = array(
		t('Master'),
		t('country_page'),
		t('more'),
		t('Apply'),
		t('Reset'),
		t('Sort by'),
		t('Asc'),
		t('Desc'),
		t('All'),
		t('Page'),
	);

	$views[$view->name] = $view;

  return $views;
  
}
