<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\news\v1\News__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\news\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifScaledContents;

/**
 * Class News__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "news:1.0",
 *   resource = "news",
 *   label = "News",
 *   description = "Export the news with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "news"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class News__1_0 extends ResourceNodeGbifScaledContents {

}
