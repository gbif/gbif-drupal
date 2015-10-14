<?php
	$count = count($publishers);
	$i = 0;
?><ul>
	<?php foreach ($publishers as $k => $publisher): ?>
		<?php
			$title_link = l($publisher['title'], $env['data_portal_base_url'] . '/publisher/' . $publisher['key']);
			$paragraph = t('A data publisher from ');
			$paragraph .= (!empty($publisher['city'])) ? trim($publisher['city']) : '';
      if (isset($publisher['country'])) {
        $country_title = gbif_participant_country_lookup($publisher['country'], 'iso2', 'title');
        $paragraph .= (!empty($publisher['city'])) ? ', ' : '';
        $paragraph .= $country_title;
      }
			if ($publisher['numPublishedDatasets'] != 0) {
				$published = format_plural($publisher['numPublishedDatasets'],
					'1 published dataset',
					'@count published datasets'
				);
				$paragraph .= ' with ' . $published;
			}
			$paragraph .= '.';
		?>
		<?php if ($mode == 'digest'): ?>
		<li>
			<?php print $title_link; ?><br>
			<p><?php print $paragraph; ?></p>
		</li>
		<?php else: ?>
			<li>
				<strong><?php print $title_link; ?></strong> <span class="title-annotating-text"><?php if (isset($published)) print $published; ?></span><br>
				<?php if (!empty($publisher['description'])): ?>
				<p><?php print $publisher['description']; ?></p>
				<?php endif; ?>
				<?php if ($i < $count - 1): ?>
					<hr>
				<?php endif; ?>
			</li>
		<?php endif; ?>
		<?php $i++; ?>
    <?php unset($published); ?>
	<?php endforeach; ?>
</ul>
