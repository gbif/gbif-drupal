<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\redirect
 */

namespace Drupal\gbif_restful\Plugin\resource\redirect;

use Drupal\restful\Plugin\resource\ResourceDbQuery;
use Drupal\restful\Plugin\resource\ResourceInterface;

/**
 * Class Redirect__1_0
 * @package Drupal\gbif_restful\Plugin\resource\redirect
 *
 * @Resource(
 *   name = "redirect:1.0",
 *   resource = "redirect",
 *   label = "URL Redirect",
 *   description = "Lookup redirect table.",
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
 *   class = "Redirect__1_0"
 * )
 */

class Redirect__1_0 extends ResourceDbQuery implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields['rid'] = array(
      'property' => 'rid'
    );

    $public_fields['source'] = array(
      'property' => 'source'
    );

    $public_fields['redirect'] = array(
      'property' => 'redirect'
    );

    return $public_fields;
  }
}