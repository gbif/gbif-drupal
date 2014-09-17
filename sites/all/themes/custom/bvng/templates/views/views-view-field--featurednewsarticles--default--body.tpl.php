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
 *
 * @see https://api.drupal.org/comment/49533#comment-49533
 *      The format being views-view-field--[view]--[display]--[field_name].tpl.php
 */

	// Detects whether a content node has URL alias. If so, use the alias as the URL.
	$url = 'node/' . $row->nid;
	$url_alias = drupal_lookup_path('alias', $url);

	if (!empty($url_alias)) {
		$url = $url_alias;
	}
	else {
		$url = 'page/' . $row->nid;
	}


?>
<?php print $output; ?>
<p><a class="readmore" href="/<?php print $url; ?>">Read more</a></p>