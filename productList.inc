<?php

	$model = array();

	function buildModel() {
		global $model;

		$model = array();
		connect();
		$res = recupDataProd();
		disconnect();

		while($prod = mysql_fetch_object($res, 'Product')) {
			$model[] = $prod;
		}
		$_SESSION['prods'] = $list;
	}

	function showList() {
		global $model;
		showListProduct($model);
	}

?>