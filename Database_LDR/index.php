<!DOCTYPE html>
<html>
<head>
	<title>MEMBUAT GRAFIK DARI DATABASE MYSQL</title>
	<script type="text/javascript" src="chartjs/Chart.js"></script>
</head>
<body>
    <div> <!-- style untuk chart-->
        <style type="text/css">
            body{
                font-family: roboto;
            }

            table{
                margin: 0px auto;
            }
        </style>
    </div>

    <div> <!-- style untuk tabel -->
        <style>
            #wntable {
            border-collapse: collapse;
            width: 50%;
            }
    
            #wntable td, #wntable th {
            border: 1px solid #ddd;
            padding: 8px;
            }
    
            #wntable tr:nth-child(even){background-color: #f2f2f2;}
    
            #wntable tr:hover {background-color: #ddd;}
    
            #wntable th {
            padding-top: 12px;
            padding-bottom: 12px;
            text-align: left;
            background-color: #00A8A9;
            color: white;
            }
        </style>
    </div>

	<center>
		<h2>Persentase Terang - Gelap Cahaya Yang Terukur</h2>
	</center>


	<?php 
	include 'koneksi.php';
	?>

	<div style="width: 800px;margin: 0px auto;">
		<canvas id="myChart"></canvas>
	</div>

    <br>
    <br>

    <center>
		<h2>Jumlah Terang - Gelap Cahaya Yang Terukur</h2>
	</center>

    <div style="width: 800px;margin: 0px auto;">
		<canvas id="myChart1"></canvas>
	</div>

	<br/>
	<br/>

	<div id="cards" class="cards" align="center">
        <h1> Data Sensor Kelembaban dan Suhu</h1>
        <table id="wntable">
          <tr>
            <th>No</th>
            <th>Nilai</th>
            <th>Waktu</th>
          </tr>
          <?php
 
          $sql = mysqli_query($koneksi, "SELECT * FROM datasensor ORDER BY id DESC");
 
          if(mysqli_num_rows($sql) == 0){ 
            echo '<tr><td colspan="14">Data Tidak Ada.</td></tr>'; // jika tidak ada entri di database maka tampilkan 'Data Tidak Ada.'
          }else{ // jika terdapat entri maka tampilkan datanya
            $no = 1; // mewakili data dari nomor 1
            while($row = mysqli_fetch_assoc($sql)){ // fetch query yang sesuai ke dalam array
              echo '
              <tr>
                <td>'.$no.'</td>
                <td>'.$row['data'].'</td>
                <td>'.$row['waktu'].'</td>
              </tr>
              ';
              $no++; // mewakili data kedua dan seterusnya
            }
          }
          ?>
        </table>
    </div>

    <!-- untuk diagram donat -->
    <script>
        var ctx = document.getElementById("myChart").getContext('2d');
        var myChart = new Chart(ctx, {
            type: 'pie',
            data: {
                labels: ["Terang","Gelap", "Remang"],
                datasets: [{
                    label: 'Tingkat kecerahan',
                    data: [
                    <?php 
                    $terang = mysqli_query($koneksi,"select * from datasensor where data > '500'");
                    echo mysqli_num_rows($terang);
                    ?>, 
                    <?php 
                    $remang = mysqli_query($koneksi,"select * from datasensor where data <= '500' and data > 300");
                    echo mysqli_num_rows($remang);
                    ?>,
                    <?php 
                    $gelap = mysqli_query($koneksi,"select * from datasensor where data <= '300'");
                    echo mysqli_num_rows($gelap);
                    ?>
                    ],
                    backgroundColor: [
                    'rgba(255, 99, 132, 0.2)', // terang
                    'rgba(54, 162, 235, 0.2)', // gelap
                    'rgba(70, 30, 150, 0.2)' // remang
                    ],
                    borderColor: [
                    'rgba(255,99,132,1)', // terang
                    'rgba(54, 162, 235, 1)', // gelap
                    'rgba(70, 30, 150, 1)' // remang
                    ],
                    borderWidth: 1
                }]
            },
            options: {
                scales: {
                    yAxes: [{
                        ticks: {
                            beginAtZero:true
                        }
                    }]
                }
            }
        });
    </script>

    <!-- untuk diagram batang -->
    <script> 
        var ctx = document.getElementById("myChart1").getContext('2d');
        var myChart = new Chart(ctx, {
            type: 'bar',
            data: {
                labels: ["Terang","Gelap", "Remang"],
                datasets: [{
                    label: 'Tingkat kecerahan',
                    data: [
                    <?php 
                    $terang = mysqli_query($koneksi,"select * from datasensor where data > '500'");
                    echo mysqli_num_rows($terang);
                    ?>, 
                    <?php 
                    $remang = mysqli_query($koneksi,"select * from datasensor where data <= '500' and data > 300");
                    echo mysqli_num_rows($remang);
                    ?>,
                    <?php 
                    $gelap = mysqli_query($koneksi,"select * from datasensor where data <= '300'");
                    echo mysqli_num_rows($gelap);
                    ?>
                    ],
                    backgroundColor: [
                    'rgba(255, 99, 132, 0.2)', // terang
                    'rgba(54, 162, 235, 0.2)', // gelap
                    'rgba(70, 30, 150, 0.2)' // remang
                    ],
                    borderColor: [
                    'rgba(255,99,132,1)', // terang
                    'rgba(54, 162, 235, 1)', // gelap
                    'rgba(70, 30, 150, 1)' // remang
                    ],
                    borderWidth: 1
                }]
            },
            options: {
                scales: {
                    yAxes: [{
                        ticks: {
                            beginAtZero:true
                        }
                    }]
                }
            }
        });
    </script>
</body>
</html>