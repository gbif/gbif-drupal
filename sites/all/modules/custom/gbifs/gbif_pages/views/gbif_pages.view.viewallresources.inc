<?php
/**
 * @file
 * gbif_pages.views.newsarticles.inc
 */                                     
 
function gbif_pages_view_viewallresources() {
  
  /* All resources.
   */
	$view = new view();
	$view->name = 'viewallresources';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Resources';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Finding useful resources';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['items_per_page'] = '10';
	$handler->display->display_options['style_plugin'] = 'default';
	$handler->display->display_options['row_plugin'] = 'node';
	$handler->display->display_options['row_options']['view_mode'] = 'teaser_nt';
	/* Field: Content: Title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'node';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
	$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
	/* Sort criterion: Content: Publishing date (field_publishing_date) */
	$handler->display->display_options['sorts']['field_publishing_date_value']['id'] = 'field_publishing_date_value';
	$handler->display->display_options['sorts']['field_publishing_date_value']['table'] = 'field_data_field_publishing_date';
	$handler->display->display_options['sorts']['field_publishing_date_value']['field'] = 'field_publishing_date_value';
	$handler->display->display_options['sorts']['field_publishing_date_value']['order'] = 'DESC';
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
	'resource_ims' => 'resource_ims',
	);

	/* Display: Page */
	$handler = $view->new_display('page', 'Page', 'latest5');
	$handler->display->display_options['defaults']['use_more'] = FALSE;
	$handler->display->display_options['use_more'] = TRUE;
	$handler->display->display_options['defaults']['use_more_always'] = FALSE;
	$handler->display->display_options['defaults']['use_more_always'] = FALSE;
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['defaults']['use_more_text'] = FALSE;
	$handler->display->display_options['use_more_text'] = 'Archive of all GBIF resources';
	$handler->display->display_options['defaults']['pager'] = FALSE;
	$handler->display->display_options['pager']['type'] = 'some';
	$handler->display->display_options['pager']['options']['items_per_page'] = '5';
	$handler->display->display_options['pager']['options']['offset'] = '0';
	$handler->display->display_options['defaults']['header'] = FALSE;
	/* Header: Global: Unfiltered text */
	$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
	$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
	$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
	$handler->display->display_options['header']['area_text_custom']['label'] = 'Label';
	$handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Latest Additions</h3>';
	$handler->display->display_options['path'] = 'resources/summary';
	$handler->display->display_options['menu']['type'] = 'normal';
	$handler->display->display_options['menu']['title'] = 'Archive of all Resources';
	$handler->display->display_options['menu']['weight'] = '0';
	$handler->display->display_options['menu']['name'] = 'main-menu';
	$handler->display->display_options['menu']['context'] = 0;
	$handler->display->display_options['menu']['context_only_inline'] = 0;

	/* Display: Feed */
	$handler = $view->new_display('feed', 'Feed', 'feed_1');
	$handler->display->display_options['pager']['type'] = 'some';
	$handler->display->display_options['style_plugin'] = 'rss';
	$handler->display->display_options['row_plugin'] = 'node_rss';
	$handler->display->display_options['row_options']['item_length'] = 'rss';
	$handler->display->display_options['path'] = 'resources/archive/rss';

	/* Display: Resources Full List */
	$handler = $view->new_display('page', 'Resources Full List', 'page');
	$handler->display->display_options['defaults']['use_more'] = FALSE;
	$handler->display->display_options['defaults']['use_more_always'] = FALSE;
	$handler->display->display_options['defaults']['use_more_always'] = FALSE;
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['defaults']['use_more_text'] = FALSE;
	$handler->display->display_options['use_more_text'] = 'Archive of all GBIF resources';
	$handler->display->display_options['defaults']['pager'] = FALSE;
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['items_per_page'] = '10';
	$handler->display->display_options['pager']['options']['offset'] = '0';
	$handler->display->display_options['pager']['options']['id'] = '0';
	$handler->display->display_options['pager']['options']['quantity'] = '9';
	$handler->display->display_options['path'] = 'resources/archive';
	$translatables['viewallresources'] = array(
		t('Master'),
		t('Finding useful resources'),
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
		t('Page'),
		t('Archive of all GBIF resources'),
		t('Label'),
		t('<h3>Latest Additions</h3>'),
		t('Feed'),
		t('Resources Full List'),
	);
  
  return $view;
}