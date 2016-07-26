<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\Resource\GbifResourceSearchBase.
 */

namespace Drupal\gbif_restful_search\Plugin\Resource;

use Drupal\restful\Http\HttpHeader;
use Drupal\restful\Plugin\resource\Resource;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Exception\ServerConfigurationException;


abstract class GbifResourceSearchBase extends Resource implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  public function additionalHateoas() {
    /* @var \Drupal\restful_search_api\Plugin\resource\DataProvider\SearchApiInterface $provider */
    $provider = $this->getDataProvider();
    return $provider->additionalHateoas();
  }

  /**
   * {@inheritdoc}
   */
  protected function dataProviderClassName() {
    return '\\Drupal\\gbif_restful_search\\Plugin\\resource\\DataProvider\\GbifSearchApi';
  }

  /**
   * {@inheritdoc}
   *
   * Make sure all fields are ResourceFieldSearchKey by default.
   */
  protected function processPublicFields(array $field_definitions) {
    foreach ($field_definitions as &$field_definition) {
      if (empty($field_definition['class'])) {
        $field_definition['class'] = '\\Drupal\\gbif_restful_search\\Plugin\\resource\\Field\\ResourceFieldGbifSearchKey';
      }
    }
    $field_definitions = parent::processPublicFields($field_definitions);
    return $field_definitions;
  }

  /**
   * Override Resource::view().
   * {@inheritdoc}
   */
  public function view($path) {
    // TODO: Compare this with 1.x logic.
    $ids = explode(static::IDS_SEPARATOR, $path);

    // REST requires a canonical URL for every resource.
    $canonical_path = $this->getDataProvider()->canonicalPath($path);
    restful()
      ->getResponse()
      ->getHeaders()
      ->add(HttpHeader::create('Link', $this->versionedUrl($canonical_path, array(), FALSE) . '; rel="canonical"'));

    try {
      // Query GbifSearchAPI for the results.
      $search_results = $this->getDataProvider()->query($path);
    }
    catch (\SearchApiException $e) {
      // Relay the exception with one of RESTful's types.
      throw new ServerConfigurationException(format_string('Search API Exception: @message', array(
        '@message' => $e->getMessage(),
      )));
    }

    // If there is only one result then use 'view'. Else, use 'viewMultiple'. The
    // difference between the two is that 'view' allows access denied
    // exceptions.
    if (count($search_results) == 1) {
      return array($this->getDataProvider()->view($search_results[0]));
    }
    else {
      return $this->getDataProvider()->viewMultiple($search_results);
    }
  }

}
