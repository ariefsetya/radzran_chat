<?php
include "koneksi.php";
$a = mysql_query("insert into radzran_pengguna (namapengguna,password,tanggal,jam) values('".$_POST['nama']."','".md5($_POST['pass'])."','".date("Y-m-d")."','".date("H:i:s")."')");
?>