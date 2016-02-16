<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */

/**
 * Override the default file icon with conventional download arrow.
 * BKO: Be sure fo observe the style settings in the view export.
 */
if (!empty($row->_field_data['gr_file']['entity']->gr_file)) {
	$lang_code = $row->_entity_properties['entity object']->language;
	$link_title = t('Download') . ' ' . $row->_field_data['gr_file']['entity']->title;
	$link_path = 'system/files_force' . substr($row->_field_data['gr_file']['entity']->gr_file['und'][0]['uri'],  8); // Strip off file schema. gr_file is not internationalized.
	$img = theme_image(
		array(
			'path' => drupal_get_path('module', 'gbif_resource') . '/icons/download164.png',
			'width' => 16,
			'height' => 16,
			'alt' => $link_title,
			'title' => $link_title,
			'attributes' => array(
				'class' => 'file-icon',
			),
		)
	);
	$link = l($img, $link_path, array(
		'html' => TRUE,
		'attributes' => array(
			'type' => $row->_field_data['gr_file']['entity']->gr_file['und'][0]['filemime'],
		),
		'query' => array(
			'download' => 1,
		),
	));
	$output = '<span class="file">' . $link . '</span>';
}
?>
<?php
	print $output;
?>
