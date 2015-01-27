<?php
/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
  drupal_set_title($view->get_title());
  $param = drupal_get_query_parameters();
?>

<div class="row">
  <div class="view-column col-xs-8">

    <?php if ($exp_widgets): ?>
      <div class="view-widgets-search">
        <?php print $exp_widgets; ?>
        <a href="/resources/archive/rss"><img class="rss-icon" src="/sites/all/themes/custom/bvng/images/rss-feed.gif"/></a>
      </div>
    <?php endif; ?>

    <?php if ($featured_block && gbif_resource_show_featured_resources() == TRUE): ?>
      <div class="block-featured-resources">
        <?php print $featured_block; ?>
      </div>
    <?php endif; ?>

    <?php if (gbif_resource_show_featured_resources() == FALSE): ?>
    <div class="<?php print $classes; ?>">
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <?php print $title; ?>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($header): ?>
        <div class="view-header">
          <?php print $header; ?>
        </div>
      <?php endif; ?>

      <?php if ($exp_widgets): ?>
        <div class="view-widgets">
          <h2 class="count"><?php print $result_count; ?></h2>
          <div class="views-widgets-sorts"><?php print $exp_widgets; ?></div>
        </div>
      <?php endif; ?>

      <?php if ($exposed): ?>
        <div class="view-filters">
          <?php print $exposed; ?>
        </div>
      <?php endif; ?>

      <?php if ($attachment_before): ?>
        <div class="attachment attachment-before">
          <?php print $attachment_before; ?>
        </div>
      <?php endif; ?>

      <?php if ($rows): ?>
        <div class="view-content">
          <?php print $rows; ?>
        </div>
      <?php elseif ($empty): ?>
        <div class="view-empty">
          <?php print $empty; ?>
        </div>
      <?php endif; ?>

      <?php if ($attachment_after): ?>
        <div class="attachment attachment-after">
          <?php print $attachment_after; ?>
        </div>
      <?php endif; ?>
			<?php if ($pager): ?>
				<hr>
				<?php print $pager; ?>
			<?php endif; ?>
    </div>
    <?php endif; ?>
  </div>
	<div class="sidebar-filter resource-filter col-xs-4">
    <div class="resource-filter-header">
      <h2>Filters</h2>
      <span class="clear-all"><a href="/resources">clear all</a></span>
    </div>

		<?php print $facet_resource_type; ?>
		<?php print $facet_purpose; ?>
		<?php print $facet_language; ?>
		<?php print $facet_data_type; ?>
		<?php print $facet_tags; ?>
	</div>

    <?php if ($footer): ?>
      <div class="view-footer">
        <?php print $footer; ?>
      </div>
    <?php endif; ?>

    <?php if ($feed_icon): ?>
      <div class="feed-icon">
        <?php print $feed_icon; ?>
      </div>
    <?php endif; ?>

</div><?php /* class view */ ?>