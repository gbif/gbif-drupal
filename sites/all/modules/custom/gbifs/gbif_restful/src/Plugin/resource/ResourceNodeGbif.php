<?php

/**
 * @file
 * Contains Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif.
 */
namespace Drupal\gbif_restful\Plugin\resource;

use Drupal\restful\Http\HttpHeader;
use Drupal\restful\Plugin\resource\ResourceNode;
use Drupal\restful\Plugin\resource\Field\ResourceFieldBase;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;
use \EntityFieldQuery;
use \EntityMetadataWrapper;
use \EntityValueWrapper;

class ResourceNodeGbif extends ResourceNode implements ResourceNodeGbifInterface {

  /**
   * Overrides ResourceNode::publicFields().
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    unset($public_fields['self']);
    unset($public_fields['label']);

    $public_fields['type'] = array(
      'property' => 'type',
    );

    $public_fields['targetUrl'] = array(
      'callback' => 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTargetUrl',
    );

    $public_fields['featuredSearchTerms'] = array(
      'property' => 'field_featured_search_terms',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['title'] = array(
      'property' => 'title',
    );

    $public_fields['summary'] = array(
      'property' => 'body',
      'sub_property' => 'summary',
    );

    $public_fields['body'] = array(
      'property' => 'body',
      'sub_property' => 'value',
    );

    // attributes
    $public_fields['language'] = array(
      'property' => 'language',
    );
    $public_fields['promote'] = array(
      'property' => 'promote',
    );
    $public_fields['sticky'] = array(
      'property' => 'sticky',
    );
    $public_fields['created'] = array(
      'property' => 'created',
    );
    $public_fields['changed'] = array(
      'property' => 'changed',
    );

    return $public_fields;
  }

  /**
   * @param $path
   * @return array
   */
  public function viewUrlAlias($path) {

    $internal_path = drupal_get_normal_path($path);
    $internal_path_segments = explode('/', $internal_path);

    // REST requires a canonical URL for every resource.
    $canonical_path = $this->getDataProvider()->canonicalPath($internal_path_segments[1]);
    restful()
      ->getResponse()
      ->getHeaders()
      ->add(HttpHeader::create('Link', $this->versionedUrl($canonical_path, array(), FALSE) . '; rel="canonical"'));

    // With URL alias, there should be only one ID to view
    return array($this->getDataProvider()->view($canonical_path));
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
    $output = array(
      'id' => (int)$value['fid'],
      'original' => file_create_url($value['uri']),
      'filemime' => $value['filemime'],
      'filesize' => (int)$value['filesize'],
      'width' => (int)$value['width'],
      'height' => (int)$value['height'],
    );
    if (isset($value['image_styles'])) {
      $output['styles'] = $value['image_styles'];
    }
    return $output;
  }

  /**
   * Process callback, Remove Drupal specific items from the file array.
   *
   * @param array $value
   *   The file array.
   *
   * @return array
   *   A cleaned image array.
   */
  public function fileProcess($value) {
    if (ResourceFieldBase::isArrayNumeric($value)) {
      $output = array();
      foreach ($value as $item) {
        $output[] = $this->fileProcess($item);
      }
      return $output;
    }
    return array(
      'id' => $value['fid'],
      'original' => file_create_url($value['uri']),
      'description' => $value['description'],
      'filename' => $value['filename'],
      'filemime' => $value['filemime'],
      'filesize' => $value['filesize'],
      'timestamp' => $value['timestamp'],
    );
  }

  public static function getTargetUrl(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->getIdentifier();
    return drupal_get_path_alias('node/' . $nid);
  }

  public static function getSystemAttributes(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->getIdentifier();
    $output = array();

    foreach (['prev', 'next'] as $rel) {

      $node = node_load(prev_next_nid($nid, $rel));
      $rel_wrapper = entity_metadata_wrapper('node', $node);
      $output[$rel] = array(
        'id' => (int)$rel_wrapper->getIdentifier(),
        'type' => $rel_wrapper->getBundle(),
        'title' => $rel_wrapper->label(),
        'targetUrl' => drupal_get_path_alias('node/' . $rel_wrapper->getIdentifier()),
      );

      switch ($wrapper->getBundle()) {
        case 'news':
        case 'dataset':
        case 'data_use':
          $image = $rel_wrapper->field_uni_images->value();
          break;
        case 'event':
          $image = $rel_wrapper->ge_image->value();
          break;
        case 'programme':
          $image = $rel_wrapper->field_programme_ef_image->value();
          break;
        case 'project':
          $image = $rel_wrapper->field_pj_image->value();
          break;
      }
      if (isset($image)) {
        $output[$rel]['thumbnail'] = (isset($image[0])) ? image_style_url('focal_point_for_news', $image[0]['uri']) : NULL;
        $output[$rel]['imageCaption'] = (isset($image[0])) ? $image[0]['image_field_caption']['value'] : NULL;
      }
      unset($image);

    }

    // Get translated copies only for News.
    $node = node_load($nid);
    if ($node->type == 'news') {
      $output['translated_copies'] = ResourceNodeGbif::getTranslatedNids($nid);
    }
    return $output;
  }

