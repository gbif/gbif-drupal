<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\gbif_participant\v1\GbifParticipant__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\gbif_participant\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class GbifParticipant__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "gbif_participant:1.0",
 *   resource = "gbif_participant",
 *   label = "GBIF Participant",
 *   description = "Export participant information with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "gbif_participant"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class GbifParticipant__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    unset($public_fields['summary'], $public_fields['body']);

    return $public_fields;
  }

}
