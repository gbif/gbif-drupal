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
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
      ),
      'image_styles' => array(
        'focal_point_for_news',
        'square_thumbnail',
        'masthead__mobile',
        'masthead__tablet',
        'masthead__laptop',
        'masthead__desktop',
      ),
    );

    // entity reference
    $public_fields['funders'] = array(
      'property' => 'field_co_funder',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    // entity reference
    $public_fields['relatedNews'] = array(
      'property' => 'field_related_news',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    // entity reference
    $public_fields['relatedEvents'] = array(
      'property' => 'field_related_events',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    // link field
    $public_fields['relatedResources'] = array(
      'property' => 'field_related_resources',
    );

    $public_fields['file'] = array(
      'property' => 'gr_file',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::fileProcess'),
      ),
    );

    return $public_fields;
  }

}
