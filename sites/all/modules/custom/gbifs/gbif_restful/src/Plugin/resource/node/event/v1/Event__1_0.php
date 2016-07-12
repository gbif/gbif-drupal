<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\event\v1\Event__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\event\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Event__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "event:1.0",
 *   resource = "event",
 *   label = "Event",
 *   description = "Export events with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "event"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Event__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    return $public_fields;
  }

}
