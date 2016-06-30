<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\Resource\ResourceLookupBase.
 */

namespace Drupal\gbif_restful\Plugin\Resource;

use Drupal\restful\Plugin\resource\Resource;
use Drupal\restful\Plugin\resource\ResourceInterface;

abstract class ResourceLookupBase extends Resource implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function dataProviderClassName() {
    return '\\Drupal\\gbif_restful\\Plugin\\resource\\DataProvider\\DataProviderUrlLookup';
  }


}
