<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<article id="node-<?php print $node->nid; ?>" class="container <?php print $classes; ?>">
	<div class="row">
      <section id="participation" class="col-md-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
        <div class="row">
					<header class="content-header col-md-8">
						<h2>Participation</h2>
					</header>
					<div class="node-sidebar-header col-md-4">
						<h2>Node</h2>
					</div>
        </div>
        <div class="row">
          <div class="node-content col-md-8">

            <?php if ($display_submitted && user_is_logged_in()): ?>
            <div class="submitted">
              <?php print $submitted; ?>
          		<?php if (!empty($tabs)): ?>
          			<?php print render($tabs); ?>
          		<?php endif; ?>
            </div>
            <?php endif; ?>

						<h3>Member Status</h3>
						<p><?php print $participant_ims->gbif_membership; ?></p>
						<h3>GBIF Participant since</h3>
						<p><?php print $participant_ims->member_as_of; ?></p>
						<?php print $participant_ims->gbif_region; ?>
						<?php print $participant_ims->contact_participation; ?>

          </div>
          <aside class="node-sidebar col-md-4">
						<div class="field-label">Node name&nbsp;</div>
						<p><?php print $participant_ims->node_name_full; ?></p>
						<div class="field-label">Address&nbsp;</div>
						<p>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_name); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_address); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_zip_code); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_city); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_state_province); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->participant_name_full); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_email); ?>
							<?php print _gbif_participant_print_address_fields($participant_ims->institution_telephone); ?>
						</p>
						<div class="field-label">Website&nbsp;</div>
						<p><?php print $participant_ims->node_url; ?></p>
          </aside>
        </div>
      </section>
			<section id="description" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Description</h2>
					</header>
				</div>
				<div class="row">
					<div class="node-content col-md-8">
						<?php print render($content['gp_node_established']); ?>
						<?php print render($content['gp_has_mandate']); ?>
						<?php print render($content['gp_history']); ?>
						<?php print render($content['gp_vision_mission']); ?>
						<?php print render($content['gp_structure']); ?>
						<?php print render($content['gp_national_funding']); ?>
					</div>
					<aside class="node-sidebar col-md-4">
						<?php print render($content['gp_comm_social']); ?>
						<?php print render($content['gp_comm_rss']); ?>
						<?php print render($content['gp_quick_links']); ?>
					</aside>
				</div>
			</section>
			<section id="contacts" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Contacts</h2>
					</header>
				</div>
				<div class="row">
					<?php print $participant_ims->contact_contacts; ?>
				</div>
			</section>
			<section id="endorsed-publishers" class="col-md-12 well well-lg">
				<div class="row">
					<header class="content-header col-md-12">
						<h2>Endorsed Publishers</h2>
					</header>
				</div>
				<div class="row">
					<div class="node-content col-md-12">
						<?php print $participant_ims->endorsed_publishers; ?>
					</div>
				</div>
			</section>
	</div>
</article>
