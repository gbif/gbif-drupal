<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\resource\DataProvider\GbifSearchApi.
 */
namespace Drupal\gbif_restful_search\Plugin\resource\DataProvider;

use Drupal\gbif_restful_search\Plugin\resource\Field\ResourceFieldGbifCollection;
use Drupal\restful\Exception\BadRequestException;
use Drupal\restful\Exception\ForbiddenException;
use Drupal\restful\Exception\ServerConfigurationException;
use Drupal\restful\Exception\ServiceUnavailableException;
use Drupal\restful\Exception\UnprocessableEntityException;
use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\ArrayWrapper;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterArray;
use Drupal\restful\Plugin\resource\DataProvider\DataProvider;
use Drupal\gbif_restful_search\Plugin\resource\Field\ResourceFieldGbifCollectionInterface;
use \EntityFieldQuery;

/**
 * Class GbifSearchApi.
 *
 * @package Drupal\gbif_restful_search\Plugin\resource\DataProvider
 */
 class GbifSearchApi extends DataProvider implements GbifSearchApiInterface {

  /**
   * Index machine name to query against.
   *
   * @var string
   */
  protected $searchIndex;

  /**
   * Total count of results after executing the query.
   *
   * @var int
   */
  protected $totalCount;

  /**
   * Tracks the sorts that have been applied.
   */
  private $sorted = array();

  /**
   * Additional information for the query.
   */
  protected $hateoas = array();

  /**
   * Mapping for readable tag related fields.
   */
  public $mapping = array(
    'tx_informatics' => 'category_informatics',
    'tx_data_use' => 'category_data_use',
    'tx_capacity_enhancement' => 'category_capacity_enhancement',
    'tx_about_gbif' => 'category_about_gbif',
    'tx_audience' => 'category_audience',
    'field_tx_purpose' => 'category_purpose',
    'field_tx_data_type' => 'category_data_type',
    'gr_resource_type' => 'category_resource_type',
    'field_country' => 'category_country',
    'tx_topic' => 'category_topic',
    'tx_tags' => 'category_tags',
    'type' => 'type',
    'language' => 'language',
    'field_gbif_area' => 'category_area',
    'field_content_stream' => 'category_content_stream',
    'field_un_region' => 'category_un_region',
  );

   /**
    * Mapping for fields and vocabulary.
    */
   public $mapping_vocabulary = array(
     'tx_informatics' => 'informatics',
     'tx_data_use' => 'data_use',
     'tx_capacity_enhancement' => 'capacity_enhancement',
     'tx_about_gbif' => 'about_gbif',
     'tx_audience' => 'audience',
     'field_tx_purpose' => 'purpose',
     'field_tx_data_type' => 'data_type',
     'gr_resource_type' => 'resource_type',
     'field_country' => 'countries',
     'tx_topic' => 'topic',
     'tx_tags' => 'tags',
     'field_gbif_area' => 'gbif_area',
     'field_content_stream' => 'content_stream',
     'field_un_region' => 'un_region',
   );
  /**
   * {@inheritdoc}
   */
  public function __construct(RequestInterface $request, ResourceFieldGbifCollectionInterface $field_definitions, $account, $plugin_id, $resource_path = NULL, array $options = array(), $langcode = NULL) {
    parent::__construct($request, $field_definitions, $account, $plugin_id, $resource_path, $options, $langcode);
    if (empty($this->options['urlParams'])) {
      $this->options['urlParams'] = array(
        'filter' => TRUE,
        'sort' => TRUE,
        'fields' => TRUE,
        'loadByFieldName' => TRUE,
      );
    }
  }

  /**
   * Return the search index machine name.
   *
   * @return string
   *
   * @throws \Drupal\restful\Exception\ServerConfigurationException
   *   If there is no searchIndex.
   */
  public function getSearchIndex() {
    $options = $this->getOptions();
    if (empty($options['searchIndex'])) {
      throw new ServerConfigurationException('The Search API data provider needs a search index. None found.');
    }
    return $options['searchIndex'];
  }

  /**
   * Set the total results count after executing the query.
   *
   * @param int $totalCount
   */
  public function setTotalCount($totalCount) {
    $this->totalCount = $totalCount;
  }

  /**
   * Additional HATEOAS to be passed to the formatter.
   */
  public function additionalHateoas() {
    return $this->hateoas;
  }

  /**
   * {@inheritdoc}
   */
  public function count() {
    $count = db_select('search_api_db_node_index', 'n')
      ->fields('n')
      ->countQuery()
      ->execute()
      ->fetchField();
    return $count;
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
  public function view($identifier) {
    return $identifier;
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
    // bko: hard coded target index here for GBIF usage.
    $options = $ids = array();

    list($options['offset'], $options['limit']) = $this->parseRequestForListPagination();

    try {
      // Query SearchAPI for the results.
      $search_results = $this->executeQuery('', $options);
      foreach ($search_results as $search_result) {
        $ids[] = $this->mapSearchResultToPublicFields($search_result);
      }
    }
    catch (\SearchApiException $e) {
      // Relay the exception with one of RESTful's types.
      throw new ServerConfigurationException(format_string('Search API Exception: @message', array(
        '@message' => $e->getMessage(),
      )));
    }

    // This is an emergency sort. Only apply it if no sort could be applied.
    if (!array_filter(array_values($this->sorted))) {
      $this->manualArraySort($ids);
    }

    return $ids;
  }

  /**
   * {@inheritdoc}
   */
  protected function initDataInterpreter($identifier) {
    return new DataInterpreterArray($this->getAccount(), new ArrayWrapper((array) $identifier));
  }

  /**
   * {@inheritdoc}
   *
   * @param mixed $identifier
   *   The search query.
   *
   * @return array
   *   If the provided search index does not exist.
   *
   * @throws \Drupal\restful\Exception\ServerConfigurationException If the provided search index does not exist.
   */
  public function query($identifier) {
    // In this case the ID is the search query.
    $options = $output = array();
    // Construct the options array.

    // Set the following options:
    // - offset: The position of the first returned search results relative to
    //   the whole result in the index.
    // - limit: The maximum number of search results to return. -1 means no
    //   limit.
    list($options['offset'], $options['limit']) = $this->parseRequestForListPagination();

    try {
      // Query SearchAPI for the results.
      $search_results = $this->executeQuery($identifier, $options);
      foreach ($search_results as $search_result) {
        $output[] = $this->mapSearchResultToPublicFields($search_result);
      }
    }
    catch (\SearchApiException $e) {
      // Relay the exception with one of RESTful's types.
      throw new ServerConfigurationException(format_string('Search API Exception: @message', array(
        '@message' => $e->getMessage(),
      )));
    }

    // This is an emergency sort. Only apply it if no sort could be applied.
    if (!array_filter(array_values($this->sorted))) {
      $this->manualArraySort($output);
    }

    return $output;
  }

  /**
   * {@inheritdoc}
   */
  protected function parseRequestForListFilter() {
    // At the moment RESTful only supports AND conjunctions.
    $search_api_filter = new \SearchApiQueryFilter('AND');

    $input = $this->getRequest()->getParsedInput();
    if (empty($input['filter'])) {
      // No filtering is needed.
      return $search_api_filter;
    }
    $options = $this->getOptions();
    $url_params = empty($options['urlParams']) ? array() : $options['urlParams'];
    if (empty($url_params['filter'])) {
      throw new BadRequestException('Filter parameters have been disabled in server configuration.');
    }

    $mapping = $this->mapping;

    foreach ($input['filter'] as $public_field => $value) {
      foreach ($mapping as $m => $n) {
        if ($public_field == $n) {

          // if it's category_* fields convert $value to $tid if it's not.
          if (strpos($public_field, 'category_') !== FALSE && !is_numeric($value)) {
            $voc = str_replace('category_', '', $public_field);

            // if it's country we assume to accept ISO 2-digit code.
            if ($voc == 'country') {
              $query = new EntityFieldQuery();
              $query->entityCondition('entity_type', 'taxonomy_term');
              $query->entityCondition('bundle', array('countries'));
              $query->fieldCondition('field_iso2', 'value', $value, '=');
              $results = $query->execute();
              if (count($results) == 1 && isset($results['taxonomy_term'])) {
                foreach ($results['taxonomy_term'] as $tid => $t_obj) {
                  $value = $tid;
                }
              }
              else throw new \Exception;
            }
            else {
              $value = str_replace('_', ' ', $value);
              $term = taxonomy_get_term_by_name($value, $voc);
              if (count($term) == 1) {
                foreach ($term as $tid => $t) {
                  $value = $tid;
                }
              }
              else {
                throw new \Exception();
              }
            }
          }
          // Convert the requested field name to the actual field name.
          $public_field = $m;
        }
      }
      $resource_field = $this->fieldDefinitions->get($public_field);
      $field = $resource_field->getProperty() ? : $public_field;

      if (!is_array($value)) {
        // Request uses the shorthand form for filter. For example
        // filter[foo]=bar would be converted to filter[foo][value] = bar.
        $value = array('value' => $value);
      }
      // Set default operator.
      $value += array('operator' => '=');

      // Clean the operator in case it came from the URL.
      // e.g. filter[minor_version][operator]=">="
      $value['operator'] = str_replace(array('"', "'"), '', $value['operator']);

      $this->isValidOperatorsForFilter(array($value['operator']));

      $search_api_filter->condition($field, $value['value'], $value['operator']);
    }

    return $search_api_filter;
  }

  /**
   * Parses the request object to get the pagination options.
   *
   * @return array
   *   A numeric array with the offset and length options.
   *
   * @throws BadRequestException
   * @throws UnprocessableEntityException
   */
  protected function parseRequestForListPagination() {
    $pager_input = $this->getRequest()->getPagerInput();

    //@todo Add offset value here.
    $page = isset($pager_input['number']) ? $pager_input['number'] : 1;
    if (!ctype_digit((string) $page) || $page < 1) {
      throw new BadRequestException('"Page" property should be numeric and equal or higher than 1.');
    }

    $range = isset($pager_input['size']) ? (int) $pager_input['size'] : $this->getRange();
    $range = isset($range) ? $range : $this->getRange();
    if (!ctype_digit((string) $range) || $range < 1) {
      throw new BadRequestException('"Range" property should be numeric and equal or higher than 1.');
    }

    $url_params = empty($this->options['urlParams']) ? array() : $this->options['urlParams'];
    if (isset($url_params['range']) && !$url_params['range']) {
      throw new UnprocessableEntityException('Range parameters have been disabled in server configuration.');
    }

    $offset = ($page - 1) * $range;
    return array($offset, $range);
  }

  /**
   * Filter the query for list.
   *
   * @param \SearchApiQueryInterface $query
   *   The query object.
   */
  protected function queryForListFilter(\SearchApiQueryInterface $query) {
    $query->filter($this->parseRequestForListFilter());
  }

  /**
   * Executes the Search API query and stores the total count.
   *
   * @param string $keywords
   *   Keywords to search.
   * @param array $options
   *   An array of options passed to search_api_query.
   *
   * @throws ServerConfigurationException
   *   For invalid indices.
   *
   * @return array
   *   The array of results.
   *
   * @see search_api_query()
   */
  protected function executeQuery($keywords, array $options) {
    $index = search_api_index_load($this->getSearchIndex());

    if (!$index) {
      throw new ServerConfigurationException(format_string('Search API Exception: Unknown index with ID @id.', array(
        '@id' => $this->getSearchIndex(),
      )));
    }
    $query = $index->query($options);

    $this->queryForListSort($query);
    $this->queryForListFilter($query);
    $resultsObj = $query
      ->keys($keywords)
      ->execute();

    $this->setTotalCount($resultsObj['result count']);
    $results = $index->loadItems(array_keys($resultsObj['results']));

    // Add the index id and the relevance.
    foreach ($resultsObj['results'] as $id => $result) {
      $results[$id]->search_api_id = $result['id'];
      $results[$id]->search_api_relevance = $result['score'];
    }
    if (!empty($resultsObj['search_api_facets'])) {
      $this->hateoas['facets'] = $this->processSearchIndexFacets($resultsObj['search_api_facets']);
    }
    $this->hateoas['count'] = (int)$resultsObj['result count'];

    // Search keyword is considered a filter
    $this->hateoas['filters'] = [];

    // Add a request object
    $filters = $query->getFilter()->getFilters();
    if (isset($filters)) {
      $response = $this->appendQueryFilters($filters);
      $this->hateoas['filters'] = array_merge($this->hateoas['filters'], $response['filters']);
      $this->hateoas['issues'] = $response['issues'];
    }

    return $results;
  }

  /**
   * Sort the query for list.
   *
   * @param \SearchApiQueryInterface $query
   *   The Search API query.
   *
   * @throws BadRequestException
   *
   * @see \RestfulEntityBase::getQueryForList
   */
  protected function queryForListSort(\SearchApiQueryInterface $query) {

    // Get the sorting options from the request object.
    $sorts = $this->parseRequestForListSort();

    $sorts = $sorts ?: $this->defaultSortInfo();

    foreach ($sorts as $sort => $direction) {
      $resource_field = $this->fieldDefinitions->get($sort);
      $property = ($resource_field && $resource_field->getProperty()) ? $resource_field->getProperty() : $sort;
      try {
        $query->sort($property, $direction);

        // Mark this sort as applied.
        $this->sorted[$sort] = TRUE;
      }
      catch (\SearchApiException $e) {
        // Do not throw an exception, we will sort manually the array
        // afterwards.
      }
    }
  }

  /**
   * Overrides \RestfulBase::parseRequestForListSort
   */
  protected function parseRequestForListSort() {
    $input = $this->getRequest()->getParsedInput();

    if (empty($input['sort'])) {
      return array();
    }
    $options = $this->getOptions();
    $url_params = empty($options['urlParams']) ? array() : $options['urlParams'];
    if (empty($url_params['sort'])) {
      throw new BadRequestException('Sort parameters have been disabled in server configuration.');
    }

    $sorts = array();
    foreach (explode(',', $input['sort']) as $sort) {
      $direction = $sort[0] == '-' ? 'DESC' : 'ASC';
      $sort = str_replace('-', '', $sort);

      $sorts[$sort] = $direction;

      // Initially mark all sort criteria as not applied.
      $this->sorted[$sort] = FALSE;
    }
    return $sorts;
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

  /**
   * Prepares the output array from the search result.
   *
   * @param object $result
   *   Search result from Search API.
   *
   * @return array
   *   The prepared output.
   */
  protected function mapSearchResultToPublicFields($result) {
    $resource_field_collection = $this->initResourceFieldCollection($result);
    // Loop over all the defined public fields.
    foreach ($this->fieldDefinitions as $public_field_name => $resource_field) {
      // Map result names to public properties.
      /* @var \Drupal\restful_search_api\Plugin\resource\Field\ResourceFieldSearchKeyInterface $resource_field */
      if (!$this->methodAccess($resource_field)) {
        // Allow passing the value in the request.
        continue;
      }
      $resource_field_collection->set($resource_field->id(), $resource_field);
    }

    return $resource_field_collection;
  }

  /**
   * If no sort could be applied via Search API, then sort the results manually.
   *
   * This is a last resource thing and arguably a good idea. If the results are
   * paginated it can lead to unexpected results.
   *
   * @param $results
   *   The array of search results from Search API.
   */
  protected function manualArraySort(&$results) {
    if (empty($results)) {
      return;
    }
    $sorts = $this->parseRequestForListSort();
    $sorts = $sorts ? $sorts : $this->defaultSortInfo();
    foreach ($sorts as $sort => $direction) {
      // Since this is an expensive operation only apply the first sort.
      if ($results[0]->get($sort)) {
        usort($results, function (ResourceFieldCollectionInterface $a, ResourceFieldCollectionInterface $b) use ($sort, $direction) {
          $val1 = $a->get($sort)->render($a->getInterpreter());
          $val2 = $b->get($sort)->render($b->getInterpreter());
          if ($direction == 'DESC') {
            return $val1[$sort] < $val2[$sort];
          }
          return $val1[$sort] > $val2[$sort];
        });
        break;
      }
    }
  }

  /**
   *
   */
  private function processSearchIndexFacets(&$facets) {
    $mapping = $this->mapping;

    // Extra double quotes are introduced during the query.
    // We sanitise it here.
    foreach($facets as $field_name => &$field) {
      foreach ($field as &$facet) {
        $facet['count'] = (int)$facet['count'];
        $facet['filter'] = str_replace('"', '', $facet['filter']);
        if (is_numeric($facet['filter'])) {
          // Modify the facet output so it makes better sense to consumers.
          $facet['id'] = (int)$facet['filter'];
          $term = taxonomy_term_load($facet['id']);
          $facet['label'] = $term->name;
          if ($field_name == 'field_country') {
            $facet['enum'] = $term->field_iso2['und'][0]['value'];
          }
          else {
            $facet['enum'] = strtolower(str_replace(' ', '_', $term->name));
          }
        }
        else {
          $facet['enum'] = $facet['filter'];
        }
        unset($facet['filter']);
      }
    }
    // Map field names to conform the defined convention.
    foreach($facets as $field_name => &$field) {
      foreach ($mapping as $m => $n) {
        if (strpos($field_name, $m) !== false) {
          $facets[$n] = $facets[$m];
          if (!in_array($m, ['type', 'language'])) unset($facets[$m]);
        }
      }
    }
    // Arrange it as non-associative array.
    $facet_non_associative = array();
    foreach ($facets as $field_name => &$field) {
      $item = array();
      $item['field'] = $field_name;
      $item['counts'] = $facets[$field_name];
      $facet_non_associative[] = $item;
    }

    return $facet_non_associative;
  }

  /**
   * This function append the filter information to the result object so it's
   * possible to show/debug what's being requested.
   */
  private function appendQueryFilters(&$filters) {
    $mapping = $this->mapping;
    $node_types = node_type_get_types();
    unset($node_types['dir_organization'], $node_types['call'], $node_types['generictemplate']);
    $languages = language_list();

    $requested_filters = [];
    $issues = [];

    foreach($filters as $filter) {

      switch ($filter[0]) {
        case 'type':
          $valid_type = FALSE;
          foreach ($node_types as $type => $type_obj) {
            if ($filter[1] == $type) {
              $valid_type = TRUE;
              $item = array(
                'field' => $mapping[$filter[0]],
                'counts' => array(
                  array(
                    'label' => $node_types[$filter[1]]->name,
                    'enum' => $filter[1]
                  )
                ),
              );
              $requested_filters[] = $item;
            }
          }
          if ($valid_type == FALSE) {
            $issues[] = $filter[1] . ' is not a valid content type.';
          }
          break;

        case 'language':
          $valid_language = FALSE;
          foreach ($languages as $lang_code => $language) {
            if ($filter[1] == $lang_code || $filter[1] == 'und') $valid_language = TRUE;
          }

          if ($valid_language == TRUE && $filter[1] != 'und') {
            $item = array(
              'field' => $mapping[$filter[0]],
              'counts' => array(
                array(
                  'label' => $languages[$filter[1]]->name,
                  'enum' => $filter[1]
                )
              ),
            );
            $requested_filters[] = $item;
          }
          elseif ($valid_language == TRUE && $filter[1] == 'und') {
            $item = array(
              'field' => $mapping[$filter[0]],
              'counts' => array(
                array(
                  'label' => t('Not-specified'),
                  'enum' => $filter[1]
                )
              ),
            );
            $requested_filters[] = $item;
          }
          else {
            $issues[] = $filter[1] . ' is not a valid language code. Either the code is wrong or unavailable on this site';
          }
          break;

        default:
          $is_term = (is_numeric($filter[1])) ?  TRUE : FALSE;
          if ($is_term) {
            $term = taxonomy_term_load($filter[1]);
            if ($this->validTaxonomy($filter[0], $filter[1])) {
              $item = array(
                'field' => $mapping[$filter[0]],
                'counts' => array(
                  array(
                    'id' => (int)$term->tid,
                    'label' => $term->name,
                    'enum' => strtolower(str_replace(' ', '_', $term->name)),
                  )
                ),
              );
              $requested_filters[] = $item;
            }
            else {
              $issues[] = $filter[1] . '(' . $term->name . ', ' . $term->vocabulary_machine_name . ') is not a valid term ID for ' . $mapping[$filter[0]];
            }
          }
          break;
      }
    }

    return $response = array(
      'filters' => $requested_filters,
      'issues' => $issues
    );
  }

  /**
   * Validate that the requested term filter is of correct vocabulary.
   * @param $field
   * @param $tid
   */
  private function validTaxonomy($field, $tid) {
    $mapping_vocabulary = $this->mapping_vocabulary;
    foreach ($mapping_vocabulary as $m => $n) {
      if ($field == $m) {
        $term = taxonomy_term_load($tid);
        // id matches a term in the requested vocabulary
        if ($term->vocabulary_machine_name == $n) {
          return TRUE;
        }
        else {
          return FALSE;
        }
      }
    }
  }

   /**
    * Initialize the empty resource field collection to bundle the output.
    *
    * @param mixed $identifier
    *   The ID of thing being viewed.
    *
    * @return ResourceFieldGbifCollectionInterface
    *   The collection of fields.
    *
    * @throws \Drupal\restful\Exception\NotFoundException
    */
   protected function initResourceFieldCollection($identifier) {
     $resource_field_collection = new ResourceFieldGbifCollection(array(), $this->getRequest());
     $interpreter = $this->initDataInterpreter($identifier);
     $resource_field_collection->setInterpreter($interpreter);
     $id_field_name = empty($this->options['idField']) ? 'id' : $this->options['idField'];
     $resource_field_collection->setIdField($this->fieldDefinitions->get($id_field_name));
     $resource_field_collection->setResourceId($this->pluginId);
     return $resource_field_collection;
   }

   /**
    * Default pager size.
    * @return int
    */
   public function getRange() {
     return 20;
   }
 }