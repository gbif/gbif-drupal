<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\count\Count__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\count;

use Drupal\gbif_restful\Plugin\Resource\ResourceLookupBase;
use Drupal\restful\Plugin\resource\ResourceInterface;

/**
 * Class Count__1_0
 * @package Drupal\gbif_restful\Plugin\resource\count
 *
 * @Resource(
 *   name = "count:1.0",
 *   resource = "count",
 *   label = "Various counts",
 *   description = "Gets the count.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0,
 *   class = "Count__1_0",
 *   formatter = "single_json"
 * )
 */

class Count__1_0 extends ResourceLookupBase implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function dataProviderClassName() {
    return '\\Drupal\\gbif_restful\\Plugin\\resource\\DataProvider\\DataProviderCount';
  }

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {

    $public_fields['region'] = array(
      'property' => 'region'
    );

    $public_fields['literature'] = array(
      'property' => 'literature',
    );

    $public_fields['literatureAuthor'] = array(
      'property' => 'literatureAuthor'
    );

    $public_fields['literatureCountriesAuthorFrom'] = array(
      'property' => 'literatureCountriesAuthorFrom'
    );
    return $public_fields;
  }

}