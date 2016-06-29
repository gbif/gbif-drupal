<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\lookup\Lookup__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\lookup;

use Drupal\restful\Plugin\resource\ResourceDbQuery;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Http\Request as Request;
use Drupal\restful\Http\RequestInterface;

/**
 * Class Lookup__1_0
 * @package Drupal\gbif_restful\Plugin\resource\lookup
 *
 * @Resource(
 *   name = "lookup:1.0",
 *   resource = "lookup",
 *   label = "URL redirection Lookup",
 *   description = "Gets the entity id from a URL alias.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "tableName": "url_alias",
 *     "idColumn": "alias",
 *     "primary": "pid",
 *     "idField": "pid",
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0,
 *   class = "Lookup__1_0"
 * )
 */

class Lookup__1_0 extends ResourceDbQuery implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {

    $public_fields['pid'] = array(
      'property' => 'pid'
    );

    $public_fields['alias'] = array(
      'property' => 'alias',
    );

    $public_fields['source'] = array(
      'property' => 'source'
    );

    return $public_fields;
  }

  /*
  public function view($path) {
    $array = array();

    $redirect_results = db_select('redirect', 'r')
      ->fields('r')
      ->condition('source', $path, '=')
      ->execute()
      ->fetchAll();

    $alias_results = db_select('url_alias', 'u')
      ->fields('u')
      ->condition('alias', $path, '=')
      ->execute()
      ->fetchAll();


    return $array;

  }
  */

  public function getTargetUrl(RequestInterface $request) {
    $text = '';
    return $text;
  }

  public function getNid(RequestInterface $request) {
    $text = '';
    return $text;
  }

  public function getType(RequestInterface $request) {
    $text = '';
    return $text;
  }

}