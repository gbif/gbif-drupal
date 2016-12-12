<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\resource\search\GbifResourceSearchBaseInterface.
 */

namespace Drupal\gbif_restful_search\Plugin\resource\search;

use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\gbif_restful_search\Plugin\resource\Field\ResourceFieldGbifCollectionInterface;
use Drupal\gbif_restful_search\Plugin\resource\Field\ResourceFieldGbifCollection;

/**
 * Interface GbifResourceSearchBaseInterface.
 *
 * @package Drupal\gbif_restful_search\Plugin\resource\search
 */
interface GbifResourceSearchBaseInterface extends ResourceInterface {

  /**
   * Sets the field definitions.
   *
   * @param ResourceFieldGbifCollection $field_definitions
   *   The field definitions to set.
   */
  public function setFieldGbifDefinitions(ResourceFieldGbifCollectionInterface $field_definitions);

}
