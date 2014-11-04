<article id="participant-list" class="container">
	<div class="row">

		<section id="overview" class="col-xs-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
			<div class="row">
				<header class="content-header col-xs-8">
					<h2><?php print t('Overview'); ?></h2>
				</header>
				<header class="content-header sidebar-header-country col-xs-4">
					<h2><?php print t('Quick links'); ?></h2>
				</header>
			</div>
			<div class="row">
				<div class="content col-xs-8">
					<p><?php print $html['overview_paragraph']; ?></p>
				</div>
				<aside class="content content-sidebar col-xs-4">
					<?php print $html['quick_links']; ?>
				</aside>
			</div>
		</section>

		<?php foreach ($types as $type): ?>
		<section id="<?php print $type['key']; ?>" class="col-xs-12 well well-lg clearfix"<?php print $attributes; ?>>
			<div class="row">
				<header class="content-header col-xs-8">
					<h2><?php print $type['title']; ?></h2>
				</header>
				<header class="content-header sidebar-header-country col-xs-4">
					<h2><?php print t('Metrics'); ?></h2>
				</header>
			</div>
			<div class="row">
				<div class="content col-xs-8">
					<p><?php print $html[$type['key'] . '_paragraph']; ?></p>
					<?php print $html[$type['key'] . '_list']; ?>
				</div>
				<aside class="content content-sidebar col-xs-4">
					<p><?php print $html[$type['key'] . '_metrics']; ?></p>
				</aside>
			</div>
		</section>
		<?php endforeach; ?>


	</div>
</article>