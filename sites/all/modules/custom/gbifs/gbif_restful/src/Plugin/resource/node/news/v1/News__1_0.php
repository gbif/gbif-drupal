<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\news\v1\News__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\news\v1;

use Drupal\restful\Http\Request;
use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Http\HttpHeader;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldBase;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\ResourceNode;

/**
 * Class News__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "news:1.0",
 *   resource = "news",
 *   label = "News",
 *   description = "Export the news with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "news"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class News__1_0 extends ResourceNode implements ResourceInterface {

  /**
   * Overrides Resource::controllersInfo().
   */
  public function controllersInfo() {
    return array(
      '' => array(
        // GET returns a list of entities.
        RequestInterface::METHOD_GET => 'index',
        RequestInterface::METHOD_HEAD => 'index',
        // POST.
        RequestInterface::METHOD_POST => 'create',
        RequestInterface::METHOD_OPTIONS => 'discover',
      ),
      // URL alias
      '^[a-zA-Z]+.*$' => array(
        RequestInterface::METHOD_GET => 'viewUrlAlias'
      ),
      // ID, or a list of IDs delimited by comma.
      '^[0-9]+.*$' => array(
        RequestInterface::METHOD_GET => 'view',
        RequestInterface::METHOD_HEAD => 'view',
        RequestInterface::METHOD_PUT => 'replace',
        RequestInterface::METHOD_PATCH => 'update',
        RequestInterface::METHOD_DELETE => 'remove',
        RequestInterface::METHOD_OPTIONS => 'discover',
      ),
    );
  }


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
   * @param $path
   * @return array newsroom/news/first-bid-grants-for-africa
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
   * Overrides ResourceNode::publicFields().
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

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
    $public_fields['type'] = array(
      'property' => 'type',
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

    // fields

    // By checking that the field exists, we allow re-using this class on
    // different tests, where different fields exist.
    if (field_info_field('field_uni_images')) {
      $public_fields['images'] = array(
        'property' => 'field_uni_images',
        'process_callbacks' => array(
          array($this, 'imageProcess'),
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

    $public_fields['researcherLocation'] = array(
      'property' => 'field_researcher_location',
    );
    $public_fields['linkToResearch'] = array(
      'property' => 'field_link_to_research',
    );
    $public_fields['studyArea'] = array(
      'property' => 'field_study_area',
    );
    $public_fields['numResourceUsed'] = array(
      'property' => 'field_num_rs_used',
    );
    $public_fields['relatedGbifResources'] = array(
      'property' => 'field_related_gbif_resources',
    );
    $public_fields['datasetUuid'] = array(
      'property' => 'field_dataset_uuid',
    );
    $public_fields['dataSource'] = array(
      'property' => 'field_data_source',
    );
    $public_fields['citationInformation'] = array(
      'property' => 'field_citation_information',
    );

    // taxonomy and tags
    $public_fields['gbifArea'] = array(
      'property' => 'field_gbif_area',
    );
    $public_fields['unRegion'] = array(
      'property' => 'field_un_region',
    );
    $public_fields['country'] = array(
      'property' => 'field_country',
    );
    $public_fields['tagsAboutGbif'] = array(
      'property' => 'tx_about_gbif',
    );
    $public_fields['tagsCapacityEnhancement'] = array(
      'property' => 'tx_capacity_enhancement',
    );
    $public_fields['tagsAudience'] = array(
      'property' => 'tx_audience',
    );
    $public_fields['tagsDataUse'] = array(
      'property' => 'tx_data_use',
    );
    $public_fields['tagsInformatics'] = array(
      'property' => 'tx_informatics',
    );
    $public_fields['tagsDataType'] = array(
      'property' => 'field_tx_data_type',
    );
    $public_fields['tagsPurpose'] = array(
      'property' => 'field_tx_purpose',
    );
    $public_fields['tagsTopic'] = array(
      'property' => 'tx_topic',
    );
    $public_fields['tags'] = array(
      'property' => 'tx_tags',
    );


    $public_fields['user'] = array(
      'property' => 'author',
      'resource' => array(
        // The name of the resource to map to.
        'name' => 'users',
        // Determines if the entire resource should appear, or only the ID.
        'fullView' => TRUE,
        'majorVersion' => 1,
        'minorVersion' => 0,
      ),
    );

    $public_fields['url_alias'] = array(
      'callback' => '\Drupal\gbif_restful\Plugin\resource\node\news\v1\News__1_0::getUrlAlias'
    );

    return $public_fields;
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

  public function getUrlAlias(DataInterpreterInterface $interpreter) {
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->getIdentifier();
    $node = node_load($nid);
    return $node->path['alias'];
  }

}
