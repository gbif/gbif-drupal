<?php
/**
 * @file
 * gbif_restful_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gbif_restful_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_DAY';
  $strongarm->value = 'F j, Y';
  $export['date_format_search_api_facetapi_DAY'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_HOUR';
  $strongarm->value = 'H:__';
  $export['date_format_search_api_facetapi_HOUR'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_MINUTE';
  $strongarm->value = 'H:i';
  $export['date_format_search_api_facetapi_MINUTE'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_MONTH';
  $strongarm->value = 'F Y';
  $export['date_format_search_api_facetapi_MONTH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_SECOND';
  $strongarm->value = 'H:i:S';
  $export['date_format_search_api_facetapi_SECOND'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_YEAR';
  $strongarm->value = 'Y';
  $export['date_format_search_api_facetapi_YEAR'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@node_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restful_clear_on_cc_all';
  $strongarm->value = 0;
  $export['restful_clear_on_cc_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restful_fast_cache_clear';
  $strongarm->value = 1;
  $export['restful_fast_cache_clear'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restful_page_cache';
  $strongarm->value = 1;
  $export['restful_page_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restful_render_cache';
  $strongarm->value = 0;
  $export['restful_render_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'user' => 'user',
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'resource_index' => array(
      'search_api_views:resources_search:page' => 'search_api_views:resources_search:page',
    ),
    'node_index' => array(
      'SearchApiQuery' => 'SearchApiQuery',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '500';
  $export['search_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'node';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_1_used_tokens_list<search_api_index>';
  $strongarm->value = array();
  $export['token_insert_1_used_tokens_list<search_api_index>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_1_used_tokens_list<search_api_server>';
  $strongarm->value = array();
  $export['token_insert_1_used_tokens_list<search_api_server>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_1_used_tokens_search_api_index';
  $strongarm->value = array();
  $export['token_insert_1_used_tokens_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_1_used_tokens_search_api_server';
  $strongarm->value = array();
  $export['token_insert_1_used_tokens_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_2_used_tokens_list<search_api_index>';
  $strongarm->value = array();
  $export['token_insert_2_used_tokens_list<search_api_index>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_2_used_tokens_list<search_api_server>';
  $strongarm->value = array();
  $export['token_insert_2_used_tokens_list<search_api_server>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_2_used_tokens_search_api_index';
  $strongarm->value = array();
  $export['token_insert_2_used_tokens_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_2_used_tokens_search_api_server';
  $strongarm->value = array();
  $export['token_insert_2_used_tokens_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_3_used_tokens_list<search_api_index>';
  $strongarm->value = array();
  $export['token_insert_3_used_tokens_list<search_api_index>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_3_used_tokens_list<search_api_server>';
  $strongarm->value = array();
  $export['token_insert_3_used_tokens_list<search_api_server>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_3_used_tokens_search_api_index';
  $strongarm->value = array();
  $export['token_insert_3_used_tokens_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_3_used_tokens_search_api_server';
  $strongarm->value = array();
  $export['token_insert_3_used_tokens_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_4_used_tokens_list<search_api_index>';
  $strongarm->value = array();
  $export['token_insert_4_used_tokens_list<search_api_index>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_4_used_tokens_list<search_api_server>';
  $strongarm->value = array();
  $export['token_insert_4_used_tokens_list<search_api_server>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_4_used_tokens_search_api_index';
  $strongarm->value = array();
  $export['token_insert_4_used_tokens_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_4_used_tokens_search_api_server';
  $strongarm->value = array();
  $export['token_insert_4_used_tokens_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_5_used_tokens_list<search_api_index>';
  $strongarm->value = array();
  $export['token_insert_5_used_tokens_list<search_api_index>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_5_used_tokens_list<search_api_server>';
  $strongarm->value = array();
  $export['token_insert_5_used_tokens_list<search_api_server>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_5_used_tokens_search_api_index';
  $strongarm->value = array();
  $export['token_insert_5_used_tokens_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_5_used_tokens_search_api_server';
  $strongarm->value = array();
  $export['token_insert_5_used_tokens_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_6_used_tokens_list<search_api_index>';
  $strongarm->value = array();
  $export['token_insert_6_used_tokens_list<search_api_index>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_6_used_tokens_list<search_api_server>';
  $strongarm->value = array();
  $export['token_insert_6_used_tokens_list<search_api_server>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_6_used_tokens_search_api_index';
  $strongarm->value = array();
  $export['token_insert_6_used_tokens_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_6_used_tokens_search_api_server';
  $strongarm->value = array();
  $export['token_insert_6_used_tokens_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<search_api_index>';
  $strongarm->value = array();
  $export['token_insert_global_used_tokens_list<search_api_index>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_list<search_api_server>';
  $strongarm->value = array();
  $export['token_insert_global_used_tokens_list<search_api_server>'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_search_api_index';
  $strongarm->value = array();
  $export['token_insert_global_used_tokens_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_search_api_server';
  $strongarm->value = array();
  $export['token_insert_global_used_tokens_search_api_server'] = $strongarm;

  return $export;
}
