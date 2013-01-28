<meta http-equiv="refresh" content="1" >
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">  

<div style="margin-top: 300px; text-align: center; font-size: 60px;">
<?php
	$myFile = "temperatures.txt";
	$fh = fopen($myFile, 'r');
	$theData = fread($fh, filesize($myFile));
	fclose($fh);
	echo "The temperature in the flat is " . $theData . "°C";
?>
</div>