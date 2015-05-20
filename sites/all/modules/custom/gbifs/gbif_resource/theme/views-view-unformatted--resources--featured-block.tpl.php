<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<header class="featured-resources clearfix">
  <h2 class="featured-resources"><?php print $view->get_title(); ?></h2>
</header>
<section id="featured-resources-rows">
  <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</section>
