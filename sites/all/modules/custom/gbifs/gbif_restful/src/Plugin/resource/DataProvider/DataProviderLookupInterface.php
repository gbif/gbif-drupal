<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\DataProvider\DataProviderLookupInterface.
 */

namespace Drupal\gbif_restful\Plugin\resource\DataProvider;

use Drupal\restful\Plugin\resource\DataProvider\DataProviderInterface;

interface DataProviderLookupInterface extends DataProviderInterface {

  /**
   * Resolve an given URL.
   *
   * @param $identifier
   */
  public function resolveUrl($identifier);

}