  /**
   * @param array $value
   * @return array
   */
  public static function getTermValue($value) {
    $output = array();
    if (!is_array($value)) {
      $value = array($value);
    }
    $terms = taxonomy_term_load_multiple($value);
    foreach ($terms as $term) {
      $term->id = (int)$term->tid;
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
   *
   */
  public static function getEntityValue($value) {
    $output = array();

    if (!is_array($value)) {
      $value = array($value);
    }

    foreach ($value as $nid) {

        $item = array();
        $entity = entity_metadata_wrapper('node', $nid);
        $item['id'] = (int)$nid;
        $item['type'] = $entity->getBundle();
        $item['targetUrl'] = drupal_get_path_alias('node/' . $nid);
        $item['title'] = $entity->label();

        switch ($item['type']) {
          case 'dir_organization':
            // Image
            $image = $entity->field_image->value();
            if (isset($image)) {
              $image_field = array(
                'id' => (int)$image['fid'],
                'original' => file_create_url($image['uri']),
                'filemime' => $image['filemime'],
                'filesize' => (int)$image['filesize'],
                'width' => (int)$image['image_dimensions']['width'],
                'height' => (int)$image['image_dimensions']['height'],
                'styles' => array(
                  'funder_image' => image_style_url('funder_image', $image['uri'])
                ),
              );
              $item['image'] = $image_field;
            }
            else {
              $item['image'] = NULL;
            }
            unset($image);

            // URL
            $url = $entity->field_url->value();
            if ($entity->field_url->value()) {
              $item['url'] = $url[0];
            }
            else {
              $item['url'] = NULL;
            }
            unset($url);
            // organization URL is not exposed
            unset($item['targetUrl']);

            break;
          case 'news':
            $item['summary'] = $entity->body->__isset('summary') ? $entity->body->summary->value() : $entity->body->value();
            // Image
            $images = $entity->field_uni_images->value();
            $image = $images[0]; // for referenced entity only use the first image
            if (isset($image)) {
              $image_field = array(
                'id' => (int)$image['fid'],
                'original' => file_create_url($image['uri']),
                'filemime' => $image['filemime'],
                'filesize' => (int)$image['filesize'],
                'width' => (int)$image['image_dimensions']['width'],
                'height' => (int)$image['image_dimensions']['height'],
                'styles' => array(
                  'square_thumbnail' => image_style_url('square_thumbnail', $image['uri'])
                ),
              );
              $item['image'] = $image_field;
            }
            else {
              $item['image'] = NULL;
            }
            unset($image);

            break;
          case 'call':
            $item['acronym'] = $entity->field_acronym->value();
            break;

        }

        $item['language'] = $entity->language->value();
        $item['created'] = (int)$entity->created->value();
        $output[] = $item;
    }
    return $output;
  }

  /**
   *
   */
  public static function getDateValue($value) {
    if (!is_array($value)) {
      return $value;
    }
    unset($value['db']);
    return $value;
  }

  /**
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

    // If there is only one ID then use 'view'. Else, use 'viewMultiple'. The
    // difference between the two is that 'view' allows access denied
    // exceptions.
    if (count($ids) == 1) {
      // attempt to resolve locale param
      // @todo validate the locale param.
      $params = drupal_get_query_parameters();
      if (isset($params['locale'])) {
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node');
        $query->fieldCondition('field_translation_source', 'target_id', $ids[0], '=');
        $results = $query->execute();
        if (count($results) > 0 && isset($results['node'])) {
          foreach ($results['node'] as $nid => $simple_obj) {
            $node = node_load($nid);
            if (property_exists($node, 'language') && $node->language == $params['locale']) {
              $localized_version = array($nid);
            }
          }

          if (isset($localized_version)) {
            return array($this->getDataProvider()->view($localized_version[0]));
          }
          else {
            return array($this->getDataProvider()->view($ids[0]));
          }
        }
        else {
          return array($this->getDataProvider()->view($ids[0]));
        }
      }
      else {
        return array($this->getDataProvider()->view($ids[0]));
      }
    }
    else {
      return $this->getDataProvider()->viewMultiple($ids);
    }
  }

  /**
   *
   */
  private static function getTranslatedNids($nid) {
    $nid_results = array();
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->fieldCondition('field_translation_source', 'target_id', $nid, '=');
    $results = $query->execute();
    if (count($results) > 0 && isset($results['node'])) {
      foreach($results['node'] as $k => $node) {
        $node_loaded = node_load($k);
        $obj = array(
          'id' => $k,
          'type' => $node_loaded->type,
          'language' => $node_loaded->language,
        );

        $nid_results[] = $obj;
      }
    }
    return $nid_results;
  }
}
