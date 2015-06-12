<?php
/**
 * @file
 * gbif_project.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gbif_project_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-dir_organization-body'
  $field_instances['node-dir_organization-body'] = array(
    'bundle' => 'dir_organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-dir_organization-field_funding_statement'
  $field_instances['node-dir_organization-field_funding_statement'] = array(
    'bundle' => 'dir_organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field will show when the organization is referenced as a funding body.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funding_statement',
    'label' => 'Funding statement',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-dir_organization-field_image'
  $field_instances['node-dir_organization-field_image'] = array(
    'bundle' => 'dir_organization',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Organization image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'gbif_project/images/organizations',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 0,
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__featured' => 0,
          'colorbox__featured_news_slideshow_image' => 0,
          'colorbox__large' => 0,
          'colorbox__linkit_thumb' => 0,
          'colorbox__mainimage' => 0,
          'colorbox__medium' => 0,
          'colorbox__rhimage' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__uses_of_data___main' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_featured' => 0,
          'image_featured_news_slideshow_image' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_mainimage' => 0,
          'image_medium' => 0,
          'image_rhimage' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'image_uses_of_data___main' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-dir_organization-field_url'
  $field_instances['node-dir_organization-field_url'] = array(
    'bundle' => 'dir_organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'We allow multiple URLs here, though the first one will always be used as the official one and will be set as the link target whenever the organization appear on GBIF.org as a link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-project-body'
  $field_instances['node-project-body'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p>[pending project description]</p>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-project-field_co_funder'
  $field_instances['node-project-field_co_funder'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_co_funder',
    'label' => 'Co-Funder',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-project-field_duration'
  $field_instances['node-project-field_duration'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_duration',
    'label' => 'Duration',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-project-field_geo_location'
  $field_instances['node-project-field_geo_location'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_geo_location',
    'label' => 'Geo Location',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'leaflet_widget',
      'settings' => array(
        'geocoder' => array(
          'enabled' => FALSE,
          'handler' => NULL,
        ),
        'map' => array(
          'auto_center' => 1,
          'base_url' => 'http://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png',
          'center' => array(
            'lat' => 0,
            'lng' => 0,
          ),
          'zoom' => 2,
        ),
      ),
      'type' => 'leaflet_widget_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-project-field_internal_notes'
  $field_instances['node-project-field_internal_notes'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Internal notes that won\'t be exposed to site visitors. Create a new one each time a remark is made, by starting with who and when.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internal_notes',
    'label' => 'Internal notes',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-project-field_other_partner'
  $field_instances['node-project-field_other_partner'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_partner',
    'label' => 'Other partner / collaborator',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-project-pj_call'
  $field_instances['node-project-pj_call'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'pj_call',
    'label' => 'Call',
    'required' => 1,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-project-pj_funding_allocated'
  $field_instances['node-project-pj_funding_allocated'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '\'Core funds assigned\' in IMS',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'pj_funding_allocated',
    'label' => 'GBIF funding allocated',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-project-pj_funding_delivered'
  $field_instances['node-project-pj_funding_delivered'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '\'Core funds delivered\' in IMS',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'pj_funding_delivered',
    'label' => 'GBIF funding delivered',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-project-pj_matching_funds'
  $field_instances['node-project-pj_matching_funds'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '\'Matching funds proposed\' in IMS',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'pj_matching_funds',
    'label' => 'Matching funds',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-project-pj_people_text'
  $field_instances['node-project-pj_people_text'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Plain text field for now. Will integrate with CRM in the future. Please make sure it\'s typed correctly and leave no trailing spaces.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'pj_people_text',
    'label' => 'People',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-project-pj_image'
  $field_instances['node-project-pj_image'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'pj_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'gbif_project/images/projects',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-project-field_regions'
  $field_instances['node-project-field_regions'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_regions',
    'label' => 'GBIF Regions',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-project-field_related_events'
  $field_instances['node-project-field_related_events'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_events',
    'label' => 'Related events',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-project-field_related_news'
  $field_instances['node-project-field_related_news'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_news',
    'label' => 'Related news',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-project-field_related_resources'
  $field_instances['node-project-field_related_resources'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_resources',
    'label' => 'Related resources',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'related_resources',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-project-field_status'
  $field_instances['node-project-field_status'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'value' => 'pre_approved',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-project-field_subtitle'
  $field_instances['node-project-field_subtitle'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 120,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-project-tx_lead_participant'
  $field_instances['node-project-tx_lead_participant'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'tx_lead_participant',
    'label' => 'Lead participant',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-project-tx_participant'
  $field_instances['node-project-tx_participant'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'tx_participant',
    'label' => 'Participant',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-project-gr_file'
  $field_instances['node-project-gr_file'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => 'If a file need not to be curated in the resource library, attach it here, and understand that it won\'t be available in the resource library.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'gr_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt doc docx pdf ppt pptx xls xlsx rtf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'gbif_project/files',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 0,
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__featured' => 0,
          'colorbox__featured_news_slideshow_image' => 0,
          'colorbox__large' => 0,
          'colorbox__linkit_thumb' => 0,
          'colorbox__mainimage' => 0,
          'colorbox__medium' => 0,
          'colorbox__rhimage' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__uses_of_data___main' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_featured' => 0,
          'image_featured_news_slideshow_image' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_mainimage' => 0,
          'image_medium' => 0,
          'image_rhimage' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'image_uses_of_data___main' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-project-gr_purpose'
  $field_instances['node-project-gr_purpose'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'gr_purpose',
    'label' => 'Purpose',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'taxonomy_term-participant-field_gbif_membership'
  $field_instances['taxonomy_term-participant-field_gbif_membership'] = array(
    'bundle' => 'participant',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_gbif_membership',
    'label' => 'GBIF Membership',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-participant-field_iso2'
  $field_instances['taxonomy_term-participant-field_iso2'] = array(
    'bundle' => 'participant',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_iso2',
    'label' => 'Country code ISO2',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 2,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-participant-field_member_as_of'
  $field_instances['taxonomy_term-participant-field_member_as_of'] = array(
    'bundle' => 'participant',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_member_as_of',
    'label' => 'Member as of',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '2000:+0',
      ),
      'type' => 'date_popup',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-participant-field_mou_2012_date'
  $field_instances['taxonomy_term-participant-field_mou_2012_date'] = array(
    'bundle' => 'participant',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_mou_2012_date',
    'label' => 'MOU 2012 date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '2010:+3',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'taxonomy_term-participant-field_participant_id'
  $field_instances['taxonomy_term-participant-field_participant_id'] = array(
    'bundle' => 'participant',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_participant_id',
    'label' => 'Participant ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-participant-field_short_name'
  $field_instances['taxonomy_term-participant-field_short_name'] = array(
    'bundle' => 'participant',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_short_name',
    'label' => 'Short name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-participant-field_url'
  $field_instances['taxonomy_term-participant-field_url'] = array(
    'bundle' => 'participant',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL of the hosting institution. Or if a landing page is available for the participant.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_url',
    'label' => 'URL (hosting inst.)',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('\'Core funds assigned\' in IMS');
  t('\'Core funds delivered\' in IMS');
  t('\'Matching funds proposed\' in IMS');
  t('Call');
  t('Co-Funder');
  t('Country code ISO2');
  t('Description');
  t('Duration');
  t('File');
  t('Funding statement');
  t('GBIF Membership');
  t('GBIF Regions');
  t('GBIF funding allocated');
  t('GBIF funding delivered');
  t('Geo Location');
  t('If a file need not to be curated in the resource library, attach it here, and understand that it won\'t be available in the resource library.');
  t('Image');
  t('Internal notes');
  t('Internal notes that won\'t be exposed to site visitors. Create a new one each time a remark is made, by starting with who and when.');
  t('Lead participant');
  t('MOU 2012 date');
  t('Matching funds');
  t('Member as of');
  t('Organization image');
  t('Other partner / collaborator');
  t('Participant');
  t('Participant ID');
  t('People');
  t('Plain text field for now. Will integrate with CRM in the future. Please make sure it\'s typed correctly and leave no trailing spaces.');
  t('Purpose');
  t('Related events');
  t('Related news');
  t('Related resources');
  t('Short name');
  t('Status');
  t('Subtitle');
  t('This field will show when the organization is referenced as a funding body.');
  t('URL');
  t('URL (hosting inst.)');
  t('URL of the hosting institution. Or if a landing page is available for the participant.');
  t('We allow multiple URLs here, though the first one will always be used as the official one and will be set as the link target whenever the organization appear on GBIF.org as a link.');

  return $field_instances;
}
