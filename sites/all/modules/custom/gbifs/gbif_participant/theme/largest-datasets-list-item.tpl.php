<?php
	$count = count($datasets);
	$i = 0;
?>
<ul>
<?php foreach ($datasets as $k => $dataset): ?>
		<?php
			switch ($mode) {
				case 'digest':
					$title_link = l($dataset['title'], $env['data_portal_base_url'] . '/dataset/' . $dataset['dataset_key']);
					$paragraph = format_plural($dataset['count_within_country'],
							'1 occurrence',
							'!count occurrences',
							array('!count' => number_format($dataset['count_within_country']))
						) . ' ';
					$paragraph .= 'in ' . $dataset['country'] . ' ';
					$paragraph .= t('out of');
					break;
				case 'full':
					$title_link = '<strong>' . l($dataset['title'], $env['data_portal_base_url'] . '/dataset/' . $dataset['dataset_key']) . '</strong>';
					$paragraph = $dataset['type_formatted'] . ' with ';
					$occu_text = format_plural($dataset['count_within_country'],
							'1 occurrence',
							'!count occurrences',
							array('!count' => number_format($dataset['count_within_country']))
						) . ' ';
					$paragraph .= l($occu_text, $env['data_portal_base_url'] . '/occurrence/search', array('query' => array('country' => $iso2, 'dataset_key' => $dataset['dataset_key'])));
					$paragraph .= ' ' . t('in') . ' ' . $dataset['country'] . ' ' . t('out of');
					break;
			}
			$paragraph .= ' ' . number_format($dataset['occurrence_count']) . ' ';
			$paragraph .= '(' . $dataset['percentage'] . '%).';
		?>
	<li>
		<?php print $title_link; ?><br>
		<p><?php print $paragraph; ?></p>
		<?php if ($mode == 'full' && $i < $count - 1): ?>
			<hr>
		<?php endif; ?>
	</li>
<?php $i++; ?>
<?php endforeach; ?>
</ul>
