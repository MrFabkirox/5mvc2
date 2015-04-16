<?php

	function connect() {
		global $db;

		$db = mysql_connect('localhost','root', 'root')or die("can t connect to the db");
		mysql_select_db("MVCMarket", $db) or die("can t select db");
	}

	function recupDataProd() {
		$res = mysql_query("SELECT * FROM produits");
		if(!$res) {
			die("can t execute query");
		}
		return $res;
	}

	function disconnect() {
		global $db;
		mysql_close($db);
	}

?>