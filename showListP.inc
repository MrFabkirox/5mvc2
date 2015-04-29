<?php
// showListP
	function displayModel($list) {

		$names = array('tom', 'robert', 'pierre');

		echo('<ul>');

			foreach($list as $line) {
				echo('<li>'.$line->getDesignation().', '.$line->getPrix().'</li>');
			}

		echo('</ul>');
		
		echo('<ul>');

			foreach($names as $element) {
				echo('<li>'.$element.'</li>');
			}

		echo('</ul>');

	}

	echo('!showListP!');

?>