<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @todo check the existence of $navbar_classes in the original bootstrap template.
 *
 * @see navbar.less for #branding, #navigation-menu and .nav-inline.
 *
 * @ingroup themeable
 */
?>
<section id="masthead">
  <div class="container">
    <div class="row">
      <div class="col-xs-3 col-xs-push-9"> 
        <?php print render($page['account']); ?>
			</div>
    </div>
    <div class="row">
      <div id="region-navigation" class="col-xs-12">
    		<div class="navbar-header">
    			<div id="branding">
        		<?php if ($logo): ?>
          		<a class="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          			<img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          		</a>
        		<?php endif; ?>
        		<?php if (!empty($site_name)): ?>
        		  <h1><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a></h1>
        		<?php endif; ?>
        		<?php if (!empty($site_slogan)): ?>
            	<span><?php print $site_slogan; ?></span>
            <?php endif; ?>
      		</div>

          <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
    			<div id="navigation-menu" class="nav-inline">
      			<nav role="navigation">
      				<?php if (!empty($page['navigation'])): ?>
      				<?php print render($page['navigation']); ?>
      				<?php endif; ?>

      				<!-- $primary_nav is kept for compatibility reason. -->
      				<?php if (!empty($primary_nav)): ?>
      				<?php print render($primary_nav); ?>
      				<?php endif; ?>
      			</nav>
      		</div>
      		<?php endif; ?>
  				<?php if (!empty($page['search'])): ?>
  				<?php print render($page['search']); ?>
  				<?php endif; ?>
    		</div>
    	</div>
  	</div>
  </div>
</section>
<section id="banner">
  <div class="container">
    <div class="row">
      <div id="region-highlighted" class="col-xs-12">
        <h1><?php print $page['highlighted_title']['name']; ?></h1>
        <?php if (isset($page['highlighted_title']['description'])): ?>
        <h5><?php print $page['highlighted_title']['description']; ?></h5>
        <?php endif; ?>
  			<?php if (!empty($page['highlighted'])): ?>
  			<?php print render($page['highlighted']); ?>
  			<?php endif; ?>
      </div>
      <div id="region-menu" class="col-xs-8">
  			<?php if (!empty($page['menu'])): ?>
        <?php print render($page['menu']); ?>
  			<?php endif; ?>
      </div>
    </div>
  </div>
</section>
<!-- Breadcrumb
	<div class="row">
		<?php // if (!empty($breadcrumb)): print $breadcrumb; endif;?>
	</div>	
-->
<section id="main">
  <a id="main-content"></a>
  <?php if (!empty($messages)): ?>
		<?php print $messages; ?>
  <?php endif; ?>    
    
  <?php if (!empty($page['help'])): ?>
    <div class="container well well-lg">
      <div class="row">
        <?php print render($page['help']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($action_links)): ?>
    <ul class="action-links"><?php print render($action_links); ?></ul>
  <?php endif; ?>
  <?php print render($page['content']); ?>

</section>

<section id="footer">
  <div id="footer-links">
    <div class="container">
      <div class="row">
        <div class="footer col-xs-12">
          <?php print render($page['links']); ?>
        </div>
      </div>
    </div>
  </div>
  <div id="footer-credits">
    <div class="container">
      <div class="row">
        <div class="footer col-xs-12">
            <?php print render($page['credits']); ?>
            <!-- Print the footer here for compatibility reason. -->
            <?php print render($page['footer']); ?>
        </div>
      </div>
    </div>
  </div>
</section>
