<?php
	drupal_set_title($html['title']);
?>
<article id="mendeley-publications" class="container <?php print $classes; ?>">
	<div class="row">
		<section id="publication-intro" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
			<div class="row">
				<header class="content-header col-xs-8">
					<h2><?php print $html['title']; ?></h2>
				</header>
			</div>
			<div class="row">
				<div class="content content-full">
					<?php print $html['desc']; ?>
				</div>
			</div>
		</section>

		<section id="publication-list" class="col-xs-12 well well-lg well-right-bg">
			<div class="row">
				<header class="content-header col-xs-8">
					<h2><?php print $html['count_header']; ?></h2>
				</header>
				<div class="content-header sidebar-header col-xs-3 .col-xs-offset-1">
					<h2>More GBIF use cases</h2>
				</div>
			</div>
			<div class="row">
				<div class="content col-xs-8">
					<?php print $html['list_publications']; ?>
				</div>
				<div class="sidebar-filter col-xs-3">
					<?php print _npt_mendeley_get_more_use_cases(); ?>
				</div>
			</div>
		</section>
	</div>
</article>