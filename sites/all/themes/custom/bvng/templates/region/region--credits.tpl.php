<?php

/**
 * @file
 * Default theme implementation to display a region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - region: The current template type, i.e., "theming hook".
 *   - region-[name]: The name of the region with underscores replaced with
 *     dashes. For example, the page_top region would have a region-page-top class.
 * - $region: The name of the region variable as defined in the theme's .info file.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php if ($content): ?>
  <div class="<?php print $classes; ?>">
    <ul>
      <li>
        <h3><?php echo date("Y"); ?> &copy; GBIF</h3>
        <ul>
          <li><div class='logo'></div></li>
        </ul>
      </li>
      <li>
        <h3>GBIF Secretariat</h3>
        <ul>
          <li>Universitetsparken 15</li>
          <li>DK-2100 Copenhagen Ø</li>
          <li>DENMARK</li>
        </ul>
      </li>
      <li>
        <ul>
          <h3>Contact</h3>
          <li><strong>Email</strong> info@gbif.org</li>
          <li><strong>Tel</strong> +45 35 32 14 70</li>
          <li><strong>Fax</strong> +45 35 32 14 80</li>
          <li>You can also check the <a href='contact/directoryofcontacts#secretariat'>GBIF Directory</a></li>
        </ul>
      </li>
      <li>
        <h3>SOCIAL MEDIA</h3>
        <ul class='social last'>
          <li class='twitter'><i></i><a href='https://twitter.com/GBIF'>Follow GBIF on Twitter</a></li>
          <li class='facebook'><i></i><a href='https://www.facebook.com/gbifnews'>Like GBIF on Facebook</a></li>
          <li class='linkedin'><i></i><a href='http://www.linkedin.com/groups/GBIF-55171'>Join GBIF on Linkedin</a></li>
          <li class='vimeo'><i></i><a href='http://vimeo.com/gbif'>View GBIF on Vimeo</a></li>
        </ul>
      </li>
    </ul>
    <?php 
      // We don't print $content in credits region.
      // print $content;
    ?>
  </div>
<?php endif; ?>