<ul class="publication-list">
	<?php foreach ($publications as $k => $p): ?>
	<?php
		$title_link = (isset($p['websites'])) ? l($p['title'], $p['websites'][0], array('attributes' => array('target' => '_blank'))) : $p['title'];

		// Authors
		$authors = '';
    $max_count = (count($p['authors']) > 6) ? 6 : count($p['authors']);
		for ($i = 0; $i < $max_count; $i++) {
      $last_name = $p['authors'][$i]['last_name'];
			$authors .= (mb_strtoupper($last_name, 'utf-8') == $last_name) ? ucfirst(strtolower($last_name)) . ' ' : $last_name . ' ';
			$authors .= (isset($p['authors'][$i]['first_name'])) ? strtoupper(substr($p['authors'][$i]['first_name'], 0, 1)) : '';
			if ($i < $max_count - 1) {
				$authors .= ', ';
			}
      unset($last_name);
		}
    if (count($p['authors']) > 6) {
      $authors .= ' et al. ';
    }

		$year = isset($p['year']) ? ' (' . $p['year'] . ')' : NULL;

		$journal = (!empty($p['source'])) ? '<em>' . $p['source'] . '</em>' : '';
		$journal .= (!empty($p['volume'])) ? ' ' . $p['volume'] : '';
		$journal .= (!empty($p['issue'])) ? '(' . $p['issue'] . ')' : '';
		$journal .= (!empty($p['pages'])) ? ' ' . $p['pages'] : '';
		$journal .= (!empty($journal)) ? '.' : '';

		// Keywords
		if (isset($p['keywords']) && count($p['keywords']) > 0) {
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
		<p class="keywords"><?php if (isset($keywords)) print $keywords; ?></p>
		<?php if ($k % $per_page < count($publications) - 1): ?>
			<hr>
		<?php endif; ?>
	</li>
	<?php endforeach; ?>
</ul>
