<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\DataProvider\DataProviderUrlLookup.
 */

namespace Drupal\gbif_restful\Plugin\resource\DataProvider;

use Drupal\restful\Exception\ServiceUnavailableException;
use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\DataProvider\DataProviderDbQuery;
use Drupal\restful\Plugin\resource\DataProvider\DataProviderDbQueryInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldCollectionInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldDbColumnInterface;

class DataProviderUrlLookup extends DataProviderDbQuery implements DataProviderDbQueryInterface {

  /**
   * Modified output to include matches from redirection.
   * The redirection only covers cases that point to internal nodes.
   */
  public function view($identifier) {
    $query = $this->getQuery();
    foreach ($this->getIdColumn() as $index => $column) {
      $identifier = is_array($identifier) ? $identifier : array($identifier);
      $query->condition($this->getTableName() . '.' . $column, current($this->getColumnFromIds($identifier, $index)));
    }
    $this->addExtraInfoToQuery($query);
    $result = $query
      ->range(0, 1)
      ->execute()
      ->fetch(\PDO::FETCH_OBJ);

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
    $result->pid = $nid;
    $result->alias = $type;
    $result->source = $target_url;

    return $this->mapDbRowToPublicFields($result);
  }

}
