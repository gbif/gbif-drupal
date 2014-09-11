<?php

?>
<article id="country-data-about" class="container">
	<div class="row">
      <section id="data-about" class="col-md-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
				<div class="row">
					<header class="content-header col-md-8">

					</header>
					<header class="content-header sidebar-header-country col-md-4">
						<h2>Data about <?php print $participant_ims->participant_name_full; ?></h2>
					</header>
				</div>
				<div class="row">
					<div id="map-about" class="country-map col-md-8">
						<iframe id="mapAboutFrame" name="map" src="http://api.gbif.org/v1/map/index.html?type=COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
					</div>
					<div class="content content-sidebar col-md-4">
						<?php print $html['about']; ?>
					</div>
				</div>
      </section>

			<section id="largest-occurrence-datasets" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2><?php print $html['largest_datasets_title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print $html['largest_datasets_list']; ?>
					</div>
				</div>
			</section>

			<section id="countries-publishing-data-about" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Countries, territories or islands publishing data about</h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
					</div>
				</div>
			</section>

			<section id="occurrence-located-in" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Occurrence located in</h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
					</div>
				</div>
			</section>
	</div>
</article>
