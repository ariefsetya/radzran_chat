<?php
include "koneksi.php";
$a = mysql_query("select*from radzran_pengguna where namapengguna = '".$_GET['nama']."'");
$b = mysql_fetch_row($a);
echo $b[6];
?>