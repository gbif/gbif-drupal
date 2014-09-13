<?php

?>
<div class="back-to-previous">
	<div class="container">
		<div class="row">
			<p>&lt; <u><a href="/country/<?php print $iso2; ?>/participation#endorsed-publishers">Back to participation page</a></u></p>
		</div>
	</div>
</div>
<article id="country-publishers" class="container <?php print $classes; ?>">
	<div class="row">
      <section id="publishers" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
        <div class="row">
					<header class="content-header col-xs-8">
						<h2><?php print $html['title']; ?></h2>
					</header>
        </div>
        <div class="row">
					<div class="content content-full flat-list">
						<?php print $html['list']; ?>
					</div>
        </div>
      </section>
	</div>
</article>
