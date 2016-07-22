<?php

/**
 * Contains \Drupal\gbif_restful\Plugin\resource\lookup\DatasetRefLookup__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\lookup;

use Drupal\gbif_restful\Plugin\Resource\ResourceNodeGbif;
use Drupal\restful\Plugin\resource\ResourceInterface;
use \EntityFieldQuery;

/**
 * Class DatasetRefLookup__1_0
 * @package Drupal\gbif_restful\Plugin\resource\lookup
 *
 * @Resource(
 *   name = "dataset-ref-lookup:1.0",
 *   resource = "dataset-ref-lookup",
 *   label = "Dataset reference Lookup",
 *   description = "Gets referred entities from a given dataset UUID.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0,
 *   class = "DatasetRefLookup__1_0"
 * )
 */

class DatasetRefLookup__1_0 extends ResourceNodeGbif implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function dataProviderClassName() {
    return '\\Drupal\\restful\\Plugin\\resource\\DataProvider\\DataProviderEntity';
  }

  /**
   * {@inheritdoc}
   */
  public function view($path) {

    $path = trim($path);
    $ids = array();

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->fieldCondition('field_dataset_uuid', 'value', $path, '=');
    $results = $query->execute();
    if (count($results) > 0 && isset($results['node'])) {

      foreach ($results['node'] as $nid => $item) {
        $ids[] = $nid;
      }

    }

    // If there is only one ID then use 'view'. Else, use 'viewMultiple'. The
    // difference between the two is that 'view' allows access denied
    // exceptions.
    if (count($ids) == 1) {
      return array($this->getDataProvider()->view($ids[0]));
    }
    else {
      return $this->getDataProvider()->viewMultiple($ids);
    }
  }

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    if (field_info_field('field_uni_images')) {
      $public_fields['images'] = array(
        'property' => 'field_uni_images',
        'process_callbacks' => array(
          array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
        ),
        'image_styles' => array(
          'focal_point_for_news',
          'square_thumbnail',
          'masthead__mobile',
          'masthead__tablet',
          'masthead__laptop',
          'masthead__desktop',
        ),
      );
    }

    return $public_fields;
  }

}