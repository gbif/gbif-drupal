<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\lookup\Lookup__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\lookup;

use Drupal\restful\Plugin\resource\ResourceDbQuery;
use Drupal\restful\Plugin\resource\ResourceInterface;
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

    $public_fields['nid'] = array(
      'property' => 'pid'
    );

    $public_fields['type'] = array(
      'property' => 'alias',
    );

    $public_fields['targetUrl'] = array(
      'property' => 'source'
    );

    return $public_fields;
  }

  /**
   * {@inheritdoc}
   */
  protected function dataProviderClassName() {
    return '\Drupal\gbif_restful\Plugin\resource\DataProvider\DataProviderUrlLookup';
  }
}