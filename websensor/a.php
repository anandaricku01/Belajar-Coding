
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, intial-scale=1">
	<link rel="stylesheet" href="css.css">
	<script type="text/javascript" src = "jquery/jquery.min.js"></script>
	<title>Fuzzy Kelompok 5</title>
	<script type="text/javascript">
		$(document).ready(function(){
			setInterval(function(){
				$("#ceksensor").load('ceksensor.php');
			}, 1000);
		});
	</script>




</head>
<div class="body">
<body>
	<div class="h2">
		<h2>Fuzzy Kelompok 5</h2>
	</div>

	<div class ="tul">
		<!--<ul>NILAI PWM</ul>-->
		<ul><span id ="ceksensor"></span></ul>
	</div>



</body>
</div>
</html>
