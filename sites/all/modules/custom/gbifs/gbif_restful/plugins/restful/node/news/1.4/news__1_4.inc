<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__1_4',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type with rate limit for anonymous users.'),
  'class' => 'GbifRestfulNewsResource',
  // Set the minor version.
  'minor_version' => 4,
  'rate_limit' => array(
    // The 'request' event is the basic event. You can declare your own events.
    'request' => array(
      'event' => 'request',
      // Rate limit is cleared every day.
      'period' => new \DateInterval('P1D'),
      'limits' => array(
        'authenticated user' => 3,
        'anonymous user' => 2,
        'administrator' => \RestfulRateLimitManager::UNLIMITED_RATE_LIMIT,
      ),
    ),
  ),
);
