<?php
/**
 * @file template file for the resource tab in publishing-data/ section.
 */

$env = variable_get('environment_settings');
$block_docs = module_invoke('views','block_view','resources-block_docs');
$block_tools = module_invoke('views','block_view','resources-block_tools');

?>
<div class="block-publishing-data-resources">
  <?php print render($block_docs['content']); ?>
</div>

<div class="block-publishing-data-resources">
  <?php print render($block_docs['content']); ?>
</div>

<div ng-app="lpApp" class="block-publishing-data-resources" >
  <div id="latest-publisher-container" ng-controller="lpController as lpCtrl">
    <header>
      <h2 class="featured-resources">Latest data publishers</h2>
    </header>
    <section id="featured-resources-rows">
			<div class="views-row" ng-repeat="org in lpCtrl.orgs">
				<div class="views-field views-field-title"><h3 class="field-content"><a href="{{org.portalUrl}}">{{org.title}}</a></h3></div>
				<div class="views-field views-field-body">
					<p class="field-content">{{org.summary}}</p>
					<p ng-bind-html="org.endorsedText"></p>
				</div>
				<div class="views-field"><img class="org-logo" src="{{org.logoUrl}}" ng-hide="{{org.noLogo}}"></div>
			</div>
      <p class="more text-right"><a href="<?php print $env['data_portal_base_url']; ?>/publisher/search">more data publishers</a></p>
    </section>
  </div>
</div>

