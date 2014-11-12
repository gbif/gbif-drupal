<?php
/*
 * This file is not used since all relevant views are using HTML list.
 * This template is picked up by unformatted list.
 */
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="node-list">
    <?php if (!empty($title)): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

    <?php if ($display_submitted && user_is_logged_in()): ?>
    <div class="submitted">
      <?php print $submitted; ?>
  		<?php if (!empty($tabs)): ?>
  			<?php print render($tabs); ?>
  		<?php endif; ?>
    </div>
    <?php endif; ?>

    <?php print render($content['body']); ?>

    <?php if (!empty($content['ge_date_text']) || !empty($content['ge_location'])): ?>
    <footer>
			<br>
      <?php if (!empty($content['ge_location'])): ?>
				<?php print render($content['ge_location']); ?>
      <?php endif; ?>
		</footer>
    <?php endif; ?>

  </div>
</article>
