<ul>
	<?php foreach ($results as $record): ?>
		<li>
			<?php
				if (!empty($record->name_abv__lct)) {
					// @todo Decide whether we show emails and include it as a link.
					// print l($record->name_abv__lct, 'mailto:' . $record->email) . ' (' . $record->people_role . ')';
					print $record->name_abv__lct . ' (' . $record->people_role . ')';
				}
			?>
		</li>
	<?php endforeach; ?>
</ul>