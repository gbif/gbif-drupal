<ul>
	<?php foreach ($results as $record): ?>
		<li>
			<?php print l($record->name_abr, $record->url); ?>
		</li>
	<?php endforeach; ?>
</ul>