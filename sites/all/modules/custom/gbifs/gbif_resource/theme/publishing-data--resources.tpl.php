<?php
/**
 * @file template file for the resource tab in publishing-data/ section.
 */
?>
<div class="block-publishing-data-resources">
  <?php print render(module_invoke('views','block_view','resources-block_docs')); ?>
</div>

<div class="block-publishing-data-resources">
  <?php print render(module_invoke('views','block_view','resources-block_tools')); ?>
</div>
