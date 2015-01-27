<?php
	drupal_set_title($title);
?>
<div class="back-to-previous">
	<div class="container">
		<div class="row">
			<p>&lt; <u><a href="<?php print $referer_url; ?>">Back to resource library</a></u></p>
		</div>
	</div>
</div>
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
					<?php print render($content['gr_rights']); ?>
					<?php print render($content['gr_rights_holder']); ?>

					<?php if (isset($content['service_links'])): ?>
						<?php print render($content['service_links']); ?>
					<?php endif; ?>
				</div>
				<aside class="content content-sidebar col-xs-4">
					<?php print render($content['gr_image']); ?>
					<?php print render($content['gr_file']); ?>

					<?php if ($show_gr_url == TRUE): ?>
						<?php print render($content['gr_url']); ?>
					<?php endif; ?>

					<?php print render($content['gr_resource_type']); ?>
					<?php print render($content['gr_language']); ?>
					<?php print render($content['gr_purpose']); ?>
					<?php print render($content['gr_data_type']); ?>
					<?php print render($content['field_tags']); ?>

				</aside>
			</div>
		</section>
	</div>
</article>