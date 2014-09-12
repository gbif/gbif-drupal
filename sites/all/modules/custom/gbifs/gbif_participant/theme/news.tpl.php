<?php

?>
<article id="country-news" class="container">
	<div class="row">
      <section id="news" class="col-md-12 well well-lg well-margin-top clearfix"<?php print $attributes; ?>>
        <div class="row">
					<header class="content-header col-md-8">
						<h2><?php print $html['title']; ?><a href="<?php print $html['feed_url']; ?>"><img class="rss-icon" src="/sites/all/themes/custom/bvng/images/rss-feed.gif"/></a></h2>
					</header>
					<header class="content-header sidebar-header-country col-md-4">
						<h2><?php print $html['node_feed_title']; ?><a href="<?php print $html['node_feed_url']; ?>"><img class="rss-icon" src="/sites/all/themes/custom/bvng/images/rss-feed.gif"/></a></h2>
					</header>
        </div>
        <div class="row">
					<div class="content news-list col-md-8">
						<?php print $html['list']; ?>
					</div>
					<div class="content content-sidebar col-md-4">
						<?php print $html['node_feed_list']; ?>
					</div>
        </div>
      </section>
	</div>
</article>
