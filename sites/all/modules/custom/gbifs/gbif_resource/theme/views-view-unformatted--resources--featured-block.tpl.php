<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 * @todo For some reason the $title is empty.
 */
$title = t('Featured resources');
?>
<header class="featured-resources clearfix">
  <?php if (!empty($title)): ?>
    <h2 class="featured-resources"><?php print $title; ?></h2>
  <?php endif; ?>
  <a id="featured-resources-toggle" class="btn btn-default btn-switch" href="#" role="button">Hide</a>
</header>
<section id="featured-resources-rows">
  <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</section>
