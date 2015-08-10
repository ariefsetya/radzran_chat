<?php
include "koneksi.php";
$a = mysql_query("select*from radzran_pengguna where namapengguna = '".$_POST['nama']."'");
if(mysql_num_rows($a)>0){
echo "masuk";
}else{
echo "daftar";
}
?>