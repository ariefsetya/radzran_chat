<?php
include "koneksi.php";
$nama = $_POST['nama'];
$isi = $_POST['isi'];
$tanggal = date("Y-m-d");
$jam = date("H:i:s");

mysql_query("insert into radzran (nama,isi,tanggal,jam) values('".$nama."','".$isi."','".$tanggal."','".$jam."')");
echo "sukses";
?>