<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\resource\v1\Resource__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\resource\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Resource__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "resource:1.0",
 *   resource = "resource",
 *   label = "Resource",
 *   description = "Export resources with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "resource"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Resource__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    return $public_fields;
  }

}
