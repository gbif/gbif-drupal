<?php
/**
 * @file
 * Default theme implementation to display a region.
 *
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 *
 * @ingroup themeable
 */

$back_menu_url = 'programme/capacity-support';
$back_bar_title = t('Back to Capacity enhancement support programme');
switch (arg(1)) {
  case 'bid':
    $back_menu_url = 'programme/bid';
    $back_bar_title = t('Back to Biodiversity Information for Development');
    break;
  case 'bifa':
    $back_menu_url = 'programme/bifa';
    $back_bar_title = t('Back to Biodiversity Information Fund for Asia');
    break;
}
?>
<div class="back-to-previous">
  <div class="container">
    <div class="row">
      <p>&lt; <u><a href="/<?php print $back_menu_url; ?>"><?php print $back_bar_title; ?></a></u></p>
    </div>
  </div>
</div>

<?php if ($content): ?>
  <div class="<?php print $classes; ?>">
    <?php if (isset($well_top)): ?>
    <?php print $well_top; ?>
    <?php endif; ?>

    <?php print $content; ?>

    <?php if (isset($well_bottom)): ?>
    <?php print $well_bottom; ?>
    <?php endif; ?>
  </div>
<?php endif; ?>
