<?php
	// @todo to comply with the alternative syntax for control structures
	// @see http://php.net/manual/en/control-structures.alternative-syntax.php
?>
<article class="container">
	<div class="row">
		<section id="countries" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2><?php print $heading;?></h2>
				</header>
			</div>
			<p>
				<?php print $description;?>
			</p>
			<div class="row">
				<?php
				  foreach ($columular_countries as $col) {
					  print '<div class="col-md-3"><ul class="list-unstyled">';
						foreach ($col as $country_json) {
						  print '<li><a href="' . $country_json['iso'] . '/' . $type . '">' . $country_json['name'] . '</a></li>';
						}
						print '</ul></div>';
					}
				?>
			</div>
		</section>
	</div>
</article>