<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 * @todo For some reason the $title is empty.
 */
$title = t('Latest documents');
?>
<header class="featured-resources clearfix">
  <?php if (!empty($title)): ?>
    <h2 class="featured-resources"><?php print $title; ?></h2>
  <?php endif; ?>
</header>
<section id="featured-resources-rows">
  <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
  <p class="more text-right"><a href="/resources?f[0]=gr_purpose%3A955&f[1]=gr_resource_type%3A895&searched=1">more documents</a> about publishing data</p>
</section>
