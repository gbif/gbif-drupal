<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\DataProvider\DataProviderUrlLookup.
 */

namespace Drupal\gbif_restful\Plugin\resource\DataProvider;

use Drupal\restful\Exception\BadRequestException;
use Drupal\restful\Exception\ForbiddenException;
use Drupal\restful\Exception\ServerConfigurationException;
use Drupal\restful\Exception\ServiceUnavailableException;
use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\ArrayWrapper;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterArray;
use Drupal\restful\Plugin\resource\DataProvider\DataProvider;
use Drupal\restful\Plugin\resource\DataProvider\DataProviderInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldCollectionInterface;

/**
 * Class DataProviderUrlLookup.
 *
 * @package Drupal\restful_search_api\Plugin\resource\DataProvider
 */
class DataProviderUrlLookup extends DataProvider implements DataProviderInterface {

  /**
   * {@inheritdoc}
   */
  public function __construct(RequestInterface $request, ResourceFieldCollectionInterface $field_definitions, $account, $plugin_id, $resource_path = NULL, array $options = array(), $langcode = NULL) {
    parent::__construct($request, $field_definitions, $account, $plugin_id, $resource_path, $options, $langcode);
  }

  /**
   * {@inheritdoc}
   */
  public function count() {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  public function create($object) {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }


  /**
   * {@inheritdoc}
   */
  public function update($identifier, $object, $replace = FALSE) {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  public function remove($identifier) {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  public function getIndexIds() {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  protected function initDataInterpreter($identifier) {
    return new DataInterpreterArray($this->getAccount(), new ArrayWrapper((array) $identifier));
  }

  /**
   * {@inheritdoc}
   *
   * @param mixed $identifier
   *   The search query.
   *
   * @return array
   *   If the provided search index does not exist.
   *
   * @throws \Drupal\restful\Exception\ServerConfigurationException If the provided search index does not exist.
   */
  public function view($identifier) {
    $output = array();
    $redirect_results = db_select('redirect', 'r')
      ->fields('r')
      ->condition('source', $identifier, '=')
      ->execute()
      ->fetchAll();

    $alias_results = db_select('url_alias', 'u')
      ->fields('u')
      ->condition('alias', $identifier, '=')
      ->execute()
      ->fetchAll();

    $nid = '';
    $type = '';
    $target_url = '';
    if (count($redirect_results) > 0) {
      $source = $redirect_results[0]->redirect;
      if (url_is_external($source) == FALSE) {
        $source_exploded = explode('/', $source);
        $nid = $source_exploded[1];
        if (is_numeric($nid)) {
          $node = node_load($nid);
          $type = $node->type;
          $target_url = drupal_get_path_alias($source);
        }
      }
    }
    else if (count($alias_results) > 0) {
      $source = explode('/', $alias_results[0]->source);
      $nid = $source[1];
      $node = node_load($nid);
      $type = $node->type;
      $target_url = $alias_results[0]->alias;
    }
    $output['nid'] = $nid;
    $output['type'] = $type;
    $output['targetUrl'] = $target_url;

    return $output;
  }

  public function isUrlAlias($identifier) {
    $alias_results = db_select('url_alias', 'u')
      ->fields('u')
      ->condition('alias', $identifier, '=')
      ->execute()
      ->fetchAll();

    return (count($alias_results) > 0) ? $alias_results : FALSE;
  }

  public function isRedirect($identifier) {
    $redirect_results = db_select('redirect', 'r')
      ->fields('r')
      ->condition('source', $identifier, '=')
      ->execute()
      ->fetchAll();

    return (count($redirect_results) > 0) ? $redirect_results : FALSE;
  }

  /**
   * {@inheritdoc}
   */
  public function viewMultiple(array $identifiers) {
    $return = array();
    foreach ($identifiers as $identifier) {
      try {
        $row = $this->view($identifier);
      }
      catch (ForbiddenException $e) {
        $row = NULL;
      }
      $return[] = $row;
    }

    return array_filter($return);
  }

  /**
   * Return the default sort.
   *
   * @return array
   *   A default sort array.
   */
  public function defaultSortInfo() {
    return array();
  }

}
