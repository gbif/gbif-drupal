<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\DataProvider\DataProviderUrlLookup.
 *
 * @todo To complete with the exception handling. 1) Internal non-node path; 2) Non-existing path.
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
use Drupal\restful\Plugin\resource\Field\ResourceFieldCollectionInterface;

/**
 * Class DataProviderUrlLookup.
 *
 * @package Drupal\restful_search_api\Plugin\resource\DataProvider
 */
class DataProviderUrlLookup extends DataProvider implements DataProviderLookupInterface {

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

  protected $output = array();

  /**
   * {@inheritdoc}
   *
   * @param mixed $identifier
   * @return array
   */
  public function view($identifier) {
    $this->resolveUrl($identifier);
    return $this->output;
  }

  /**
   * {@inheritdoc}
   *
   * 1) Check if the URL is an old URL therefore has a redirection.
   * 2) Resolve to the internal node/[id], taxonomy/term/[id], or external http: site.
   * 3) Offer the current URL alias as targetUrl, which is specified by editors.
   *
   */
  public function resolveUrl($identifier) {
    $redirect_results = db_select('redirect', 'r')
      ->fields('r')
      ->condition('source', $identifier, '=')
      ->execute()
      ->fetchAll();

    if (count($redirect_results) == 1) {
      $redirect = $redirect_results[0]->redirect;
      $redirect_slices = explode('/', $redirect);

      if ($redirect_slices[0] == 'node') {
        $id = $redirect_slices[1];
        $node = node_load($id);
        $this->output = array(
          'id' => $id,
          'type' => $node->type,
          'targetUrl' => drupal_get_path_alias($redirect),
        );
      }
      elseif ($redirect_slices[0] == 'taxonomy') {
        $this->output = array(
          'id' => $redirect_slices[2],
          'type' => 'term',
          'targetUrl' => drupal_get_path_alias($redirect),
        );
      }
      elseif ($redirect_slices[0] == 'http:') {
        $this->output = array(
          'type' => 'external',
          'targetUrl' => $redirect,
        );
      }
      // if non of the case above, it's a redirect to another redirect.
      else {
        $this->resolveUrl($redirect);
      }
    }
    elseif (count($redirect_results) > 1) {
      // find out which one resolves to node.
      $found = FALSE;
      foreach ($redirect_results as $result) {
        $redirect = explode('/', $result->redirect);
        if ($redirect[0] == 'node' && is_numeric($redirect[1])) {
          $found = TRUE;
          $node = node_load($redirect[1]);
          $this->output = array(
            'id' => $node->nid,
            'type' => $node->type,
            'targetUrl' => drupal_get_path_alias($redirect[0] . '/' . $redirect[1]),
          );
        }
      }
      if ($found == FALSE) {
        $this->output = array(
          'message' => 'Error to be handled by exception handler.'
        );
      }
    }
    elseif (count($redirect_results) == 0) {
      $alias_results = db_select('url_alias', 'u')
        ->fields('u')
        ->condition('alias', $identifier, '=')
        ->execute()
        ->fetchAll();

      if (count($alias_results) > 0) {
        $source = explode('/', $alias_results[0]->source);
        $id = $source[1];
        $node = node_load($id);
        $this->output = array(
          'id' => $id,
          'type' => $node->type,
          'targetUrl' => $alias_results[0]->alias,
        );
      }
    }
    else {
      $this->output = array(
        'message' => 'Failed to resolve the URL.'
      );
    }
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
