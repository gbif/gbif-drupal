<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\resource\DataProvider\GbifSearchApiInterface.
 */

namespace Drupal\gbif_restful_search\Plugin\resource\DataProvider;

use Drupal\restful\Plugin\resource\DataProvider\DataProviderInterface;

interface GbifSearchApiInterface extends DataProviderInterface {

  /**
   * Pass additional HATEOAS to the formatter.
   */
  public function additionalHateoas();

}
