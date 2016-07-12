<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\page\v1\Page__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\page\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Page__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "page:1.0",
 *   resource = "page",
 *   label = "Page",
 *   description = "Export pages with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "page"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Page__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['featuredSearchTerms'] = array(
      'property' => 'field_featured_search_terms',
    );

    return $public_fields;
  }

}
