<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\DataProvider\DataProviderLookupInterface.
 */

namespace Drupal\gbif_restful\Plugin\resource\DataProvider;

use Drupal\restful\Plugin\resource\DataProvider\DataProviderInterface;

interface DataProviderCountInterface extends DataProviderInterface {

  /**
   * Return literature count.
   *
   * @param $region
   */
  public function countLiterature($region);

  /**
   * Return literature count by year
   *
   * @param $region
   */
   public function countLiteratureYearly($region);

}
