<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\lookup\Lookup__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\lookup;

use Drupal\restful\Plugin\resource\ResourceDbQuery;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Http\Request as Request;
use Drupal\restful\Http\RequestInterface as RequestInterface;

/**
 * Class Lookup__1_0
 * @package Drupal\gbif_restful\Plugin\resource\lookup
 *
 * @Resource(
 *   name = "lookup:1.0",
 *   resource = "lookup",
 *   label = "URL Alias Lookup",
 *   description = "Gets the entity id from a URL alias.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "tableName": "redirect",
 *     "idColumn": "source",
 *     "primary": "rid",
 *     "idField": "rid",
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

    $public_fields['id'] = array(
      'property' => 'rid'
    );

    $public_fields['source'] = array(
      'property' => 'source'
    );

    $public_fields['redirect'] = array(
      'property' => 'redirect'
    );

    $public_fields['language'] = array(
      'property' => 'language'
    );

    return $public_fields;
  }
}