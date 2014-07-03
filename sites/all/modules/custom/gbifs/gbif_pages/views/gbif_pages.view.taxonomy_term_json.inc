<?php

function gbif_pages_view_taxonomy_term_json() {

	/*
	 * Taxonomy term.
	 */
	$view = new view();
	$view->name = 'taxonomy_term_json';
	$view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Taxonomy term JSON';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'none';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['query']['options']['query_comment'] = FALSE;
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['style_plugin'] = 'views_json';
	$handler->display->display_options['style_options']['plaintext_output'] = 1;
	$handler->display->display_options['style_options']['remove_newlines'] = 0;
	$handler->display->display_options['style_options']['jsonp_prefix'] = 'callback';
	$handler->display->display_options['style_options']['content_type'] = 'application/javascript';
	$handler->display->display_options['style_options']['using_views_api_mode'] = 0;
	$handler->display->display_options['style_options']['object_arrays'] = 0;
	$handler->display->display_options['style_options']['numeric_strings'] = 0;
	$handler->display->display_options['style_options']['bigint_string'] = 0;
	$handler->display->display_options['style_options']['pretty_print'] = 0;
	$handler->display->display_options['style_options']['unescaped_slashes'] = 0;
	$handler->display->display_options['style_options']['unescaped_unicode'] = 0;
	$handler->display->display_options['style_options']['char_encoding'] = array();
	/* Field: Content: Body */
	$handler->display->display_options['fields']['body']['id'] = 'body';
	$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
	$handler->display->display_options['fields']['body']['field'] = 'body';
	$handler->display->display_options['fields']['body']['label'] = '';
	$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
	$handler->display->display_options['fields']['body']['settings'] = array(
		'trim_length' => '300',
	);
	/* Field: Content: Image */
	$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
	$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
	$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
	$handler->display->display_options['fields']['field_image']['label'] = '';
	$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
	$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
	$handler->display->display_options['fields']['field_image']['settings'] = array(
		'image_style' => 'featured',
		'image_link' => '',
	);
	/* Field: Content: Author uid */
	$handler->display->display_options['fields']['uid']['id'] = 'uid';
	$handler->display->display_options['fields']['uid']['table'] = 'node';
	$handler->display->display_options['fields']['uid']['field'] = 'uid';
	$handler->display->display_options['fields']['uid']['label'] = '';
	$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
	/* Field: Content: Link */
	$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
	$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
	$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
	$handler->display->display_options['fields']['view_node']['label'] = '';
	$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
	/* Field: Content: Title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'node';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
	/* Field: Content: Post date */
	$handler->display->display_options['fields']['created']['id'] = 'created';
	$handler->display->display_options['fields']['created']['table'] = 'node';
	$handler->display->display_options['fields']['created']['field'] = 'created';
	$handler->display->display_options['fields']['created']['label'] = '';
	$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
	/* Field: Content: Type */
	$handler->display->display_options['fields']['type']['id'] = 'type';
	$handler->display->display_options['fields']['type']['table'] = 'node';
	$handler->display->display_options['fields']['type']['field'] = 'type';
	$handler->display->display_options['fields']['type']['label'] = '';
	$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
	/* Field: Content: Nid */
	$handler->display->display_options['fields']['nid']['id'] = 'nid';
	$handler->display->display_options['fields']['nid']['table'] = 'node';
	$handler->display->display_options['fields']['nid']['field'] = 'nid';
	$handler->display->display_options['fields']['nid']['label'] = '';
	$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
	/* Sort criterion: Content: Sticky */
	$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
	$handler->display->display_options['sorts']['sticky']['table'] = 'node';
	$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
	$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
	/* Sort criterion: Content: Post date */
	$handler->display->display_options['sorts']['created']['id'] = 'created';
	$handler->display->display_options['sorts']['created']['table'] = 'node';
	$handler->display->display_options['sorts']['created']['field'] = 'created';
	$handler->display->display_options['sorts']['created']['order'] = 'DESC';
	/* Contextual filter: Content: Has taxonomy term ID (with depth) */
	$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
	$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
	$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
	$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
	$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
	$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
	$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
	$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
	$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
	$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
	$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
	$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
	$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
	/* Contextual filter: Content: Has taxonomy term ID depth modifier */
	$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
	$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
	$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
	$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
	$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
	$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
	$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
	/* Filter criterion: Content: Published */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = '1';

	/* Display: Json */
	$handler = $view->new_display('page', 'Json', 'page');
	$handler->display->display_options['path'] = 'tags/id/%';

	/* Display: Feed */
	$handler = $view->new_display('feed', 'Feed', 'feed_1');
	$handler->display->display_options['pager']['type'] = 'some';
	$handler->display->display_options['style_plugin'] = 'rss';
	$handler->display->display_options['row_plugin'] = 'node_rss';
	$handler->display->display_options['row_options']['item_length'] = 'teaser';
	$handler->display->display_options['path'] = 'tags/id/%/feed';
	$translatables['taxonomy_term'] = array(
		t('Master'),
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
		t('All'),
		t('%1'),
		t('Json'),
		t('Feed'),
	);

	return $view;
}