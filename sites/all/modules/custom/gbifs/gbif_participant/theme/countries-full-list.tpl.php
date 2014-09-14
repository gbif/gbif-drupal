<?php
	drupal_set_title(strtotitle($html['countries_title']));
?>
<div class="back-to-previous">
	<div class="container">
		<div class="row">
			<p>&lt; <u><?php print $html['link_back']; ?></u></p>
		</div>
	</div>
</div>
<article id="country-publishers" class="container <?php print $classes; ?>">
	<div class="row">
      <section id="publishers" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
        <div class="row">
					<header class="content-header col-xs-12">
						<h2><?php print $html['countries_title']; ?></h2>
					</header>
        </div>
        <div class="row">
					<div class="content content-full flat-list">
						<?php print $html['countries_list']; ?>
					</div>
        </div>
      </section>
	</div>
</article>
