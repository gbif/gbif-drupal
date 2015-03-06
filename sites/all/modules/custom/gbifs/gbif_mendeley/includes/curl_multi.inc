<?php
/*
 * @file Customised curl_multi code from Shailesh N. Humbad. Integrated with Drupal.
 * @link http://www.somacon.com/p537.php
 */

// LICENSE: PUBLIC DOMAIN
// The author disclaims copyright to this source code.
// AUTHOR: Shailesh N. Humbad
// SOURCE: http://www.somacon.com/p539.php
// DATE: 6/4/2008

// Class to run parallel GET requests and return the transfer
class ParallelGet {
	function __construct($urls) {
		// Create get requests for each URL
		$mh = curl_multi_init();
		foreach ($urls as $i => $url) {
			$ch[$i] = curl_init($url);
			curl_setopt($ch[$i], CURLOPT_RETURNTRANSFER, 1);
			curl_setopt($ch[$i], CURLOPT_HEADER, TRUE);
			curl_multi_add_handle($mh, $ch[$i]);
		}

		$active = NULL;
		// Start performing the request
		do {
			$mrc = curl_multi_exec($mh, $active);
		} while ($mrc == CURLM_CALL_MULTI_PERFORM);

		// Loop and continue processing the request
		while ($active && $mrc == CURLM_OK) {
			// Wait forever for network

			if (curl_multi_select($mh) == -1) {
				usleep(1);
			}
			do {
				$mrc = curl_multi_exec($mh, $active);
			} while ($mrc == CURLM_CALL_MULTI_PERFORM);
		}

		// Check for any errors
		if ($mrc != CURLM_OK) {
			trigger_error("Curl multi read error $mrc\n", E_USER_WARNING);
		}

		// Extract the content
		foreach ($urls as $i => $url) {
			// Check for errors
			$curlError = curl_error($ch[$i]);
			if ($curlError == '') {
				$response[$i] = curl_multi_getcontent($ch[$i]);
			}
			else {
				$message = "Curl error on handle $i: $curlError";
				watchdog('mendeley', $message, array(), WATCHDOG_ERROR);
				$response[$i] = 'error';
			}
			// Remove and close the handle
			curl_multi_remove_handle($mh, $ch[$i]);
			curl_close($ch[$i]);
		}
		// Clean up the curl_multi handle
		curl_multi_close($mh);

		// Return the response data.
		$this->response = $response;
	}
}