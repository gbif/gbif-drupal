<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\resource\search\node\v1_0\Search.
 */

namespace Drupal\gbif_restful_search\Plugin\resource\search\node\v1_0;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful_search_api\Plugin\Resource\ResourceSearchBase;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

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
   * Overrides Resource::versionedUrl().
   * {@inheritdoc}
   */
  public function versionedUrl($path = '', $options = array(), $version_string = TRUE) {
    // lookup URL Alias
    if (is_numeric($path)) {
      $path = drupal_get_path_alias('node/' . $path);
    }

    // Make the URL absolute by default.
    $options += array('absolute' => TRUE);
    $plugin_definition = $this->getPluginDefinition();
    if (!empty($plugin_definition['menuItem'])) {
      $url = variable_get('restful_hook_menu_base_path', 'api') . '/';
      $url .= $plugin_definition['menuItem'] . '/' . $path;
      return url(rtrim($url, '/'), $options);
    }

    $base_path = variable_get('restful_hook_menu_base_path', 'api');
    $url = $base_path;
    if ($version_string) {
      $url .= '/v' . $plugin_definition['majorVersion'] . '.' . $plugin_definition['minorVersion'];
    }
    $url .= '/' . $plugin_definition['resource'] . '/' . $path;
    return url(rtrim($url, '/'), $options);
  }

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

    $public_fields['targetUrl'] = array(
      'callback' => 'Drupal\gbif_restful_search\Plugin\resource\search\node\v1_0\Search::getUrlAlias'
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

  //@todo Consider redirection in this field
  public function getUrlAlias(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->get('nid');
    $node = node_load($nid);
    return $node->path['alias'];
  }

}