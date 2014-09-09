<article class="container">
	<div class="row">
		<section id="countries" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2><?php print $heading;?></h2>
				</header>
			</div>
			<div class="row">
				<div class="col-md-12">
					<?php print $description;?>
					<ul>
						<?php
						foreach ($columular_countries as $country_json) {
							print '<li><a href="' . $country_json->iso . '/' . $type . '">' . $country_json->name . '</a></li>';
						}
						?>
					</ul>
				</div>
			</div>
		</section>
	</div>
</article>

