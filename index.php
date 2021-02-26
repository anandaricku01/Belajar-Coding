<?php 

// MATERI PERTEMUAN KE - 3 -> PENGULANGAN

/* 
	ragam pengulangan 
	1. for
	2. while
	3. do ... while...
	4. foreach (pengulangan khusus array)

*/

// for ($i = 0; $i < 5; $i++) { 
// 	echo "Hello world! <br>";
// }

// $i = 0;

// while ( $i <= 10) {
// 	echo "nilai i = ";
// 	echo $i;
// 	echo "<br>";

// 	$i++;
// }

// $i = 5;

// do { 

// 	echo "do <br>";

// } while ($i < 5);

// ?>

<!DOCTYPE html>
<html>
<head>
	<title>Belajar PHP pertemuan 3</title>
	<style type="text/css">
		.warna-bg 
		{
			background-color: cyan;
		}
	</style>
</head>
<body>

	<!-- tanpa for untuk membuat tabel -->

	<p>Tanpa menggunakan for : </p>
	<table border="1" cellpadding="10" cellspacing="0">
		<tr>
			<td>1,1</td>
			<td>1,2</td>
			<td>1,3</td>
			<td>1,4</td>
			<td>1,5</td>
		</tr>
		<tr>
			<td>2,1</td>
			<td>2,2</td>
			<td>2,3</td>
			<td>2,4</td>
			<td>2,5</td>
		</tr>
		<tr>
			<td>3,1</td>
			<td>3,2</td>
			<td>3,3</td>
			<td>3,4</td>
			<td>3,5</td>
		</tr>
	</table> <br>

	<!-- menggunakan for untuk membuat tabel -->

	<p>menggunakan for : </p>
	<table border="1" cellpadding="10" cellspacing="0">
		<?php
			
			for ($i=1; $i <= 3 ; $i++) 
			{ 
				echo "<tr>";
					for ($j=1; $j <= 5 ; $j++) { 
						echo "<td>$i,$j</td>";
					}
				echo "</tr>";
			}

		?>
	</table> <br>

	<!-- menggunakan for templating (teknik biar ga bingung) -->

	<p>menggunakan for templating : </p>
	<table border="1" cellpadding="10" cellspacing="0">
		<?php for ($i=1; $i <= 3 ; $i++) { ?>
			<tr>
				<?php for ($j=1; $j <= 5 ; $j++) {?>
					<td><?php echo "$i,$j";  ?></td>
				<?php } ?>
			</tr>
		<?php  }?>
	</table> <br>

	<!-- menggunakan for templating tapi lebih ga bingungin -->

	<p>menggunakan for templating yang tidak membingungkan : </p>
	<table border="1" cellpadding="10" cellspacing="0">
		<?php for ($i=1; $i <= 3 ; $i++) : ?>
			<tr>
				<?php for ($j=1; $j <= 5 ; $j++) : ?>
					<td> <?php echo "$i,$j";  ?></td>
				<?php endfor; ?>
			</tr>
		<?php endfor;  ?>
	</table> <br>

	<!-- menggunakan for templating tapi lebih ga bingungin dan pake pengondisian if (style css) -->

	<p>menggunakan for templating yang tidak membingungkan dan pake pengondisian if (style css) : </p>
	<table border="1" cellpadding="10" cellspacing="0">
		<?php for ($i=1; $i <= 3 ; $i++) : ?>
			<?php if ($i % 2 == 1 ) :?>
				<tr class="warna-bg">
			<?php else : ?>
				<tr>
			<?php endif; ?>
					<?php for ($j=1; $j <= 5 ; $j++) : ?>
						<td> <?php echo "$i,$j";  ?></td>
					<?php endfor; ?>
				</tr>
		<?php endfor;  ?>
	</table>
</body>
</html>