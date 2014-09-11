<ul>
<?php foreach ($countries as $k => $country): ?>
<?php	switch ($list_mode): ?>
<?php	case 'digest': ?>
		<?php
			$title_link = l($country['title'], 'country/' . $iso2 . '/publishing');
				$paragraph = format_plural($country['total_count'],
					'1 occurrence',
					'!count occurrences',
					array('!count' => number_format($country['total_count']))
				) . ', ';
				// @todo georeferenced count.
				$paragraph .= $country['percentage'] . t('% geo-referenced.');
		?>
		<li>
			<?php print $title_link; ?> <span class="title-annotating-text"><?php print $paragraph; ?></span>
		</li>
<?php break; ?>
<?php case 'full': ?>
		<?php
			$title_link = l($country['title'], 'country/' . $iso2 . '/publishing');
			$paragraph = format_plural($country['total_count'],
				'1 occurrence',
				'!count occurrences',
				array('!count' => number_format($country['total_count']))
			) . ', ';
			// @todo georeferenced count.
			$paragraph .= $country['percentage'] . t('% geo-referenced.');
		?>
		<li>
			<?php print $title_link; ?> <span class="title-annotating-text"><?php print $paragraph; ?></span>
		</li>
<?php break; ?>
<?php endswitch; ?>
<?php endforeach; ?>
</ul>
