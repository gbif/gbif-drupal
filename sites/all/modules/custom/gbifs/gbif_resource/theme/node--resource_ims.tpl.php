<?php
/*
 * Old resource_ims template. To be retired.
 */
?>
<div class="container well well-lg well-margin-top<?php print (empty($next_node)) ? ' well-margin-bottom' : ''; ?>">
  <div class="row">
    <div class="col-xs-12">

      <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
        <?php if ((!$page && !empty($title)) || !empty($title_prefix) || !empty($title_suffix) || $display_submitted): ?>
        <div class="row">
					<header class="content-header col-xs-8">
						<h3><?php print render($type_title); ?></h3>
						<?php print render($title_prefix); ?>
						<?php if (!empty($title)): ?>
							<h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
							<?php print render($content['field_alternative_title']); ?>
						<?php endif; ?>
						<?php print render($title_suffix); ?>
					</header>
        </div>
        <?php endif; ?>
        <div class="row">
          <div class="node-content col-xs-8">

            <?php if ($display_submitted && user_is_logged_in()): ?>
	            <div class="submitted">
	              <?php print $submitted; ?>
	          		<?php if (!empty($tabs)): ?>
	          			<?php print render($tabs); ?>
	          		<?php endif; ?>
	            </div>
            <?php endif; ?>

            <?php
              // Hide comments, tags, and links now so that we can render them later.
              hide($content['comments']);
              hide($content['links']);
              hide($content['field_tags']);
              print render($content['body']);
              print render($content['field_authors']);
              print $publisher_w_date;
              print render($content['field_abstract']);
              print render($content['field_bibliographic_citation']);
              print render($content['field_target_audience']);
              print render($content['field_contributors']);
              print render($content['field_rights']);
              print render($content['field_rights_holder']);
            ?>
            <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
	            <footer>
	              <?php print render($content['field_tags']); ?>
	              <?php print render($content['links']); ?>
	              <?php print $node_footer; ?>
	            </footer>
            <?php endif; ?>

          </div>
          <div class="node-sidebar col-xs-3">
            <?php print render($content['field_orc_resource_thumbnail']) ; ?>
						<?php print $sidebar; ?>
          </div>
        </div>
      </article>
    </div>
  </div>
</div> 