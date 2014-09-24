<?php
/**
 * @file Definition of fields for use in content type creation.
 * @link For image field: http://www.monarchdigital.com/blog/2013-08-09/programmatically-creating-fields-drupal-7
 * @link http://steindom.com/articles/exporting-and-creating-field-definitions-drupal-7
 */

function _ge_create_custom_fields() {
	foreach (_ge_installed_fields() as $field) {
		field_create_field($field);
	}
	foreach (_ge_installed_instances() as $instance) {
		field_create_instance($instance);
	}
}

function _ge_delete_custom_fields() {
	foreach (array_keys(_ge_installed_fields()) as $field) {
		field_delete_field($field);
	}
	$instances = field_info_instances('node', 'event');
	foreach ($instances as $instance_name => $field_instance) {
		field_delete_instance($field_instance);
	}
}

/**
 * Helper function for defining fields.
 * 'ge' stands for GBIF Event. All fields created by this module are prefixed with it.
 */
function _ge_installed_fields() {
	// For the __kp_id and date from the IMS table, the field is created in gbif_ims module
	// so we only create an instance in this module.
	$fields = array(
		'ge_desc_long' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_desc_long',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '1',
			'type' => 'text_long',
		),
		'ge_audience' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_audience',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '1',
			'type' => 'text_long',
		),
		'ge_contact_info' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_contact_info',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '1',
			'type' => 'text_long',
		),
		'ge_resources' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_resources',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '1',
			'type' => 'text_long',
		),
		'ge_date_ical' => array(
			'active' => '1',
			'bundles' => array(
				'node' => array(
					'event',
				),
			),
			'cardinality' => '1',
			'columns' => array(
				'value' => array(
					'type' => 'datetime',
					'mysql_type' => 'datetime',
					'pgsql_type' => 'timestamp without time zone',
					'sqlite_type' => 'varchar',
					'sqlsrv_type' => 'smalldatetime',
					'not null' => FALSE,
					'sortable' => TRUE,
					'views' => TRUE,
				),
				'value2' => array(
					'type' => 'datetime',
					'mysql_type' => 'datetime',
					'pgsql_type' => 'timestamp without time zone',
					'sqlite_type' => 'varchar',
					'sqlsrv_type' => 'smalldatetime',
					'not null' => FALSE,
					'sortable' => TRUE,
					'views' => FALSE,
				),
			),
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_date_ical',
			'foreign keys' => array(),
			'indexes' => array(),
			'locked' => '0',
			'module' => 'date',
			'settings' => array(
				'granularity' => array(
					'month' => 'month',
					'day' => 'day',
					'year' => 'year',
					'hour' => 0,
					'minute' => 0,
					'second' => 0,
				),
				'tz_handling' => 'none',
				'timezone_db' => '',
				'cache_enabled' => 1,
				'cache_count' => '4',
				'repeat' => '0',
				'todate' => 'optional',
			),
			'storage' => array(
				'type' => 'field_sql_storage',
				'settings' => array(),
				'module' => 'field_sql_storage',
				'active' => '1',
				'details' => array(
					'sql' => array(
						'FIELD_LOAD_CURRENT' => array(
							'field_data_ge_date_ical' => array(
								'value' => 'ge_date_ical_value',
								'value2' => 'ge_date_ical_value2',
							),
						),
						'FIELD_LOAD_REVISION' => array(
							'field_revision_ge_date_ical' => array(
								'value' => 'ge_date_ical_value',
								'value2' => 'ge_date_ical_value2',
							),
						),
					),
				),
			),
			'translatable' => '0',
			'type' => 'datetime',
		),
		'ge_date_text' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_date_text',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '0',
			'type' => 'text_long',
		),
		'ge_venue' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_venue',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '1',
			'type' => 'text_long',
		),
		'ge_location' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_location',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '0',
			'type' => 'text_long',
		),
		'ge_venue_country' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_venue_country',
			'foreign keys' => array(
				'tid' => array(
					'columns' => array(
						'tid' => 'tid',
					),
					'table' => 'taxonomy_term_data',
				),
			),
			'indexes' => array(
				'tid' => array(
					0 => 'tid',
				),
			),
			'locked' => '1',
			'module' => 'taxonomy',
			'settings' => array(
				'allowed_values' => array(
					0 => array(
						'vocabulary' => 'countries',
						'parent' => '0',
					),
				),
			),
			'translatable' => '0',
			'type' => 'taxonomy_term_reference',
		),
		// Should be controlled vocabulary.
		'ge_status' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_status',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(
				'max_length' => '255',
			),
			'translatable' => '0',
			'type' => 'text',
		),
		// Should be controlled vocabulary.
		'ge_language' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_language',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '1',
			'type' => 'text_long',
		),
		'ge_participants' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_participants',
			'foreign keys' => array(
				'format' => array(
					'columns' => array(
						'format' => 'format',
					),
					'table' => 'filter_format',
				),
			),
			'indexes' => array(
				'format' => array(
					0 => 'format',
				),
			),
			'locked' => '1',
			'module' => 'text',
			'settings' => array(),
			'translatable' => '0',
			'type' => 'text_long',
		),
		'ge_organising_participants' => array(
			'active' => '1',
			'cardinality' => FIELD_CARDINALITY_UNLIMITED,
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_organising_participants',
			'foreign keys' => array(
				'tid' => array(
					'columns' => array(
						'tid' => 'tid',
					),
					'table' => 'taxonomy_term_data',
				),
			),
			'indexes' => array(
				'tid' => array(
					0 => 'tid',
				),
			),
			'locked' => '1',
			'module' => 'taxonomy',
			'settings' => array(
				'allowed_values' => array(
					0 => array(
						'vocabulary' => 'countries',
						'parent' => '0',
					),
				),
			),
			'translatable' => '0',
			'type' => 'taxonomy_term_reference',
		),
		'ge_image' => array(
			'active' => '1',
			'cardinality' => '1',
			'deleted' => '0',
			'entity_types' => array(),
			'field_name' => 'ge_image',
			'foreign keys' => array(
				'fid' => array(
					'columns' => array(
						'fid' => 'fid',
					),
					'table' => 'file_managed',
				),
			),
			'indexes' => array(
				'fid' => array(
					0 => 'fid',
				),
			),
			'locked' => '0',
			'module' => 'image',
			'settings' => array(
				'default_image' => 0,
				'uri_scheme' => 'public',
			),
			'translatable' => '0',
			'type' => 'image',
		),
	);
	return $fields;
}

