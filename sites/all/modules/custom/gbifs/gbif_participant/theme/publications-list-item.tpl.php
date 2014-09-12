<ul class="publication-list">
	<?php foreach ($publications as $k => $p): ?>
		<?php
			$title_link = l($p['title'], $p['url']);

			// Authors
			$authors = '';
			for ($i = 0; $i < count($p['authors']); $i++) {
				$authors .= $p['authors'][$i]['surname'] . ', ';
				$authors .= strtoupper(substr($p['authors'][$i]['forename'], 0, 1)) . '.';
				if ($i < count($p['authors']) - 1) {
					$authors .= ', ';
				}
			}
			$year = $p['year'];
			$journal = '<em>' . $p['publication_outlet'] . '</em>';
			$journal .= (!empty($p['volume'])) ? ' ' . $p['volume'] : '';
			$journal .= (!empty($p['issue'])) ? '(' . $p['issue'] . ')' : '';
			$journal .= (!empty($p['pages'])) ? ' ' . $p['pages'] . '.' : '. ';

			// Keywords
			$keywords = 'Keyword(s): ';
			for ($i = 0; $i < count($p['keywords']); $i++) {
				$keywords .= $p['keywords'][$i];
				if ($i < count($p['keywords']) - 1) {
					$keywords .= ', ';
				}
				elseif ($i == count($p['keywords'])) {
					$keywords .= '.';
				}
			}
		?>
		<li>
			<h3><?php print $authors; ?></h3>
			<h4><?php print $title_link; ?></h4>
			<p><?php print $journal; ?></p>
			<p><?php print $p['abstract']; ?></p>
			<p class="keywords"><?php print $keywords; ?></p>
			<?php if ($k < count($publications) - 1): ?>
			<hr>
			<?php endif; ?>
		</li>
	<?php endforeach; ?>
</ul>
