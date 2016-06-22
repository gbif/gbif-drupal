<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\url_alias\URLAlias__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\url_alias;

use Drupal\restful\Plugin\resource\ResourceDbQuery;
use Drupal\restful\Plugin\resource\ResourceInterface;

/**
 * Class URLAlias__1_0
 * @package Drupal\gbif_restful\Plugin\resource\url_alias
 *
 * @Resource(
 *   name = "urlalias:1.0",
 *   resource = "urlalias",
 *   label = "URL Alias",
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
 *   class = "URLAlias__1_0"
 * )
 */

class URLAlias__1_0 extends ResourceDbQuery implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields['pid'] = array(
      'property' => 'pid'
    );

    $public_fields['source'] = array(
      'property' => 'source'
    );

    $public_fields['alias'] = array(
      'property' => 'alias'
    );

    $public_fields['language'] = array(
      'property' => 'language'
    );

    return $public_fields;
  }
}