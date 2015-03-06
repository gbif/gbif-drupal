<?php
	$metrics_title = t('Occurrence located in ') . gbif_participant_country_lookup($iso2, 'iso2', 'title');
  drupal_set_title($html['about_title']);
?>
<article id="country-data-about" class="container">
	<div class="row">
      <section id="data-about" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
				<div id="map-about" class="country-map">
					<iframe id="mapAboutFrame" name="map" src="<?php print $env['gbif_api_base_url']; ?>/v1/map/index.html?type=COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
				</div>
				<div class="block-map-sidebar">
					<div class="row">
						<header class="content-header sidebar-header-country-map col-xs-4">
							<h2><?php print $html['about_title']; ?></h2>
						</header>
					</div>
					<div class="row">
						<div class="col-xs-8">
						</div>
						<div class="content content-sidebar map-right col-xs-4">
							<?php print $html['about']; ?>
							<a id="geoOccurrenceSearchAbout">View records shown on the map</a>
						</div>
					</div>
				</div>
      </section>

			<section id="largest-occurrence-datasets" class="col-xs-12 well well-lg">
				<div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $html['largest_datasets_title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print $html['largest_datasets_list']; ?>
					</div>
				</div>
			</section>

			<section id="countries-publishing-data-about" class="col-xs-12 well well-lg">
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

		<?php if ($html['trends']['availability'] == TRUE): ?>
			<section id="trends-about" class="col-xs-12 well well-lg">
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

			<section id="occurrence-located-in" class="col-xs-12 well well-lg">
				<div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $metrics_title; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print theme('gp_metrics', array('iso2' => $iso2, 'repatri_mode' => 'about')); ?>
					</div>
				</div>
			</section>

	</div>
</article>
