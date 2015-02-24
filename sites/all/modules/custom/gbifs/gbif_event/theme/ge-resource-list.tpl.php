<ul>
	<?php foreach ($results as $record): ?>
		<li>
			<?php print l($record->description, $record->url); ?>
		</li>
	<?php endforeach; ?>
</ul>