<?php

/**
 * @file
 * Default theme implementation for displaying search results.
 *
 * This template collects each invocation of theme_search_result(). This and
 * the child template are dependent to one another sharing the markup for
 * definition lists.
 *
 * Note that modules may implement their own search type and theme function
 * completely bypassing this template.
 *
 * Available variables:
 * - $search_results: All results as it is rendered through
 *   search-result.tpl.php
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 *
 *
 * @see template_preprocess_search_results()
 *
 * @ingroup themeable
 */

  $new_search_link = l('new site', 'http://demo.gbif.org/search', array(
    'query' => array(
      'q' => arg(2)
    ),
    'attributes' => array(
      'target' => '_blank'
    )
  ));

?>
<?php if ($search_results): ?>
<div class="row">
	<header class="content-header col-xs-8">
	  <h2><?php print t('Search results');?></h2>
	</header>
	<div class="content-header sidebar-header col-xs-3">
		<h2>More search options</h2> 
	</div>
</div>
<div class="row">
	<div class="view-column col-xs-8">
		<p>Or, perform the same search on our <?php print $new_search_link; ?> in preview?</p>
    <?php print $search_results; ?>
		<hr>
	  <?php print $pager; ?>
	</div>
	<div class="sidebar-filter col-xs-3">
		<?php print _bvng_get_more_search_options(NULL, arg(2)); ?>
	</div>
</div>
<?php else: ?>
<div class="row">
	<header class="content-header col-xs-8">
	  <h2><?php print t('Your search yielded no results');?></h2>
	</header>
</div>
<div class="row">
	<div class="view-column col-xs-8">
	  <ul>
      <li>Perform the same search on our <?php print $new_search_link; ?> in preview</li>
    </ul>
	  <?php print search_help('search#noresults', drupal_help_arg()); ?>
	</div>
</div>
<?php endif; ?>
