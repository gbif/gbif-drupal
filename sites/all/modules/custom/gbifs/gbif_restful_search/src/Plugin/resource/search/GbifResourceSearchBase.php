<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\Resource\search\GbifResourceSearchBase.
 */

namespace Drupal\gbif_restful_search\Plugin\Resource\search;

use Drupal\restful\Http\HttpHeader;
use Drupal\restful\Plugin\resource\Resource;
use Drupal\restful\Exception\ServerConfigurationException;
use Drupal\gbif_restful_search\Plugin\resource\Field\ResourceFieldGbifCollection;
use Drupal\gbif_restful_search\Http\GbifRequest;
use Drupal\gbif_restful_search\Http\GbifRequestInterface;

abstract class GbifResourceSearchBase extends Resource implements GbifResourceSearchBaseInterface {

  /**
   * Constructs a Drupal\Component\Plugin\PluginBase object.
   *
   * @param array $configuration
   *   A configuration array containing information about the plugin instance.
   * @param string $plugin_id
   *   The plugin_id for the plugin instance.
   * @param mixed $plugin_definition
   *   The plugin implementation definition.
   */
  public function __construct(array $configuration, $plugin_id, $plugin_definition) {
    parent::__construct($configuration, $plugin_id, $plugin_definition);
    $this->fieldDefinitions = ResourceFieldGbifCollection::factory($this->processPublicFields($this->publicFields()), $this->getRequest());
    $this->initAuthenticationManager();
  }

  /**
   * {@inheritdoc}
   */
  public function getRequest() {
    if (isset($this->request)) {
      return $this->request;
    }
    $instance_configuration = $this->getConfiguration();
    if (!$this->request = $instance_configuration['request']) {
      throw new ServerConfigurationException('Request object is not available for the Resource plugin.');
    }
    return $this->request;
  }

  /**
   * {@inheritdoc}
   */
  public function setRequest(GbifRequestInterface $request) {
    $this->request = $request;
    // Make sure that the request is updated in the data provider.
    $this->getDataProvider()->setRequest($request);
    foreach ($this->fieldDefinitions as $resource_field) {
      /* @var \Drupal\restful\Plugin\resource\Field\ResourceFieldInterface $resource_field */
      $resource_field->setRequest($request);
    }
  }

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
   */
  public function doGet($path = '', array $query = array()) {
    $this->setPath($path);
    $this->setRequest(GbifRequest::create($this->versionedUrl($path, array('absolute' => FALSE)), $query, GbifRequestInterface::METHOD_GET));
    return $this->process();
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

  /**
   * {@inheritdoc}
   */
  public function controllersInfo() {
    return array(
      '' => array(
        // GET returns a list of entities.
        GbifRequestInterface::METHOD_GET => 'index',
        GbifRequestInterface::METHOD_HEAD => 'index',
        // POST.
        GbifRequestInterface::METHOD_POST => 'create',
        GbifRequestInterface::METHOD_OPTIONS => 'discover',
      ),
      // We don't know what the ID looks like, assume that everything is the ID.
      '^.*$' => array(
        GbifRequestInterface::METHOD_GET => 'view',
        GbifRequestInterface::METHOD_HEAD => 'view',
        GbifRequestInterface::METHOD_PUT => 'replace',
        GbifRequestInterface::METHOD_PATCH => 'update',
        GbifRequestInterface::METHOD_DELETE => 'remove',
        GbifRequestInterface::METHOD_OPTIONS => 'discover',
      ),
    );
  }

}
