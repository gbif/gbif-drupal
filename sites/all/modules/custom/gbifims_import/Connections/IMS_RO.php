<?php
// FMStudio v1.0 - do not remove comment, needed for DreamWeaver support
# FileName="Connection_php_FileMaker.htm"
# Type="FileMaker"
# FileMaker="true"
// $path = preg_replace("#^(.*[/\\\\])[^/\\\\]*[/\\\\][^/\\\\]*$#",'\1',__FILE__);
// set_include_path(get_include_path() . PATH_SEPARATOR . $path);
require_once(dirname(__FILE__).'/../FileMaker.php');
require_once(dirname(__FILE__).'/../FileMaker/FMStudio_Tools.php');
$ims = variable_get('ims_connection');
$hostname_IMS_RO = $ims['hostname'];
$database_IMS_RO = $ims['database'];
$username_IMS_RO = $ims['username'];
$password_IMS_RO = $ims['password'];
$IMS_RO = new FileMaker($database_IMS_RO, $hostname_IMS_RO, $username_IMS_RO, $password_IMS_RO); 
?>