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
 *
 * @see gbif_event_preprocess_views_view_field().
 * @todo Fix the $template_file sites/all//modules/custom/gbifs/gbif_event/theme/views-view-field--events--latest4-fp--ims_date.tpl.php, which has two slashes in the path.
 */
?>
<div class="calendar-thumbnail">
	<div class="month"><?php echo $variables['month_year']['month'];?></div>
	<div class="day"><?php echo $variables['month_year']['day'];?></div>
</div>
