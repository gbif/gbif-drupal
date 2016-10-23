<?php

/**
 * @file
 * Contains \Drupal\gbif_restful_search\Plugin\resource\search\node\v2\Search__2_0.
 */

namespace Drupal\gbif_restful_search\Plugin\resource\search\node\v2;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldBase;
use Drupal\gbif_restful_search\Plugin\Resource\GbifResourceSearchBase;

/**
 * Class Search__2_0
 * @package Drupal\gbif_restful_search\Plugin\resource\search\node\v2
 *
 * @Resource(
 *   name = "search:2.0",
 *   resource = "search",
 *   label = "Search",
 *   description = "Provides basic info doing Search API searches.",
 *   dataProvider = {
 *     "searchIndex": "node_index",
 *     "idField": "entity_id"
 *   },
 *   renderCache = {
 *     "render": FALSE,
 *   },
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   majorVersion = 2,
 *   minorVersion = 0,
 *   formatter = "json_gbif"
 * )
 */
class Search__2_0 extends GbifResourceSearchBase implements ResourceInterface {

  /**
   * Overrides Resource::versionedUrl().
   * {@inheritdoc}
   */
  public function versionedUrl($path = '', $options = array(), $version_string = TRUE) {
    // lookup URL Alias
    if (is_numeric($path)) {
      $path = drupal_get_path_alias('node/' . $path);
    }

    // Make the URL absolute by default.
    $options += array('absolute' => TRUE);
    $plugin_definition = $this->getPluginDefinition();
    if (!empty($plugin_definition['menuItem'])) {
      $url = variable_get('restful_hook_menu_base_path', 'api') . '/';
      $url .= $plugin_definition['menuItem'] . '/' . $path;
      return url(rtrim($url, '/'), $options);
    }

    $base_path = variable_get('restful_hook_menu_base_path', 'api');
    $url = $base_path;
    if ($version_string) {
      $url .= '/v' . $plugin_definition['majorVersion'] . '.' . $plugin_definition['minorVersion'];
    }
    $url .= '/' . $plugin_definition['resource'] . '/' . $path;
    return url(rtrim($url, '/'), $options);
  }

  /**
   * Overrides Resource::publicFields().
   */
  protected function publicFields() {

    $public_fields['entity_id'] = array(
      'property' => 'search_api_id',
      'process_callbacks' => array(
        'intVal',
      ),
    );

    $public_fields['version_id'] = array(
      'property' => 'vid',
      'process_callbacks' => array(
        'intVal',
      ),
    );

    $public_fields['relevance'] = array(
      'property' => 'search_api_relevance',
    );

    $public_fields['type'] = array(
      'property' => 'type',
    );

    $public_fields['targetUrl'] = array(
      'callback' => 'Drupal\gbif_restful_search\Plugin\resource\search\node\v2\Search__2_0::getUrlAlias'
    );

    $public_fields['featuredSearchTerms'] = array(
      'property' => 'field_featured_search_terms',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful_search\Plugin\resource\search\node\v2\Search__2_0::getTermValue'),
      ),
    );

    $public_fields['title'] = array(
      'property' => 'title',
    );

    //@todo language handling.
    //@see \Drupal\restful_search_api\Plugin\resource\Field\ResourceFieldSearchKey.
    $public_fields['summary'] = array(
      'property' => 'body',
      'sub_property' => LANGUAGE_NONE . '::0::summary',
    );

    $public_fields['body'] = array(
      'property' => 'body',
      'sub_property' => LANGUAGE_NONE . '::0::value',
    );

    // By checking that the field exists, we allow re-using this class on
    // different tests, where different fields exist.
    $imageFieldBundleMapping = [
      'news' => 'field_uni_images',
      'dataset' => 'field_uni_images',
      'data_use' => 'field_uni_images',
      'programme' => 'field_programme_ef_image',
      'project' => 'field_pj_image'
    ];
    foreach ($imageFieldBundleMapping as $bundle => $imageField) {
      if (field_info_instance('node', $imageField, $bundle)) {
        $public_fields[$imageField] = array(
        'property' => $imageField,
          'sub_property' => LANGUAGE_NONE,
          'process_callbacks' => array(
            array($this, 'Drupal\gbif_restful_search\Plugin\resource\search\node\v2\Search__2_0::imageProcess'),
          ),
        );
      }
    }

