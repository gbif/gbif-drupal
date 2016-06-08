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

/**
 * Processing programme/umbrella project for leading back to the page of the upper level.
 */
$node_wrapper = entity_metadata_wrapper('node', $node);
$field_programme_value = $node_wrapper->field_programme_ef->value();
$programme_url = drupal_get_path_alias('node/'. $field_programme_value->nid);
$programme_title = $field_programme_value->title;

?>
<div class="back-to-previous">
  <div class="container">
    <div class="row">
      <p>&lt; <u><a href="/<?php print $programme_url; ?>">Back to <?php print $programme_title; ?></a></u></p>
    </div>
  </div>
</div>
<div class="container well well-lg well-margin-top<?php print (empty($next_node)) ? ' well-margin-bottom' : ''; ?>">
  <div class="row">
    <div class="col-xs-12">

      <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
        <div class="row">
          <header class="content-header col-xs-12">
						<?php if (!empty($type_title)): ?>
            <h3><?php print render($type_title); ?></h3>
						<?php endif; ?>
            <?php print render($title_prefix); ?>
            <?php if (!empty($title)): ?>
            <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
          </header>
        </div>
        <div class="row">
          <div class="node-content col-xs-8">

            <?php if (user_is_logged_in()): ?>
            <div class="submitted">
              <?php print $submitted; ?>
          		<?php if (!empty($tabs)): ?>
          			<?php print render($tabs); ?>
          		<?php endif; ?>
            </div>
            <?php endif; ?>

            <?php
              // Hide comments, tags, and links now so that we can render them later.
              hide($content['comments']);
              hide($content['links']);
              hide($content['field_tags']);

              // fields to print in the main content block
            ?>

            <?php if (isset($content['field_pj_image'])): ?>
              <?php print render($content['field_pj_image']); ?>
            <?php endif; ?>

            <?php if (isset($content['body'])): ?>
              <?php print render($content['body']); ?>
            <?php endif; ?>

            <?php if (!empty($partners_html)): ?>
              <?php print $partners_html; ?>
            <?php endif; ?>

            <?php
              $block = block_load('views', 'related_activities-related_news');
              $block_to_be_rendered = _block_get_renderable_array(_block_render_blocks(array($block)));
              print render($block_to_be_rendered);
            ?>

            <?php if (isset($content['field_related_events'])): ?>
              <?php print render($content['field_related_events']); ?>
            <?php endif; ?>

            <?php if (isset($content['field_related_projects'])): ?>
              <?php print render($content['field_related_projects']); ?>
            <?php endif; ?>

            <?php if (!empty($resources_html)): ?>
              <?php print $resources_html; ?>
            <?php endif; ?>

            <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
            <footer>
              <?php print render($content['field_tags']); ?>
              <?php print render($content['links']); ?>
            </footer>
            <?php endif; ?>

            <?php if (isset($content['service_links'])): ?>
              <?php print render($content['service_links']); ?>
            <?php endif; ?>

            <?php print render($content['comments']); ?>
          </div>
          <div class="node-sidebar sidebar col-xs-3">

            <?php if (isset($content['field_programme_ef'])): ?>
              <?php print render($content['field_programme_ef']); ?>
            <?php endif; ?>

            <?php if (isset($content['pj_call'])): ?>
              <?php print render($content['pj_call']); ?>
            <?php endif; ?>

            <?php if (isset($content['field_status'])): ?>
              <?php print render($content['field_status']); ?>
            <?php endif; ?>

            <?php if (isset($content['field_duration'])): ?>
              <?php print render($content['field_duration']); ?>
            <?php endif; ?>

            <?php if (isset($content['field_pj_grant_type'])): ?>
              <?php print render($content['field_pj_grant_type']); ?>
            <?php endif; ?>

            <?php if (isset($content['field_pj_funding_allocated'])): ?>
              <?php print render($content['field_pj_funding_allocated']); ?>
            <?php endif; ?>

            <?php if (isset($content['field_pj_matching_fund'])): ?>
              <?php print render($content['field_pj_matching_fund']); ?>
            <?php endif; ?>

            <?php if (isset($content['field_co_funder'])): ?>
              <?php print render($content['field_co_funder']); ?>
            <?php endif; ?>

          </div>
        </div>
      </article>
    </div>
  </div>
</div>