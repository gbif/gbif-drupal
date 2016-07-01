<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\dataset\v1\Dataset__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\dataset\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifScaledContents;

/**
 * Class Dataset__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "dataset:1.0",
 *   resource = "dataset",
 *   label = "Dataset",
 *   description = "Export the dataset article with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "dataset"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Dataset__1_0 extends ResourceNodeGbifScaledContents {

}
