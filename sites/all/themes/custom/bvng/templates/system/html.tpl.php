<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>>
<head profile="<?php print $grddl_profile; ?>">
  <meta charset="utf-8">

  <!-- Disabled responsiveness
	<meta name="viewport" content="width=1024, user-scalable=yes">
	-->

  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <!-- beginning Drupal scripts -->
  <?php print $scripts; ?>
  <!-- ending Drupal scripts -->

	<!-- beginning favicons -->

	<link rel="apple-touch-icon" type="image/png" sizes="57x57" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-57x57.png">
	<link rel="apple-touch-icon" type="image/png" sizes="60x60" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-60x60.png">
	<link rel="apple-touch-icon" type="image/png" sizes="72x72" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-72x72.png">
	<link rel="apple-touch-icon" type="image/png" sizes="76x76" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-76x76.png">
	<link rel="apple-touch-icon" type="image/png" sizes="114x114" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-114x114.png">
	<link rel="apple-touch-icon" type="image/png" sizes="120x120" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-120x120.png">
	<link rel="apple-touch-icon" type="image/png" sizes="144x144" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-144x144.png">
	<link rel="apple-touch-icon" type="image/png" sizes="152x152" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-152x152.png">
	<link rel="apple-touch-icon" type="image/png" sizes="180x180" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/apple-touch-icon-180x180.png">
	<link rel="icon" type="image/png" sizes="32x32" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/favicon-32x32.png">
	<link rel="icon" type="image/png" sizes="194x194" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/favicon-194x194.png">
	<link rel="icon" type="image/png" sizes="96x96" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/favicon-96x96.png">
	<link rel="icon" type="image/png" sizes="192x192" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/android-chrome-192x192.png">
	<link rel="icon" type="image/png" sizes="16x16" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/favicon-16x16.png">
	<link rel="manifest" href="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/manifest.json">
  <meta name="apple-mobile-web-app-title" content="GBIF">
  <meta name="application-name" content="GBIF">
	<meta name="msapplication-TileColor" content="#509e2f">
	<meta name="msapplication-TileImage" content="/<?php print drupal_get_path('theme', 'bvng'); ?>/images/favicons/mstile-144x144.png">
	<meta name="theme-color" content="#509e2f">

	<!-- ending favicons -->

	<script>
		(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
			(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
			m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
		})(window,document,'script','//www.google-analytics.com/analytics.js','ga');

		ga('create', '<?php print variable_get('ga_tracking_id'); ?>', 'auto');
		ga('send', 'pageview');

	</script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
