<?php
	$metrics_title = t('Data published by ') . gbif_participant_country_lookup($iso2, 'iso2', 'title');
?>
<article id="country-data-publishing" class="container">
	<div class="row">
      <section id="data-from" class="col-md-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
				<div class="row">
					<header class="content-header col-md-8">

					</header>
					<header class="content-header sidebar-header-country col-md-4">
						<h2>Data from <?php print $participant_ims->participant_name_full; ?></h2>
					</header>
				</div>
				<div class="row">
					<div id="map-from" class="country-map col-md-8">
						<iframe id="mapByFrame" name="map" src="http://api.gbif.org/v1/map/index.html?type=PUBLISHING_COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
					</div>
					<div class="content content-sidebar col-md-4">
						<?php print $html['from']; ?>
					</div>
				</div>
      </section>

			<section id="latest-datasets-published" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Latest datasets published</h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print $html['latest_dataset']; ?>
					</div>
				</div>
			</section>

			<section id="countries-origin" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2><?php print $html['countries_title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print $html['countries_list']; ?>
					</div>
				</div>
			</section>

			<section id="data-published-by" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2><?php print $metrics_title; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print theme('gp_metrics', array('iso2' => $iso2, 'repatri_mode' => 'from')); ?>
					</div>
				</div>
			</section>
	</div>
</article>
