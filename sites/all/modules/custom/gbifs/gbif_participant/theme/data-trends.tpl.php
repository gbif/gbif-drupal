<div class="content col-xs-8">
	<div class="row">
		<section id="records-by-kingdom" class="block-trend col-xs-6">
			<div class="desc-trend">
				<h3><?php print $content['records_by_kingdom']['title']; ?></h3>
				<p><?php print $content['records_by_kingdom']['text']; ?></p>
				<div class="push"></div>
			</div>
			<div class="image-trend">
				<?php print $content['records_by_kingdom']['img']; ?>
			</div>
		</section>
		<section id="species-count-by-kingdom" class="block-trend col-xs-6">
			<div class="desc-trend">
				<h3><?php print $content['species_by_kingdom']['title']; ?></h3>
				<p><?php print $content['species_by_kingdom']['text']; ?></p>
				<div class="push"></div>
			</div>
			<div class="image-trend">
				<?php print $content['species_by_kingdom']['img']; ?>
			</div>
		</section>
	</div>
</div>
<div class="content content-sidebar col-xs-4">
	<aside id="view-more" class="">
		<p><?php print $content['more']['text']; ?></p>
		<p><?php print $content['more']['link_more']; ?></p>
	</aside>
</div>
