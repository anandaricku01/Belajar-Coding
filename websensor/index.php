


<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" type="text/css" href="css/bootstrap.min.css">
	<script type="text/javascript" src = "jquery/jquery.min.js"></script>
	<title>Web Sensor Realtime</title>

	<script type="text/javascript">
				$(document).ready(function(){
						setInterval(function(){
							$("#ceksensor").load('ceksensor.php');
						}, 1000);
				});
		</script>

<style>
	body {
		background-color: #94b8b8;
	}
</style>

</head>

<body>
	<div class="container" style="text-align: center; padding-top: 2%; width: 500px">
		<h1>Project Data Logger</h1>
		<h1>Mata Kuliah Basis Data</h1>
	</div>
	<div class="container" style="text-align: center; padding-top: 2%; width: 500px">

	<h2>Nilai Sensor LDR</h2>
		<div class="panel panel-default">
			<div class="panel-body">
				<h1><span id="ceksensor"></span></h1>
			</div>
		</div>
			<img src="images/1200px-Logo_Universitas_Brawijaya.svg.png" width="250" height="250">
	</div>
</body>

</html>
