<ul>
	<?php foreach ($feed_items as $k => $feed_item): ?>
		<?php
			$title_link = l($feed_item['title'], $feed_item['url']);
		?>
			<li><?php print $title_link; ?>
				<p><?php print $feed_item['timing']; ?></p>
			</li>
	<?php endforeach; ?>
</ul>
