<?php
	// Make sure the country code is in UPPERCASE so the map tiles will show.
	$iso2 = strtoupper($iso2);
	// Process node information from the Registry.
	// @todo To combine this with what's done in _preprocess_node().
	// Format the date to only show year.
	$timestamp = strtotime($participant_ims->member_as_of);
	$year = date('Y', $timestamp);
	$participant_ims->member_as_of = $year;
	// GBIF region
	$participant_ims->gbif_region = _gbif_participant_print_region($registry_json->gbifRegion);
	// Contacts
	$participant_ims->contact_participation = _gbif_participant_print_contacts('participation', $registry_json->contacts, $iso2);
	// Node established
	$timestamp = strtotime($node->gp_node_established['und'][0]['value']);
	if ($timestamp != FALSE) {
		$year = date('Y', $timestamp);
		$participant_node['node_established'] = $year;
	}
?>
<article id="country-summary" class="container">
	<div class="row">
      <section id="data-about" class="col-md-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
				<div id="map-about" class="country-map">
					<iframe id="mapAboutFrame" name="map" src="<?php print $env['gbif_api_base_url']; ?>/v1/map/index.html?type=COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
				</div>
				<div class="block-map-sidebar">
					<div class="row">
						<header class="content-header col-md-8">

						</header>
						<header class="content-header sidebar-header-country col-md-4">
							<h2><?php print $html['about_title']; ?></h2>
						</header>
					</div>
					<div class="row">
						<div class="col-md-8">
						</div>
						<div class="content content-sidebar map-right col-md-4">
							<?php print $html['about']; ?>
						</div>
					</div>
				</div>
      </section>

			<?php if ($node != NULL && $participantID != NULL): ?>
			<section id="data-from" class="col-md-12 well well-lg">
				<div id="map-from" class="country-map">
					<iframe id="mapByFrame" name="map" src="<?php print $env['gbif_api_base_url']; ?>/v1/map/index.html?type=PUBLISHING_COUNTRY&amp;key=<?php print $iso2; ?>" allowfullscreen="" height="100%" width="100%" frameborder="0"></iframe>
				</div>
				<div class="block-map-sidebar">
					<div class="row">
						<header class="content-header col-md-8">
						</header>
						<header class="content-header sidebar-header-country col-md-4">
							<h2><?php print $html['from_title']; ?></h2>
						</header>
					</div>
					<div class="row">
						<div class="col-md-8">
						</div>
						<div class="content content-sidebar map-right col-md-4">
							<?php print $html['from']; ?>
						</div>
					</div>
				</div>
			</section>

			<section id="participation" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-8">
						<h2>Participation</h2>
					</header>
					<header class="content-header sidebar-header-country col-md-4">
						<h2>Node</h2>
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
							<?php print _gbif_participant_print_address_fields($participant_ims->country); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_email); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_telephone); ?>
						</address>
						<?php if (isset($participant_node['node_established'])): ?>
							<h3>Node Established</h3>
							<p><?php print $participant_node['node_established']; ?></p>
						<?php endif; ?>
						<h3>Website</h3>
						<p><?php print l($participant_ims->node_url, $participant_ims->node_url, array('attributes' => array('target' => '_blank'))); ?></p>
					</aside>
				</div>
			</section>

			<section id="latest-datasets-published" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2><?php print $html['title']; ?></h2>
					</header>
				</div>
				<div class="row">
					<div class="content content-full">
						<?php print $html['latest_dataset']; ?>
					</div>
				</div>
			</section>
			<?php endif; ?>
	</div>
</article>
