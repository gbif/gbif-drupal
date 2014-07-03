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
 *
 * @todo The newsletter form should be integrated in Drupal,
 *       hence we can monitor the subscription from within Drupal, and use jangomail
 *       for the delivery.
 */
?>
<div class="container well well-lg well-margin-bottom">
  <div class="row news-summary">
    <header class="col-md-12">
      <h2><?php print $view->get_title(); ?></h2>
      <h3><?php print $view->description; ?></h3>
    </header>
  </div>
  <div class="row">
    <div class="view-column-summary col-md-8">
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
        <hr>
        <?php if ($pager): ?>
          <?php print $pager; ?>
        <?php endif; ?>
        <?php if ($more): ?>
          <?php print $more; ?>
        <?php endif; ?>
      </div>
    </div>
    <div class="sidebar-signup col-md-3">
      <div class="subscribe">
        <a id="signup"></a>
        <h4>GBITS NEWSLETTER</h4>
        <p>Download the latest issue of our bimonthly newsletter <a href="/newsroom/newsletter">here</a> or keep up to date with the latest GBIF news by signing up to GBits</p>
        <form id="subscribe-newsletter" method="post" action="http://www.jangomail.com/OptIn.aspx?RedirectURLSuccess=http%3A%2F%2Fwww.gbif.org%2Fpage%2F2998">
          	<input name="optinform$txtUniqueID" id="optinform_txtUniqueID" value="6f1fe36b-52ee-4ac3-a83f-98f800f3c16c" type="hidden">
		        <input name="optinform$Field0" id="optinform_Field0" type="text" placeholder="Enter your email (required)" class="form-control">
		        <input name="optinform$Field5649548" id="optinform_Field5649548" type="text" placeholder="First Name (required)" class="form-control">
		        <input name="optinform$Field5649560" id="optinform_Field5649560" type="text" placeholder="Last Name (required)" class="form-control">
  		      <input type="submit" id="optinform_btnSubscribe" name="optinform$btnSubscribe" class="form-submit btn btn-primary" value="Subscribe" />
        </form>
      </div>
    </div>
  </div>
  <div class="row">
    <div class="col-md-12">
      <a href="/newsroom/news" class="btn btn-primary">More GBIF news</a>
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
    </div>
  </div>
  <?php /* class view */ ?>
</div>