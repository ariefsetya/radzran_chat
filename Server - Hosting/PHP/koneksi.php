<?php
date_default_timezone_set("Asia/Jakarta");
error_reporting(0);
mysql_connect("SERVER","USERMySQL","PASSWORDMySQL") or die("Server Down!");
mysql_select_db("DATABASENAME") or die("Where is your database?");
?>