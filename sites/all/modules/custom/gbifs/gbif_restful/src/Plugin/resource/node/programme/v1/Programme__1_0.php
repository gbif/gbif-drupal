<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\programme\v1\Programme__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\programme\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Programme__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "programme:1.0",
 *   resource = "programme",
 *   label = "Programme",
 *   description = "Export programmes with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "programme"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Programme__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    return $public_fields;
  }

}
