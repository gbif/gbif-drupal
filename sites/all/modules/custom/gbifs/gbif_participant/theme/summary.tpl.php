<?php

?>
<article id="country-summary" class="container">
	<div class="row">
      <section id="data-about" class="col-md-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
        <div class="row">
					<header class="content-header col-md-8">

					</header>
					<header class="content-header sidebar-header-country col-md-4">
						<h2>Data about</h2>
					</header>
        </div>
        <div class="row">
					<div id="map-about" class="country-map">
						<iframe id="mapAboutFrame" name="map" src="http://cdn.gbif.org/v1/map/index.html?type=COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
					</div>
        </div>
      </section>

			<section id="data-from" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-8">

					</header>
					<header class="content-header sidebar-header-country col-md-4">
						<h2>Data from</h2>
					</header>
				</div>
				<div class="row">
					<div id="map-from" class="country-map">
						<iframe id="mapByFrame" name="map" src="http://cdn.gbif.org/v1/map/index.html?type=PUBLISHING_COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
					</div>
					<aside class="content content-sidebar col-md-4">
					</aside>
				</div>
			</section>

			<section id="participation" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Participation</h2>
					</header>
				</div>
				<div class="row">
					<div class="content col-md-8">
						<h3>Member Status</h3>
						<p><?php print $participant_ims->gbif_membership; ?></p>
						<h3>GBIF Participant since</h3>
						<p><?php print $participant_ims->member_as_of; ?></p>
						<?php print $participant_ims->gbif_region; ?>
						<?php print $participant_ims->contact_participation; ?>
					</div>
					<aside class="content content-sidebar col-md-4">
						<h3>Node name</h3>
						<p><?php print $participant_ims->node_name_full; ?></p>
						<h3>Address</h3>
						<address>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_name); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_address); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_zip_code); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_city); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_state_province); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->participant_name_full); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_email); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_telephone); ?>
						</address>
						<h3>Node Established</h3>
						<p><?php print $participant_node['node_established']; ?></p>
						<h3>Website</h3>
						<p><?php print l($participant_ims->node_url, $participant_ims->node_url); ?></p>
					</aside>
				</div>
			</section>

			<section id="latest-datasets-published" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Latest datasets published</h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full col-md-12">
					</div>
				</div>
			</section>
	</div>
</article>
