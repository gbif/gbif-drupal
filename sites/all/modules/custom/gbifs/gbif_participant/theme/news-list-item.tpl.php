<ul>
	<?php foreach ($items as $k => $item): ?>
		<?php
			switch ($item['type']) {
				case 'News':
				case 'Data use':
				case 'Event':
          $url_alias = drupal_get_path_alias('node/' . $k);
					$title_link = l($item['title'], $url_alias);
					break;
			}
		?>
			<li>
				<h3><?php print $item['type']; ?></h3>
				<strong><?php print $title_link; ?></strong>
				<?php if (!empty($item['body'])): ?>
					<p><?php print $item['body']; ?></p>
				<?php endif; ?>
				<p><?php print $item['timing']; ?></p>
				<hr>
			</li>
	<?php endforeach; ?>
</ul>
