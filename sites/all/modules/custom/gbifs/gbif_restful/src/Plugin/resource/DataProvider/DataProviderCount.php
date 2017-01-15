<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\DataProvider\DataProviderCount.
 *
 * @todo To complete with the exception handling. 1) Internal non-node path; 2) Non-existing path.
 */

namespace Drupal\gbif_restful\Plugin\resource\DataProvider;

use Drupal\restful\Exception\BadRequestException;
use Drupal\restful\Exception\ForbiddenException;
use Drupal\restful\Exception\ServerConfigurationException;
use Drupal\restful\Exception\ServiceUnavailableException;
use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\ArrayWrapper;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterArray;
use Drupal\restful\Plugin\resource\DataProvider\DataProvider;
use Drupal\restful\Plugin\resource\Field\ResourceFieldCollectionInterface;
use Drupal\restful\Util\EntityFieldQuery;

/**
 * Class DataProviderCount.
 *
 * @package Drupal\restful_search_api\Plugin\resource\DataProvider
 */
class DataProviderCount extends DataProvider implements DataProviderCountInterface {

  /**
   * {@inheritdoc}
   */
  public function __construct(RequestInterface $request, ResourceFieldCollectionInterface $field_definitions, $account, $plugin_id, $resource_path = NULL, array $options = array(), $langcode = NULL) {
    parent::__construct($request, $field_definitions, $account, $plugin_id, $resource_path, $options, $langcode);
  }

