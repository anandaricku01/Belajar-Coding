<?php 
	
	// koneksi ke database
	$konek = mysqli_connect("localhost","root","","websensor");

	// baca data yang dikirim oleh nodemcu
	$nilai = $_GET["sensor"];

	// update data di database (tabel sensor)
	mysqli_query($konek, "update sensor set nilai_sensor='$nilai'");
 ?>