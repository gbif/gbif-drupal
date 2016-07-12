<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\project\v1\Project__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\project\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Project__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "project:1.0",
 *   resource = "project",
 *   label = "Project",
 *   description = "Export project with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "project"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Project__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    return $public_fields;
  }

}
