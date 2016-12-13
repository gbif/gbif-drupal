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
        if (isset($value[$part])) $value = $value[$part];
      }
    }

    // Add term name if it's included to extract the term name.
    if (isset($value) && is_array($value)) {
      $termRefFields = [
        'field_featured_search_terms',
        'tx_informatics',
        'tx_data_use',
        'tx_capacity_enhancement',
        'tx_about_gbif',
        'tx_audience',
        'field_tx_purpose',
        'field_tx_data_type',
        'gr_resource_type',
        'field_country',
        'tx_tags',
        'tx_topic',
        'field_mdl_keywords',
        'field_literature_type',
        'field_mdl_author_from_country',
        'field_mdl_bio_country',
      ];
      foreach ($value as &$v) {
        if (isset($v['tid']) && in_array($definition['property'], $termRefFields)) {
          $term = taxonomy_term_load(intval($v['tid']));
          $v['id'] = $term->tid;
          $v['name'] = $term->name;
          $v['enum'] = str_replace(' ', '_', strtolower($term->name));
          unset($v['tid']);
        }
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

  /**
   * {@inheritdoc}
   */
  public function render(DataInterpreterInterface $interpreter) {
    return $this->executeProcessCallbacks($this->value($interpreter));
  }

}
