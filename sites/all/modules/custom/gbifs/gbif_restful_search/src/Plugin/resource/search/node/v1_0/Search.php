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
  public function publicFields() {
    return array(
      'entity_id' => array(
        'property' => 'search_api_id',
        'process_callbacks' => array(
          'intVal',
        ),
      ),
      'version_id' => array(
        'property' => 'vid',
        'process_callbacks' => array(
          'intVal',
        ),
      ),
      'relevance' => array(
        'property' => 'search_api_relevance',
      ),
      'body' => array(
        'property' => 'body',
        'sub_property' => LANGUAGE_NONE . '::0::value',
      ),
      'title' => array(
        'property' => 'title',
      ),
      'type' => array(
        'property' => 'type',
      ),
      'promote' => array(
        'property' => 'promote',
      ),
      'sticky' => array(
        'property' => 'sticky',
      ),
      'language' => array(
        'property' => 'language',
      ),
      'status' => array(
        'property' => 'status',
      ),
    );
  }

}
