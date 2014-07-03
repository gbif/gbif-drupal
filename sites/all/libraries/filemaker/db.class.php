<?php
$path = preg_replace("#^(.*[/\\\\])[^/\\\\]*[/\\\\][^/\\\\]*$#",'\1',__FILE__);
set_include_path(get_include_path() . PATH_SEPARATOR . $path);
require_once('FileMaker.php');

class db extends FileMaker {

	private $instance = NULL ;

	public function __construct( $hostname='', $database='', $username='', $password='' ) {
		$hostname = "filemaker.gbif.org";
		$database = "IMS_NG";
		$username = "webreadonly";
		$password = "webaccessro";

		$this->instance = $this->FileMaker( $database, $hostname, $username, $password ) ;
		return $this->instance;
	}

	private function __clone(){

	}

} /*** end of class ***/

?>

