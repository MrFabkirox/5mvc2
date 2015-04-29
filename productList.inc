<?php
// productList
	
	function buildModel() {
		global $model;

		connect();
		$res = dataFromDb();
		disconnect();

		$model = array();

		while($prod = mysql_fetch_object($res, "Product")) {
			$model[] = $prod;
		}
		$_SESSION['prods'] = $list; // ?
echo('buildModel');
	}

	function showModel() {
		global $model;

		displayModel($model);

	}

	echo('!productList!');

?>