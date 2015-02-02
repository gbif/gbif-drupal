<?php
/**
 * @file
 * gbif_resource.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gbif_resource_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources';
  $view->description = 'Normal content view for resources.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
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
    'resource' => 'resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources/view';

  /* Display: Featured resources */
  $handler = $view->new_display('block', 'Featured resources', 'featured_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['gr_image']['id'] = 'gr_image';
  $handler->display->display_options['fields']['gr_image']['table'] = 'field_data_gr_image';
  $handler->display->display_options['fields']['gr_image']['field'] = 'gr_image';
  $handler->display->display_options['fields']['gr_image']['label'] = '';
  $handler->display->display_options['fields']['gr_image']['element_type'] = '0';
  $handler->display->display_options['fields']['gr_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gr_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['gr_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '15',
    'trim_type' => 'words',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date of publication (gr_date_of_publication) */
  $handler->display->display_options['sorts']['gr_date_of_publication_value']['id'] = 'gr_date_of_publication_value';
  $handler->display->display_options['sorts']['gr_date_of_publication_value']['table'] = 'field_data_gr_date_of_publication';
  $handler->display->display_options['sorts']['gr_date_of_publication_value']['field'] = 'gr_date_of_publication_value';
  $handler->display->display_options['sorts']['gr_date_of_publication_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'View: Resources - featured resources';
  $translatables['resources'] = array(
    t('Master'),
    t('Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Featured resources'),
    t('View: Resources - featured resources'),
  );
  $export['resources'] = $view;

  $view = new view();
  $view->name = 'resources_search';
  $view->description = 'Search enabled resource view.';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_resource_index';
  $view->human_name = 'Resources search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['gr_image']['id'] = 'gr_image';
  $handler->display->display_options['fields']['gr_image']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['gr_image']['field'] = 'gr_image';
  $handler->display->display_options['fields']['gr_image']['label'] = '';
  $handler->display->display_options['fields']['gr_image']['element_type'] = '0';
  $handler->display->display_options['fields']['gr_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gr_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['gr_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['gr_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['gr_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['body_value']['element_type'] = '0';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Author(s) */
  $handler->display->display_options['fields']['gr_author']['id'] = 'gr_author';
  $handler->display->display_options['fields']['gr_author']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['gr_author']['field'] = 'gr_author';
  $handler->display->display_options['fields']['gr_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['gr_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['gr_author']['element_type'] = '0';
  $handler->display->display_options['fields']['gr_author']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['gr_author']['element_label_class'] = 'label-gr-author';
  $handler->display->display_options['fields']['gr_author']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['gr_author']['element_default_classes'] = FALSE;
  /* Field: Indexed Node: Resource type */
  $handler->display->display_options['fields']['gr_resource_type']['id'] = 'gr_resource_type';
  $handler->display->display_options['fields']['gr_resource_type']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['gr_resource_type']['field'] = 'gr_resource_type';
  $handler->display->display_options['fields']['gr_resource_type']['label'] = '';
  $handler->display->display_options['fields']['gr_resource_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['gr_resource_type']['element_class'] = 'node-view-gr-resource-type';
  $handler->display->display_options['fields']['gr_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gr_resource_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['gr_resource_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['gr_resource_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['gr_resource_type']['bypass_access'] = 0;
  /* Field: Indexed Node: File */
  $handler->display->display_options['fields']['gr_file']['id'] = 'gr_file';
  $handler->display->display_options['fields']['gr_file']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['gr_file']['field'] = 'gr_file';
  $handler->display->display_options['fields']['gr_file']['label'] = '';
  $handler->display->display_options['fields']['gr_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gr_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['gr_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['gr_file']['type'] = 'file_force_file_default';
  $handler->display->display_options['fields']['gr_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['gr_file']['delta_offset'] = '0';
  /* Field: Indexed Node: Date of publication */
  $handler->display->display_options['fields']['gr_date_of_publication']['id'] = 'gr_date_of_publication';
  $handler->display->display_options['fields']['gr_date_of_publication']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['gr_date_of_publication']['field'] = 'gr_date_of_publication';
  $handler->display->display_options['fields']['gr_date_of_publication']['label'] = '';
  $handler->display->display_options['fields']['gr_date_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gr_date_of_publication']['settings'] = array(
    'format_type' => 'mmm_dd',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = '';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Sticky in lists */
  $handler->display->display_options['sorts']['sticky_1']['id'] = 'sticky_1';
  $handler->display->display_options['sorts']['sticky_1']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['sorts']['sticky_1']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky_1']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Date of publication */
  $handler->display->display_options['sorts']['gr_date_of_publication']['id'] = 'gr_date_of_publication';
  $handler->display->display_options['sorts']['gr_date_of_publication']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['sorts']['gr_date_of_publication']['field'] = 'gr_date_of_publication';
  $handler->display->display_options['sorts']['gr_date_of_publication']['order'] = 'DESC';
  $handler->display->display_options['sorts']['gr_date_of_publication']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['gr_date_of_publication']['expose']['label'] = 'Date of publication';
  /* Sort criterion: Indexed Node: Number of downloads */
  $handler->display->display_options['sorts']['gr_number_of_downloads']['id'] = 'gr_number_of_downloads';
  $handler->display->display_options['sorts']['gr_number_of_downloads']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['sorts']['gr_number_of_downloads']['field'] = 'gr_number_of_downloads';
  $handler->display->display_options['sorts']['gr_number_of_downloads']['order'] = 'DESC';
  $handler->display->display_options['sorts']['gr_number_of_downloads']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['gr_number_of_downloads']['expose']['label'] = 'Number of downloads';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_resource_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'AND',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'AND',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'AND',
      'value' => '',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'resources';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'filtered_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'GBIF latest filtered resources';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'body_value';
  $handler->display->display_options['row_options']['creator_field'] = 'gr_author';
  $handler->display->display_options['row_options']['date_field'] = 'gr_date_of_publication';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'uuid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['path'] = 'resources/feed/filtered';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['resources_search'] = array(
    t('Master'),
    t('Resources search'),
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
    t('Author(s)'),
    t('Date of publication'),
    t('Number of downloads'),
    t('Relevance'),
    t('Fulltext search'),
    t('Page'),
    t('Feed'),
    t('GBIF latest filtered resources'),
  );
  $export['resources_search'] = $view;

  return $export;
}
