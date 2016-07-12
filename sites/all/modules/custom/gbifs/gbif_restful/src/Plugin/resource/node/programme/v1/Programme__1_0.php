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

    $public_fields['titleForDisplay'] = array(
      'property' => 'field_title_for_display',
    );

    $public_fields['subtitle'] = array(
      'property' => 'field_subtitle',
    );

    $public_fields['acronym'] = array(
      'property' => 'field_acronym',
    );

    // image field
    $public_fields['image'] = array(
      'property' => 'field_programme_ef_image',
    );

    // entity reference
    $public_fields['funder'] = array(
      'property' => 'field_co_funder',
    );

    // entity reference
    $public_fields['relatedNews'] = array(
      'property' => 'field_related_news',
    );

    // entity reference
    $public_fields['relatedEvents'] = array(
      'property' => 'field_related_events',
    );

    // link field
    $public_fields['relatedResources'] = array(
      'property' => 'field_related_resources',
    );

    $public_fields['file'] = array(
      'property' => 'gr_file',
    );

    $public_fields['featuredSearchTerms'] = array(
      'property' => 'field_featured_search_terms',
    );

    return $public_fields;
  }

}
