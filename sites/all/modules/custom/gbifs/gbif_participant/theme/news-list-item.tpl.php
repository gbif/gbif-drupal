<ul>
	<?php foreach ($items as $k => $item): ?>
		<?php
			$title_link = l($item['title'], 'page/' . $k);
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
