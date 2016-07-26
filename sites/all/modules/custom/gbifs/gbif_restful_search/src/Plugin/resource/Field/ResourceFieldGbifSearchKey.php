<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\resource\Field\ResourceFieldGbifSearchKey.
 */

namespace Drupal\gbif_restful_search\Plugin\resource\Field;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldKeyValue;

class ResourceFieldGbifSearchKey extends ResourceFieldKeyValue implements ResourceFieldGbifSearchKeyInterface {

  /**
   * Separator to drill down on nested result objects for 'property'.
   */
  const NESTING_SEPARATOR = '::';

  /**
   * Overrides ResourceField::value().
   */
  public function value(DataInterpreterInterface $interpreter) {
    $value = parent::value($interpreter);
    $definition = $this->getDefinition();
    if (!empty($definition['sub_property'])) {
      $parts = explode(static::NESTING_SEPARATOR, $definition['sub_property']);
      foreach ($parts as $part) {
        $value = $value[$part];
      }
    }
    return $value;
  }

  /**
   * {@inheritdoc}
   */
  public static function create(array $field, RequestInterface $request = NULL) {
    $resource_field = new static($field, $request ?: restful()->getRequest());
    $resource_field->addDefaults();
    return $resource_field;
  }

}
