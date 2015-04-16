<?php

	function showListProduct($list) {
		foreach ($list as $prod) {
			echo("<li>".$prod->getDesignation()." , ".$prod->getPrix()." euros");
		}
		echo("</ul");
	}
	
?>