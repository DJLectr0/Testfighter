<?php  
if($_POST["password"]=="testfighter2015"){
	$os = $_POST["os"];
$target = "builds/$os/";
	
$target = $target . $_POST['path'];
if (!is_dir($target)) {
    mkdir($target, 0777, true);
}
$target = $target . basename( $_FILES['uploaded']['name']) ;
$ok=1;
$fileType = $_FILES["uploaded"]["type"];
if ($fileType =="text/php")  {  
	echo "No PHP files<br>";  
	$ok=0;  
} 
if(file_exists($target)) {
    chmod($target,0755); //Change the file permissions if allowed
    unlink($target); //remove the file
}
if(move_uploaded_file($_FILES['uploaded']['tmp_name'], $target)){ 
	echo "The file ". basename( $_FILES['uploaded']['name']). " has been uploaded to $target"; 
}  else { 
	echo "Sorry, there was a problem uploading your file. $target / ". basename( $_FILES['uploadedfile']['name']) . " $fileType"; 
} 
} else {
	echo "Wrong password";
}
?>