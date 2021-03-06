<?php
	drupal_set_title($title);
?>
<article id="node-<?php print $node->nid; ?>" class="container <?php print $classes; ?>">
	<div class="row">
		<section id="event" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
			<div class="row">
				<header class="content-header col-xs-12">
					<h3>Event</h3>
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
					<?php print render($content['ge_audience']); ?>
					<?php print render($content['ge_contact_info']); ?>
					<?php print render($content['ge_resources']); ?>
					<?php print render($content['ge_participants']); ?>
					<?php // print render($content['field_geo_location']); ?>
				</div>
				<aside class="content content-sidebar col-xs-4">
					<?php if (isset($content['service_links'])): ?>
						<?php print render($content['service_links']); ?>
					<?php endif; ?>
					<?php print render($content['ge_date_text']); ?>
					<?php if ($content['ge_date_ical'][0]['past_events'] != TRUE): ?>
						<?php print render($content['ge_date_ical']); ?>
					<?php endif; ?>
					<?php print render($content['ge_venue']); ?>
					<?php print render($content['ge_location']); ?>
					<?php print render($content['ge_language']); ?>
					<?php print $event_image; ?>
				</aside>
			</div>
		</section>
	</div>
</article>