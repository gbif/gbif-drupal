<?php
	// @todo to comply with the alternative syntax for control structures
	// @see http://php.net/manual/en/control-structures.alternative-syntax.php
?>
<article class="container">
	<div class="row">
		<section id="countries" class="col-xs-12 well well-lg">
			<div class="row">
				<header class="content-header col-xs-12">
					<p>
						<?php print $description;?>
					</p>
				</header>
			</div>
			<div class="row">
				<div class="content content-full">
  				<?php
	  			  foreach ($columular_countries as $col) {
		  			  print '<div class="col-xs-3"><ul class="list-unstyled">';
			  			foreach ($col as $country_json) {
				  		  print '<li><a href="' . $country_json['iso'] . '/' . $type . '">' . $country_json['title'] . '</a></li>';
					  	}
  						print '</ul></div>';
	  				}
		  		?>
				</div>
			</div>
		</section>
	</div>
</article>
