<?php
	$country_name = gbif_participant_country_lookup($iso2, 'iso2', 'title');
	$title = $country_name . ' - ' . strtotitle($html['intro_title']);
	drupal_set_title($title);
?>
<article id="country-publications" class="container <?php print $classes; ?>">
	<div class="row">
      <section id="publication-intro" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
        <div class="row">
					<header class="content-header col-xs-8">
						<h2><?php print $html['intro_title']; ?></h2>
					</header>
        </div>
        <div class="row">
					<div class="content content-full">
						<?php print $html['intro_para']; ?>
					</div>
        </div>
      </section>

			<section id="publication-list" class="col-xs-12 well well-lg">
				<div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $html['list_title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content flat-list content-full">
						<?php print $html['list_publications']; ?>
					</div>
				</div>
			</section>
	</div>
</article>