  /**
   * {@inheritdoc}
   */
  public function count() {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  public function create($object) {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }


  /**
   * {@inheritdoc}
   */
  public function update($identifier, $object, $replace = FALSE) {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  public function remove($identifier) {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  public function getIndexIds() {
    throw new ServiceUnavailableException(sprintf('%s is not implemented.', __METHOD__));
  }

  /**
   * {@inheritdoc}
   */
  protected function initDataInterpreter($identifier) {
    return new DataInterpreterArray($this->getAccount(), new ArrayWrapper((array) $identifier));
  }

  protected $output = array();

  /**
   * {@inheritdoc}
   *
   * @param mixed $identifier
   * @return array
   */
  public function view($identifier) {
    $args = explode('/', $identifier);
    $type = $args[0];
    $region = isset($args[1]) ? $args[1] : 'GLOBAL';
    switch ($type) {
      case 'literature':
        $this->countLiterature($region);
        break;
      case 'literature-yearly':
        $this->countLiteratureYearly($region);
        break;
    }
    return $this->output;
  }

  public function countLiteratureYearly($region) {
    $variable = 'literature_count_yearly_' . $region;
    $$variable = &drupal_static(__FUNCTION__);
    if (!isset($$variable)) {
      if ($cache = cache_get('gbif_literature_counts_yearly_' . $region, 'cache_gbif_restful')) {
        $$variable = $cache->data;
      }
      else {
        $regionalLiteratureByYear = [];

        $participantGroups = $this->getActiveParticipantsGrouped();

        // collect iso2 codes
        $countries = $this->getCountries($participantGroups[$region]);

        // Get tids from iso2 codes
        $country_tids = $this->getCountryTids($countries);

        // Get the literature with authors from these countries
        $literatureNids = $this->getLiteratureOfCountries($country_tids);
        $nids = array_keys($literatureNids);
        $literature = node_load_multiple($nids);
        foreach ($literature as $doc) {
          $year = $doc->field_mdl_year['und'][0]['value'];
          if (isset($year)) {
            $regionalLiteratureByYear[$year][] = $doc;
          }
          else {
            $regionalLiteratureByYear['year_unknown'][] = $doc;
          }
        }

        ksort($regionalLiteratureByYear); // Don't return this. It's too big.
        $yearly = [];
        foreach ($regionalLiteratureByYear as $year => $lits) {
          $yearly[] = ['year' => $year, 'literature_number' => count($lits)];
        }
        $$variable = $yearly;
        // cache expires in 3 hours.
        cache_set('gbif_literature_counts_yearly_' . $region, $$variable, 'cache_gbif_restful', time() + 10800);

      }
    }

    $this->output = $$variable;
  }

  public function countLiterature($region) {
    $variable = 'literature_count_' . $region;

    $$variable = &drupal_static(__FUNCTION__);
    if (!isset($$variable)) {
      if ($cache = cache_get('gbif_literature_counts_' . $region, 'cache_gbif_restful')) {
        $$variable = $cache->data;
      }
      else {
        $participantGroups = $this->getActiveParticipantsGrouped();

        // collect iso2 codes
        $countries = $this->getCountries($participantGroups[$region]);
        $countriesCount = count($countries);

        // Get tids from iso2 codes
        $country_tids = $this->getCountryTids($countries);

        // Get the literature with authors from these countries
        $literatureNids = $this->getLiteratureOfCountries($country_tids);
        $literatureCount = count($literatureNids);

        // Get the authors count from these literature
        $authors = [];
        $nids = array_keys($literatureNids);
        $nodes = node_load_multiple($nids);
        foreach ($nodes as $node) {
          $authors = array_merge($authors, $node->field_mdl_authors['und']);
        }
        $authors = array_map('unserialize', array_unique(array_map('serialize', $authors)));

        $$variable = [
          'region' => $region,
          'literature' => $literatureCount,
          'literatureAuthorFromCountries' => $countriesCount,
          'literatureAuthors' => count($authors),
        ];
        // cache expires in 3 hours.
        cache_set('gbif_literature_counts_' . $region, $$variable, 'cache_gbif_restful', time() + 10800);
      }

    }

    $this->output = $$variable;

  }

  public function getActiveParticipantsGrouped() {
    $participants = json_decode(file_get_contents('http://api.gbif.org/v1/directory/participant?limit=300'));

    $participantsGlobal = $participants->results;
    // keeps only active participants
    foreach ($participantsGlobal as $k => $p) {
      if ($p->participationStatus === 'FORMER' || $p->participationStatus === 'OBSERVER') {
        unset($participantsGlobal[$k]);
      }
    }

    $participantGroups = [];
    $participantGroups['GLOBAL'] = $participantsGlobal;
    foreach ($participantsGlobal as $p) {
      if (isset($p->gbifRegion)) {
        $participantGroups[$p->gbifRegion][] = $p;
      }
    }
    return $participantGroups;
  }

  public function getCountries($regionalParticipants) {
    $iso2 = [];
    foreach ($regionalParticipants as $p) {
      if (!in_array($p->countryCode, $iso2)) {
        $iso2[] = $p->countryCode;
      }
    }
    return $iso2;
  }

  public function getCountryTids($iso2) {
    $country_tids = [];
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'taxonomy_term');
    $query->entityCondition('bundle', array('countries'));
    $query->fieldCondition('field_iso2', 'value', $iso2, 'IN');
    $results = $query->execute();
    if (count($results) == 1 && isset($results['taxonomy_term'])) {
      foreach ($results['taxonomy_term'] as $tid => $t_obj) {
        $country_tids[] = $tid;
      }
    }
    else throw new \Exception;
    unset($results);
    return $country_tids;
  }

  public function getLiteratureOfCountries($country_tids) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'literature')
      ->propertyCondition('status', 1)
      ->fieldCondition('field_mdl_author_from_country', 'tid', $country_tids, 'IN');
    $results = $query->execute();
    return $results['node'];
  }

  /**
   * {@inheritdoc}
   */
  public function viewMultiple(array $identifiers) {
    $return = array();
    foreach ($identifiers as $identifier) {
      try {
        $row = $this->view($identifier);
      }
      catch (ForbiddenException $e) {
        $row = NULL;
      }
      $return[] = $row;
    }

    return array_filter($return);
  }

  /**
   * Return the default sort.
   *
   * @return array
   *   A default sort array.
   */
  public function defaultSortInfo() {
    return array();
  }

}
