<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\lookup\UrlLookup__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\lookup;

use Drupal\gbif_restful\Plugin\Resource\ResourceLookupBase;
use Drupal\restful\Plugin\resource\ResourceInterface;

/**
 * Class UrlLookup__1_0
 * @package Drupal\gbif_restful\Plugin\resource\lookup
 *
 * @Resource(
 *   name = "urllookup:1.0",
 *   resource = "urllookup",
 *   label = "URL redirection Lookup",
 *   description = "Gets the entity id from a URL alias.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0,
 *   class = "UrlLookup__1_0"
 * )
 */

class UrlLookup__1_0 extends ResourceLookupBase implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {

    $public_fields['nid'] = array(
      'property' => 'nid'
    );

    $public_fields['type'] = array(
      'property' => 'type',
    );

    $public_fields['targetUrl'] = array(
      'property' => 'targetUrl'
    );

    return $public_fields;
  }

}