<?php
/**
 * @file
 * gbif_pages.views.newsarticles.inc
 */                                     
 
function gbif_pages_view_featurednewsarticles() {
  /* Featured news
   */
	$view = new view();
	$view->name = 'featurednewsarticles';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Featured news slideshow';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Featured';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'some';
	$handler->display->display_options['pager']['options']['items_per_page'] = '5';
	$handler->display->display_options['pager']['options']['offset'] = '0';
	$handler->display->display_options['style_plugin'] = 'slideshow';
	$handler->display->display_options['style_options']['row_class'] = 'slideshow-row';
	$handler->display->display_options['style_options']['default_row_class'] = FALSE;
	$handler->display->display_options['style_options']['row_class_special'] = FALSE;
	$handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
	$handler->display->display_options['style_options']['slideshow_skin'] = 'default';
	$handler->display->display_options['style_options']['skin_info'] = array(
		'class' => 'default',
		'name' => 'Default',
		'module' => 'views_slideshow',
		'path' => '',
		'stylesheets' => array(),
	);
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['hide_on_single_slide'] = 1;
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
		'nid' => 'nid',
		'title' => 0,
		'body' => 0,
		'field_featured' => 0,
	);
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['hide_on_single_slide'] = 1;
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
	$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
	$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
	$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
	$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
		'title' => 0,
		'body' => 0,
		'field_featured' => 0,
		'nid' => 0,
	);
	$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
	$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
	$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
	$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
	$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
	$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
	$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
	$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
	$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
	$handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
	$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
	$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
	$handler->display->display_options['row_plugin'] = 'fields';
	/* Field: Content: Title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'node';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
	$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
	/* Field: Content: Body */
	$handler->display->display_options['fields']['body']['id'] = 'body';
	$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
	$handler->display->display_options['fields']['body']['field'] = 'body';
	$handler->display->display_options['fields']['body']['label'] = '';
	$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
	$handler->display->display_options['fields']['body']['settings'] = array(
		'trim_length' => '600',
	);
	/* Field: Content: Featured */
	$handler->display->display_options['fields']['field_featured']['id'] = 'field_featured';
	$handler->display->display_options['fields']['field_featured']['table'] = 'field_data_field_featured';
	$handler->display->display_options['fields']['field_featured']['field'] = 'field_featured';
	$handler->display->display_options['fields']['field_featured']['label'] = '';
	$handler->display->display_options['fields']['field_featured']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['field_featured']['click_sort_column'] = 'fid';
	$handler->display->display_options['fields']['field_featured']['settings'] = array(
		'image_style' => 'featured_news_slideshow_image',
		'image_link' => '',
	);
	/* Field: Content: Nid */
	$handler->display->display_options['fields']['nid']['id'] = 'nid';
	$handler->display->display_options['fields']['nid']['table'] = 'node';
	$handler->display->display_options['fields']['nid']['field'] = 'nid';
	$handler->display->display_options['fields']['nid']['label'] = '';
	$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
	$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
	/* Sort criterion: Content: Post date */
	$handler->display->display_options['sorts']['created']['id'] = 'created';
	$handler->display->display_options['sorts']['created']['table'] = 'node';
	$handler->display->display_options['sorts']['created']['field'] = 'created';
	$handler->display->display_options['sorts']['created']['order'] = 'DESC';
	/* Filter criterion: Content: Published */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = 1;
	$handler->display->display_options['filters']['status']['group'] = 1;
	$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
	/* Filter criterion: Content: Featured (field_featured:alt) */
	$handler->display->display_options['filters']['field_featured_alt']['id'] = 'field_featured_alt';
	$handler->display->display_options['filters']['field_featured_alt']['table'] = 'field_data_field_featured';
	$handler->display->display_options['filters']['field_featured_alt']['field'] = 'field_featured_alt';
	$handler->display->display_options['filters']['field_featured_alt']['operator'] = 'not empty';
	/* Filter criterion: Content: Has taxonomy term */
	$handler->display->display_options['filters']['tid']['id'] = 'tid';
	$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
	$handler->display->display_options['filters']['tid']['field'] = 'tid';
	$handler->display->display_options['filters']['tid']['value'] = array(
		0 => '547',
	);
	$handler->display->display_options['filters']['tid']['vocabulary'] = 'corenews';
	/* Filter criterion: Content: Type */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'node';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = array(
		'newsarticle' => 'newsarticle',
	);
	$translatables['featurednewsarticles'] = array(
		t('Master'),
		t('Featured'),
		t('more'),
		t('Apply'),
		t('Reset'),
		t('Sort by'),
		t('Asc'),
		t('Desc'),
	);

  return $view;  
}