/**
 * Settings for fields. Note that entity_type, bundle and weight are handled in
 * the end to reduce the length of this function.
 * @return array
 */
function _ge_installed_instances() {
	$t = get_t();
	$instances = array(
		'body' => array(
			'label' => $t('Summary'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => 'Short description from the IMS.',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '3',
				),
				'search_index' => array(
					'label' => 'hidden',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '0',
				),
				'teaser' => array(
					'label' => 'hidden',
					'module' => 'smart_trim',
					'settings' => array(
						'more_link' => '0',
						'more_text' => 'Read more',
						'summary_handler' => 'full',
						'trim_length' => '580',
						'trim_options' => array(
							'text' => 0,
						),
						'trim_suffix' => '...',
						'trim_type' => 'chars',
					),
					'type' => 'smart_trim_format',
					'weight' => '0',
				),
			),
			'field_name' => 'body',
			'required' => 0,
			'settings' => array(
				'display_summary' => 1,
				'text_processing' => '1',
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'rows' => '20',
					'summary_rows' => 5,
				),
				'type' => 'text_textarea_with_summary',
			),
		),
		'ge_desc_long' => array(
			'label' => $t('Description'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => 'Long description from the IMS.',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '2',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '2',
				),
			),
			'field_name' => 'ge_desc_long',
			'required' => 0,
			'settings' => array(
				'text_processing' => '1',
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'rows' => '5',
				),
				'type' => 'text_textarea',
			),
		),
		'ims_kp_id' => array(
			'label' => $t('Event ID'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => 'This ID links to the IMS and cannot be changed.',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'settings' => array(),
					'type' => 'hidden',
					'weight' => '1',
				),
			),
			'field_name' => 'ims_kp_id',
			'required' => 1,
			'settings' => array(
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 0,
				'module' => 'number',
				'settings' => array(),
				'type' => 'number',
			),
		),
		'ge_audience' => array(
			'label' => $t('Audience'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '2',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '2',
				),
			),
			'field_name' => 'ge_audience',
			'required' => 0,
			'settings' => array(
				'text_processing' => '1',
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'rows' => '5',
				),
				'type' => 'text_textarea',
			),
		),
		'ge_contact_info' => array(
			'label' => $t('Contact information'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '3',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '3',
				),
			),
			'field_name' => 'ge_contact_info',
			'required' => 0,
			'settings' => array(
				'text_processing' => '1',
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'rows' => '5',
				),
				'type' => 'text_textarea',
			),
		),
		'ge_resources' => array(
			'label' => $t('Resources'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '4',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '4',
				),
			),
			'field_name' => 'ge_resources',
			'required' => 0,
			'settings' => array(
				'text_processing' => '1',
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'rows' => '5',
				),
				'type' => 'text_textarea',
			),
		),
		'ge_participants' => array(
			'label' => $t('Participants'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '5',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '5',
				),
			),
			'field_name' => 'ge_participants',
			'required' => 0,
			'settings' => array(
				'text_processing' => '1',
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'rows' => '5',
				),
				'type' => 'text_textarea',
			),
		),
		'ims_date' => array(
			'deleted' => '0',
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
					'weight' => 17,
				),
				'search_index' => array(
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
					'weight' => '11',
				),
				'teaser' => array(
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
					'weight' => '2',
				),
			),
			'field_name' => 'ims_date',
			'label' => $t('Event date'),
			'required' => 0,
			'settings' => array(
				'default_value' => 'now',
				'default_value2' => 'same',
				'default_value_code' => '',
				'default_value_code2' => '',
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'date',
				'settings' => array(
					'display_all_day' => 0,
					'increment' => '15',
					'input_format' => 'd/m/Y - g:i:sa',
					'input_format_custom' => '',
					'label_position' => 'above',
					'repeat_collapsed' => 0,
					'text_parts' => array(),
					'year_range' => '-3:+3',
				),
				'type' => 'date_popup',
			),
		),
		'ge_date_ical' => array(
			'label' => $t('Add to calendar'),
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'hidden',
					'type' => 'addtocal_view',
					'weight' => '18',
					'settings' => array(
						'location_field' => 'ge_location',
						'description_field' => 'body',
						'past_events' => 1,
						'format_type' => 'short',
						'fromto' => 'both',
						'multiple_number' => '',
						'multiple_from' => '',
						'multiple_to' => '',
					),
					'module' => 'addtocal',
				),
				'teaser' => array(
					'type' => 'hidden',
					'label' => 'above',
					'settings' => array(),
					'weight' => 0,
				),
			),
			'field_name' => 'ge_date_ical',
			'required' => 0,
			'settings' => array(
				'default_value' => 'now',
				'default_value_code' => '',
				'default_value2' => 'same',
				'default_value_code2' => '',
				'mediafront' => array(
					'field_type' => '0',
					'media_type' => 'media',
					'preview' => '0',
					'thumbnail' => '0',
					'custom' => '',
				),
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'type' => 'date_popup',
				'module' => 'date',
				'active' => 1,
				'settings' => array(
					'input_format' => 'd/m/Y - g:i:sa',
					'input_format_custom' => '',
					'year_range' => '-3:+3',
					'increment' => '15',
					'label_position' => 'above',
					'text_parts' => array(),
					'display_all_day' => 0,
					'repeat_collapsed' => 0,
				),
			),
		),
		'ge_date_text' => array(
			'label' => $t('Date'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '13',
				),
				'teaser' => array(
					'label' => 'hidden',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '13',
				),
			),
			'field_name' => 'ge_date_text',
			'required' => 0,
			'settings' => array(
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array('size' => '60'),
				'type' => 'text_textfield',
			),
		),
		'ge_venue' => array(
			'label' => $t('Venue'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '4',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '4',
				),
			),
			'field_name' => 'ge_venue',
			'required' => 0,
			'settings' => array(
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array('size' => '60'),
				'type' => 'text_textfield',
			),
		),
		'ge_location' => array(
			'label' => $t('Location'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => '',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '13',
				),
				'teaser' => array(
					'label' => 'hidden',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '0',
				),
			),
			'field_name' => 'ge_location',
			'required' => 0,
			'settings' => array(
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array('size' => '120'),
				'type' => 'text_textfield',
			),
		),
		'ge_venue_country' => array(
			'label' => $t('Venue country'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => 'The country where the event is held.',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'taxonomy',
					'settings' => array(),
					'type' => 'taxonomy_term_reference_link',
					'weight' => '15',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'taxonomy',
					'settings' => array(),
					'type' => 'taxonomy_term_reference_link',
					'weight' => '15',
				),
			),
			'entity_type' => 'node',
			'field_name' => 'ge_venue_country',
			'required' => 0,
			'settings' => array(
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'options',
				'settings' => array(
					'apply_chosen' => '',
				),
				'type' => 'options_select',
			),
		),
		'ge_status' => array(
			'label' => $t('Status'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => t('The status of the event. Available values are "Cancelled", "Closed", "Finished (activities pending)", "In progress", "Planned", "Scheduled", "Subscription closed" and "Subscription open".'),
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '6',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '6',
				),
			),
			'field_name' => 'ge_status',
			'required' => 0,
			'settings' => array(
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'size' => '60',
				),
				'type' => 'text_textfield',
			),
		),
		'ge_language' => array(
			'label' => $t('Language'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => $t('The language used during the event.'),
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '7',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'text',
					'settings' => array(),
					'type' => 'text_default',
					'weight' => '7',
				),
			),
			'field_name' => 'ge_language',
			'required' => 0,
			'settings' => array(),
			'widget' => array(
				'active' => 1,
				'module' => 'text',
				'settings' => array(
					'size' => '60',
				),
				'type' => 'text_textfield',
			),
		),
		'ge_organising_participants' => array(
			'label' => $t('Organising participant(s)'),
			'default_value' => NULL,
			'deleted' => '0',
			'description' => 'GBIF Participant(s) that are involved in organising this event.',
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'taxonomy',
					'settings' => array(),
					'type' => 'taxonomy_term_reference_link',
					'weight' => '15',
				),
				'search_index' => array(
					'label' => 'above',
					'module' => 'taxonomy',
					'settings' => array(),
					'type' => 'taxonomy_term_reference_link',
					'weight' => '15',
				),
			),
			'field_name' => 'ge_organising_participants',
			'required' => 0,
			'settings' => array(
				'user_register_form' => FALSE,
			),
			'widget' => array(
				'active' => 1,
				'module' => 'taxonomy',
				'settings' => array(
					'autocomplete_path' => 'taxonomy/autocomplete',
					'size' => 60,
				),
				'type' => 'taxonomy_autocomplete',
			),
		),
		'ge_image' => array(
			'label' => t('Event image'),
			'deleted' => '0',
			'description' => t('The photo or icon of this event.'),
			'display' => array(
				'default' => array(
					'label' => 'above',
					'module' => 'image',
					'settings' => array(
						'image_link' => '',
						'image_style' => '',
					),
					'type' => 'image',
					'weight' => 17,
				),
				'search_index' => array(
					'label' => 'above',
					'settings' => array(),
					'type' => 'hidden',
					'weight' => 0,
				),
				'teaser' => array(
					'label' => 'above',
					'settings' => array(),
					'type' => 'hidden',
					'weight' => 0,
				),
			),
			'entity_type' => 'node',
			'field_name' => 'ge_image',
			'required' => 0,
			'settings' => array(
				'alt_field' => 1,
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
						'value' => 'gbif_event/images',
					),
					'retroactive_update' => 0,
				),
				'filefield_paths_enabled' => 1,
				'max_filesize' => '',
				'max_resolution' => '',
				'mediafront' => array(
					'custom' => '',
					'field_type' => '0',
					'media_type' => 'media',
					'preview' => '0',
					'thumbnail' => '0',
				),
				'min_resolution' => '',
				'title_field' => 1,
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
							'absolute' => '0',
							'attach_mode' => 'move',
							'path' => 'file_attach',
						),
						'source_imce' => array(
							'imce_mode' => '0',
						),
						'source_reference' => array(
							'autocomplete' => '0',
						),
					),
					'imce_filefield_on' => 0,
					'insert' => 0,
					'insert_absolute' => 0,
					'insert_class' => '',
					'insert_default' => 'auto',
					'insert_styles' => array(
						'auto' => 'auto',
						'colorbox__event_image_aside' => 0,
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
						'image_event_image_aside' => 0,
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
			),
		),
	);

	// Insert common values.
	// Insert weight so it's ordered according to the order above.
	$i = 3; // Start from 3 so we don't have to alter the node form.
	foreach ($instances as &$instance) {
		if (!isset($instance['entity_type'])) $instance['entity_type'] = 'node';
		if (!isset($instance['bundle'])) $instance['bundle'] = 'event';
		$instance['widget']['weight'] = $i;
		$i++;
	}
	return $instances;
}