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

    $nid = arg(3);
    $node = node_load($nid);
    if ($node->path['alias'] != null) {
      $public_fields['targetUrl'] = array(
        'callback' => 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTargetUrl',
      );
    }

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
    return array(
      'id' => $value['fid'],
      'original' => file_create_url($value['uri']),
      'filemime' => $value['filemime'],
      'filesize' => $value['filesize'],
      'width' => $value['width'],
      'height' => $value['height'],
      'styles' => $value['image_styles'],
    );
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

  //@todo Consider redirection in this field
  public static function getTargetUrl(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->getIdentifier();
    $node = node_load($nid);
    return $node->path['alias'];
  }

  public static function getSystemAttributes(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->getIdentifier();
    $prev_node = node_load(prev_next_nid($nid, 'prev'));
    $next_node = node_load(prev_next_nid($nid, 'next'));
    $output = array(
      'prev' => array(
        'id' => $prev_node->nid,
        'type' => $prev_node->type,
        'title' => $prev_node->title,
        'targetUrl' => $prev_node->path['alias'],
        'thumbnail' => image_style_url('focal_point_for_news', $prev_node->field_uni_images['und'][0]['uri']),
        'imageCaption' => $prev_node->field_uni_images['und'][0]['image_field_caption']['value'],
      ),
      'next' => array(
        'id' => $next_node->nid,
        'type' => $next_node->type,
        'title' => $next_node->title,
        'targetUrl' => $next_node->path['alias'],
        'thumbnail' => image_style_url('focal_point_for_news', $next_node->field_uni_images['und'][0]['uri']),
        'imageCaption' => $next_node->field_uni_images['und'][0]['image_field_caption']['value'],
      ),
    );
    return $output;
  }

  /**
   * @param array $value
   * @return array
   */
  public function getTermValue($value) {
    $output = array();
    $terms = taxonomy_term_load_multiple($value);
    foreach ($terms as $term) {
      $term->id = $term->tid;
      unset($term->tid, $term->vid, $term->description, $term->format, $term->weight, $term->uuid, $term->vocabulary_machine_name, $term->field_iso2);
      // legacy attributes
      foreach (array('field_ims_keyword_id', 'ge_ims_kp_id') as $field) {
        if (isset($term->$field)) {
          unset($term->$field);
        }
      }
      $output[] = $term;
    }
    return $output;
  }

}
