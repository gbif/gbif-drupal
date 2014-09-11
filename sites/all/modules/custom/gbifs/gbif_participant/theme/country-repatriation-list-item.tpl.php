<ul>
<?php foreach ($countries as $k => $country): ?>
<?php	switch ($list_mode): ?>
<?php	case 'digest': ?>
		<?php
			if ($repatri_mode == 'from') {
				$title_link = l($country['title'], 'country/' . $country['iso2']);
			}
			else {
				$title_link = l($country['title'], 'country/' . $country['iso2'] . '/publishing');
			}
			$paragraph = format_plural($country['total_count'],
				'1 occurrence',
				'!count occurrences',
				array('!count' => number_format($country['total_count']))
			);
			if ($country['percentage'] == 100) {
				$paragraph .= ', ' . $country['percentage'] . t('% geo-referenced.');
			}
			elseif ($country['percentage'] == 0) {
				$paragraph .= '.';
			}
			else {
				$paragraph .= ', ' . number_format((float)$country['percentage'], 3, '.', '') . t('% geo-referenced.');
			}
		?>
		<li>
			<?php print $title_link; ?> <span class="title-annotating-text"><?php print $paragraph; ?></span>
		</li>
<?php break; ?>
<?php case 'full': ?>
		<?php
			if ($repatri_mode == 'from') {
				$title_link = l($country['title'], 'country/' . $country['iso2'] . '/about');
			}
			else {
				$title_link = l($country['title'], 'country/' . $country['iso2'] . '/publishing');
			}
			$paragraph = format_plural($country['total_count'],
				'1 occurrence',
				'!count occurrences',
				array('!count' => number_format($country['total_count']))
			);
			if ($country['percentage'] == 100) {
				$paragraph .= ', ' . $country['percentage'] . t('% geo-referenced.');
			}
			elseif ($country['percentage'] == 0) {
				$paragraph .= '.';
			}
			else {
				$paragraph .= ', ' . number_format((float)$country['percentage'], 3, '.', '') . t('% geo-referenced.');
			}
		?>
		<li>
			<strong><?php print $title_link; ?></strong>
			<p><?php print $paragraph; ?></p>
		</li>
<?php break; ?>
<?php endswitch; ?>
<?php endforeach; ?>
</ul>
