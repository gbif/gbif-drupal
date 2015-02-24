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
 * Provide the external link with icon for resource type "Link" and "Tool".
 * BKO: Be sure fo observe the style settings in the view export.
 */

if (!empty($row->field_gr_url)) {
	$lang_code = $row->_field_data['nid']['entity']->language;
	$link_title = $row->_field_data['nid']['entity']->title;
	$link_path = $row->field_gr_url[0]['raw']['value'];
	$img = theme_image(
		array(
			'path' => drupal_get_path('module', 'gbif_resource') . '/icons/external16.png',
			'width' => 16,
			'height' => 16,
			'alt' => $link_title,
			'title' => $link_title,
			'attributes' => array(
				'class' => 'external-link-icon',
			),
		)
	);
	$link = l($img, $link_path, array(
		'html' => TRUE,
		'attributes' => array(
			'target' => '_blank',
		),
	));
	$output = '<span class="external-link">' . $link . '</span>';
}
?>
<?php
	print $output;
?>