    foreach (['news', 'data_use', 'dataset'] as $type) {
      if (field_info_instance('node', 'field_dataset_uuid', $type)) {
        $public_fields['datasetUuid'] = [
          'property' => 'field_dataset_uuid',
          'sub_property' => LANGUAGE_NONE . '::0::value'
        ];
      }
    }

    // Tag fields should be here for filtering to work.
    $public_fields['tx_informatics'] = array(
      'property' => 'tx_informatics',
      'sub_property' => 'und',
    );
    $public_fields['tx_data_use'] = array(
      'property' => 'tx_data_use',
      'sub_property' => 'und',
    );
    $public_fields['tx_capacity_enhancement'] = array(
      'property' => 'tx_capacity_enhancement',
      'sub_property' => 'und',
    );
    $public_fields['tx_about_gbif'] = array(
      'property' => 'tx_about_gbif',
      'sub_property' => 'und',
    );
    $public_fields['tx_audience'] = array(
      'property' => 'tx_audience',
      'sub_property' => 'und',
    );
    $public_fields['field_tx_purpose'] = array(
      'property' => 'field_tx_purpose',
      'sub_property' => 'und',
    );
    $public_fields['field_tx_data_type'] = array(
      'property' => 'field_tx_data_type',
      'sub_property' => 'und',
    );
    $public_fields['gr_resource_type'] = array(
      'property' => 'gr_resource_type',
      'sub_property' => 'und',
    );
    $public_fields['field_country'] = array(
      'property' => 'field_country',
      'sub_property' => 'und',
    );
    $public_fields['tx_topic'] = array(
      'property' => 'tx_topic',
      'sub_property' => 'und',
    );
    $public_fields['tx_tags'] = array(
      'property' => 'tx_tags',
      'sub_property' => 'und',
    );

    $public_fields['promote'] = array(
      'property' => 'promote',
    );

    $public_fields['sticky'] = array(
      'property' => 'sticky',
    );

    $public_fields['language'] = array(
      'property' => 'language',
    );

    $public_fields['status'] = array(
      'property' => 'status',
    );

    $public_fields['created'] = array(
      'property' => 'created',
    );

    $public_fields['changed'] = array(
      'property' => 'changed',
    );

    return $public_fields;
  }

  //@todo Consider redirection in this field
  public static function getUrlAlias(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->get('nid');
    return drupal_get_path_alias('node/' . $nid);
  }

  public static function getBundle(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    return $wrapper->get('type');
  }

  /**
   * Process callback, Remove Drupal specific items from the image array.
   *
   * @param array $value
   *   The image array.
   *
   * @return array
   *   A cleaned image array.
   */
  public function imageProcess($value) {
    if (ResourceFieldBase::isArrayNumeric($value)) {
      $output = array();
      foreach ($value as $item) {
        $output[] = $this->imageProcess($item);
      }
      return $output;
    }
    return array(
      'id' => $value['fid'],
      'self' => file_create_url($value['uri']),
      'filemime' => $value['filemime'],
      'filesize' => $value['filesize'],
      'width' => $value['width'],
      'height' => $value['height'],
      'styles' => array(
        'inline_header_image' => image_style_url('inline_header_image', $value['uri']),
        'square_thumbnail' => image_style_url('square_thumbnail', $value['uri']),
      ),
    );
  }

  /**
   * @param array $value
   * @return array
   */
  public static function getTermValue($value) {
    $output = array();
    $extracted = array();
    if (is_array($value)) {
      if (isset($value['und'])) {
        foreach ($value['und'] as $v) {
          $extracted[] = $v['tid'];
        }
      }
    }
    $terms = taxonomy_term_load_multiple($extracted);
    foreach ($terms as $term) {
      $term->id = $term->tid;
      unset($term->tid, $term->vid, $term->description, $term->format, $term->weight, $term->uuid, $term->vocabulary_machine_name, $term->field_iso2);
      // legacy attributes
      foreach (array('field_ims_keyword_id', 'ge_ims_kp_id', 'field_term_iso_639_1', 'field_term_native_name') as $field) {
        if (isset($term->$field)) {
          unset($term->$field);
        }
      }
      $output[] = $term;
    }
    return $output;
  }

  /**
   * {@inheritdoc}
   */
  public function index($path) {
    return $this->getDataProvider()->index();
  }

}