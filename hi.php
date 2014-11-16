<html>
<form action="hi.php" method="post">
<input type="text" name="value">
<input type="submit" value="sumbit">
<?php
if(isset($_POST['submit'])){
$value = $_POST['value'];
$output = shell_exec('./sort ' . escapeshellcmd($value));
echo '<p>'. $value .'</p>';
}
?>
</form>
</html>

