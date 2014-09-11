<ul>
<?php foreach ($datasets as $k => $dataset): ?>
<?php switch ($dataset['type']): ?>
<?php case 'OCCURRENCE': ?>
		<?php
			$title_link = l($dataset['title'], $env['data_portal_base_url'] . '/dataset/' . $dataset['key']);
			$paragraph = $dataset['type_formatted'] . '. ';
			$paragraph .= format_plural($dataset['occurrence_count'],
				'1 record',
				'@count records',
				array('@count' => number_format($dataset['occurrence_count']))
			) . ' ';
			$paragraph .= '(' . number_format($dataset['occurrence_geo']) . ' georeferenced). ';
			$paragraph .= t('Published by ');
			$paragraph .= l($dataset['publishingOrganizationTitle'], $env['data_portal_base_url'] . '/publisher/' . $dataset['publishingOrganizationKey']) . '.';
		?>
<?php break; ?>
<?php case 'CHECKLIST': ?>
			<?php
			$title_link = l($dataset['title'], $env['data_portal_base_url'] . '/dataset/' . $dataset['key']);
			$paragraph = $dataset['type_formatted'] . '. ';
			$paragraph .= format_plural($dataset['checklist_metrics']['usagesCount'],
					'1 record',
					'!count records',
					array('!count' => number_format($dataset['checklist_metrics']['usagesCount']))
			) . '. ';
			$paragraph .= t('Published by ');
			$paragraph .= l($dataset['publishingOrganizationTitle'], $env['data_portal_base_url'] . '/publisher/' . $dataset['publishingOrganizationKey']) . '.';
			?>
<?php break; ?>
<?php endswitch; ?>
	<li>
		<?php print $title_link; ?><br>
		<p><?php print $paragraph; ?></p>
	</li>
<?php endforeach; ?>
</ul>
