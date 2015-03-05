<ul class="publication-list">
	<?php foreach ($publications as $k => $p): ?>
	<?php
		$title_link = l($p['title'], $p['websites'][0], array('attributes' => array('target' => '_blank')));

		// Authors
		$authors = '';
		for ($i = 0; $i < count($p['authors']); $i++) {
			$authors .= $p['authors'][$i]['last_name'] . ', ';
			$authors .= strtoupper(substr($p['authors'][$i]['first_name'], 0, 1)) . '.';
			if ($i < count($p['authors']) - 1) {
				$authors .= ', ';
			}
		}
		$year = isset($p['year']) ? ', ' . $p['year'] . '.' : NULL;

		$journal = '';

		if (isset($p['source']) && isset($p['volume']) && isset($p['issue']) && isset($p['pages'])) {
			$journal .= (!empty($p['source'])) ? '<em>' . $p['source'] . '</em>' : '';
			$journal .= (!empty($p['volume'])) ? ' ' . $p['volume'] : '';
			$journal .= (!empty($p['issue'])) ? '(' . $p['issue'] . ')' : '';
			$journal .= (!empty($p['pages'])) ? ' ' . $p['pages'] . '.' : '. ';
		}
		else {
			$journal .= '(' . t('Citation information pending.') . ')';
		}

		// Keywords
		if (count($p['keywords']) > 0) {
			$keywords = format_plural(count($p['keywords']),
			'Keyword', 'Keywords', array()) . ': ';
			for ($i = 0; $i < count($p['keywords']); $i++) {
				$keywords .= $p['keywords'][$i];
				if ($i < count($p['keywords']) - 1) {
					$keywords .= ', ';
				}
				elseif ($i == count($p['keywords'])) {
					$keywords .= '.';
				}
			}
		}
	?>
	<li>
		<h3><?php print $authors . $year; ?></h3>
		<h4><?php print $title_link; ?></h4>
		<p><?php print $journal; ?></p>
		<p><?php print views_trim_text(array('max_length' => 600, 'word_boundary' => TRUE, 'ellipsis' => TRUE), $p['abstract']); ?></p>
		<p class="keywords"><?php print $keywords; ?></p>
		<?php if ($k % $per_page < count($publications) - 1): ?>
			<hr>
		<?php endif; ?>
	</li>
	<?php endforeach; ?>
</ul>
