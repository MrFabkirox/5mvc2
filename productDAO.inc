<?php
// productDAO
	function connect() {
		global $db;

		$db = mysql_connect('localhost', 'root', 'root') or die(" error connection db ");
		mysql_select_db('MVCMarket', $db) or die(" error selection db ");

	}

	function dataFromDb() {

		$query = mysql_query("SELECT * FROM produits");
		if(!$query) {
			die(" error in query ");
		}
		return $query;

	}

	function disconnect() {
		global $db;

		mysql_close($db);

	}

	echo('!productDAO!');

?>