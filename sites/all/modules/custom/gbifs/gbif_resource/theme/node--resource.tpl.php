<?php
	drupal_set_title($title);
?>
<article id="node-<?php print $node->nid; ?>" class="container <?php print $classes; ?>">
	<div class="row">
		<section id="event" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
			<div class="row">
				<header class="content-header col-xs-12">
					<h3>Resource</h3>
					<h2><?php print $title; ?></h2>
				</header>
			</div>
			<div class="row">
				<div class="content col-xs-8">

					<?php if ($display_submitted && user_is_logged_in()): ?>
						<div class="submitted">
							<?php print $submitted; ?>
							<?php if (!empty($tabs)): ?>
								<?php print render($tabs); ?>
							<?php endif; ?>
						</div>
					<?php endif; ?>

					<?php print render($content['body']); ?>
					<?php print render($content['gr_abstract']); ?>
					<?php print render($content['gr_citation']); ?>
					<?php print render($content['gr_author']); ?>
					<?php print render($content['gr_contributor']); ?>
					<?php print render($content['gr_publisher']); ?>
					<?php print render($content['gr_right']); ?>
					<?php print render($content['gr_right_holder']); ?>

				</div>
				<aside class="content content-sidebar col-xs-4">
					<?php if (isset($content['service_links'])): ?>
						<?php print render($content['service_links']); ?>
					<?php endif; ?>
					<?php print render($content['gr_resource_type']); ?>
					<?php print render($content['gr_language']); ?>
					<?php print render($content['gr_purpose']); ?>
					<?php print render($content['gr_data_type']); ?>
					<?php print render($content['field_tags']); ?>

					<?php print render($content['gr_image']); ?>
					<?php print render($content['gr_file']); ?>
					<?php print render($content['gr_url']); ?>
				</aside>
			</div>
		</section>
	</div>
</article>