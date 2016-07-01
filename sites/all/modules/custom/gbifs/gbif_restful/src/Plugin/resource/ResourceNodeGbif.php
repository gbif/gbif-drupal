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
      'self' => file_create_url($value['uri']),
      'filemime' => $value['filemime'],
      'filesize' => $value['filesize'],
      'width' => $value['width'],
      'height' => $value['height'],
      'styles' => $value['image_styles'],
    );
  }

  //@todo Consider redirection in this field
  public function getTargetUrl(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->getIdentifier();
    $node = node_load($nid);
    return $node->path['alias'];
  }

}
