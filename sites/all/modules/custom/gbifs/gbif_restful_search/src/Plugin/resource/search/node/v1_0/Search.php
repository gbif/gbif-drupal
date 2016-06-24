<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\resource\search\node\v1_0\Search.
 */

namespace Drupal\gbif_restful_search\Plugin\resource\search\node\v1_0;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful_search_api\Plugin\Resource\ResourceSearchBase;

/**
 * Class Search
 * @package Drupal\gbif_restful_search\Plugin\resource\search\node\v1_0
 *
 * @Resource(
 *   name = "search:1.0",
 *   resource = "search",
 *   label = "Search",
 *   description = "Provides basic info doing Search API searches.",
 *   dataProvider = {
 *     "searchIndex": "node_index",
 *     "idField": "entity_id"
 *   },
 *   renderCache = {
 *     "render": FALSE,
 *   },
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   majorVersion = 1,
 *   minorVersion = 0,
 *   formatter = "json"
 * )
 */
class Search extends ResourceSearchBase implements ResourceInterface {

  /**
   * Overrides Resource::publicFields().
   */
  protected function publicFields() {

    $public_fields['entity_id'] = array(
      'property' => 'search_api_id',
      'process_callbacks' => array(
        'intVal',
      ),
    );

    $public_fields['version_id'] = array(
      'property' => 'vid',
      'process_callbacks' => array(
        'intVal',
      ),
    );

    $public_fields['relevance'] = array(
      'property' => 'search_api_relevance',
    );

    $public_fields['summary'] = array(
      'property' => 'body',
      'sub_property' => LANGUAGE_NONE . '::0::summary',
    );

    $public_fields['body'] = array(
      'property' => 'body',
      'sub_property' => LANGUAGE_NONE . '::0::value',
    );

    $public_fields['title'] = array(
      'property' => 'title',
    );

    $public_fields['type'] = array(
      'property' => 'type',
    );

    $public_fields['promote'] = array(
      'property' => 'promote',
    );

    $public_fields['sticky'] = array(
      'property' => 'sticky',
    );

    $public_fields['language'] = array(
      'property' => 'language',
    );

    $public_fields['status'] = array(
      'property' => 'status',
    );

    return $public_fields;
  }
  
}
