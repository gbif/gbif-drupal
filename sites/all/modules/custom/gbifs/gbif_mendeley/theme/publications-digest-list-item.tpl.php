<ul class="publication-list">
	<?php foreach ($publications as $k => $p): ?>
	<?php
		$title_link = (isset($p['websites']) && is_array($p['websites'])) ? l($p['title'], $p['websites'][0], array('attributes' => array('target' => '_blank'))) : $p['title'];

		$title_link .= (substr($p['title'], -1) <> '?' || substr($p['title'], -1) <> '.') ? '. ' : '' ;

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
			$journal .= '';
		}

	?>
	<li>
		<strong><?php print $title_link; ?></strong> <?php print $authors . $year; ?> <?php print $journal; ?>
	</li>
	<?php endforeach; ?>
</ul>
