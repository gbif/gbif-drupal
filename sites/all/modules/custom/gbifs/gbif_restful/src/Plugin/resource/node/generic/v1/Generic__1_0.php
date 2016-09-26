<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\generic\v1\Generic__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\generic\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Generic__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "generic:1.0",
 *   resource = "generic",
 *   label = "Generic",
 *   description = "Export the news with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "generic"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Generic__1_0 extends ResourceNodeGbif {

  /**
   * Overrides ResourceNode::publicFields().
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['translationSource'] = array(
      'property' => 'field_translation_source',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    return $public_fields;
  }
}
