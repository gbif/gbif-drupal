<?php
	$metrics_title = t('Data published by ') . gbif_participant_country_lookup($iso2, 'iso2', 'title');
  drupal_set_title($html['from_title']);
?>
<article id="country-data-publishing" class="container">
	<div class="row">

			<?php if ($html['count'] == NULL): ?>
			<section id="activity" class="col-xs-12 well well-lg no-activity">
				<div class="row">
					<div class="content">
						<div class="notice-icon"></div>
						<h3><?php print $html['no_activity_title']; ?></h3>
						<p><?php print $html['no_activity_text']; ?></p>
					</div>
				</div>
			</section>
			<?php endif; ?>

			<?php if ($html['count'] > 0): ?>
      <section id="data-from" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
				<div id="map-from" class="country-map">
					<iframe id="map-publishing" name="map-publishing" src="<?php print $env['gbif_api_base_url']; ?>/v1/map/index.html?type=PUBLISHING_COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
				</div>
				<div class="block-map-sidebar">
					<div class="row">
						<header class="content-header sidebar-header-country-map col-xs-4">
							<h2><?php print $html['from_title']; ?></h2>
						</header>
					</div>
					<div class="row">
						<div class="col-xs-8">
						</div>
						<div class="content content-sidebar map-right col-xs-4">
							<?php print $html['from']; ?>
						</div>
					</div>
				</div>
        <a id="map-publishing-link">View records shown on the map</a>
      </section>
			<?php endif; ?>

			<section id="latest-datasets-published" class="col-xs-12 well well-lg">
				<div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $html['title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print $html['latest_dataset']; ?>
					</div>
				</div>
			</section>

			<?php if ($html['count'] > 0): ?>
			<section id="countries-origin" class="col-xs-12 well well-lg">
				<div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $html['countries_title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print $html['countries_list']; ?>
					</div>
				</div>
			</section>
			<?php endif; ?>

		<?php if ($html['trends']['availability'] == TRUE): ?>
			<section id="trends-publishing" class="col-xs-12 well well-lg">
				<div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $html['trends']['trends_title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<?php print $html['trends']['section_trends']; ?>
				</div>
			</section>
		<?php endif; ?>

		<?php if ($html['count'] > 0): ?>
			<section id="data-published-by" class="col-xs-12 well well-lg">
				<div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $metrics_title; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print theme('gp_metrics', array('iso2' => $iso2, 'repatri_mode' => 'from')); ?>
					</div>
				</div>
			</section>
		<?php endif; ?>

	</div>
</article>
