<?php

/**
 * @file
 * Contains \RestfulSearchAPIBasicSearch.
 */

class RestfulSearchAPISearch extends \RestfulDataProviderSearchAPI implements \RestfulInterface {

  /**
   * Overrides \RestfulBase::publicFieldsInfo().
   */
  public function publicFieldsInfo() {
    return array(
      'entity_id' => array(
        'property' => 'search_api_id',
        'process_callbacks' => array(
          'intVal',
        ),
      ),
      'version_id' => array(
        'property' => 'vid',
        'process_callbacks' => array(
          'intVal',
        ),
      ),
      'relevance' => array(
        'property' => 'search_api_relevance',
      ),
      'title' => array(
        'property' => 'title',
      ),
      'body' => array(
        'property' => 'body',
        'sub-property' => LANGUAGE_NONE . '::0::value',
      ),
      'type' => array(
        'property' => 'type',
      ),
      'promote' => array(
        'property' => 'promote',
      ),
      'sticky' => array(
        'property' => 'sticky',
      ),
      'language' => array(
        'property' => 'language',
      ),
    );
  }

  /**
   * Workaround of missing method.
   * @see https://github.com/RESTful-Drupal/restful_search_api/issues/10
   */
  public function isValidOperatorForFilter($filter) {
    return TRUE;
  }
}
