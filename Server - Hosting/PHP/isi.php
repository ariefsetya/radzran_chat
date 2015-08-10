<?php
include "koneksi.php";
$a = mysql_query("select*from radzran order by id desc limit 20");
$data = array();
$i = 0;
while($b = mysql_fetch_array($a)){
	echo $b['nama']." :\r\n".$b['isi']."\r\n".$b['tanggal']." ".$b['jam']."\r\n";
	echo "\r\n//----------------\r\n\r\n";
}
?>