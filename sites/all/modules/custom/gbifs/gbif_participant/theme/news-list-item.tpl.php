<ul>
	<?php foreach ($items as $k => $item): ?>
		<?php
			switch ($item['type']) {
				case 'News item':
				case 'Featured data use':
					$title_link = l($item['title'], 'page/' . $k);
					break;
				case 'Event':
					$title_link = l($item['title'], 'event/' . $k);
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
