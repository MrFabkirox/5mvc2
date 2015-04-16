<!DOCTYPE HTML>
<html>
<head>
  <title>5mvc2</title>
  <meta charset="utf-8"/>
<style>
	#left {
		width: 75%;
		position: fixed;
	}
	#right {
		width: 25%;
		position: absolute;
		right: 0;
		background: grey;
		margin: 20px;
		padding: 4px;
	}
</style>
<script></script>

</head>
<body>

<div id="right"><?php include("menu.php"); ?></div>

<div id="left">

<h3>5mvc2, index</h3>


<?php

	include('productList.inc');
	include('productDAO.inc');
	include('Product.inc');
	include('showListP.inc');

	buildModel();

	showList();
	
?>


</div>

</body>
</html>