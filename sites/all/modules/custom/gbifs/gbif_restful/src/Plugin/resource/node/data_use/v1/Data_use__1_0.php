<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\data_use\v1\Data_use__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\data_use\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifScaledContents;

/**
 * Class Data_use__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "data-use:1.0",
 *   resource = "data-use",
 *   label = "Data use",
 *   description = "Export the data use articles with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "data_use"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Data_use__1_0 extends ResourceNodeGbifScaledContents {

}
