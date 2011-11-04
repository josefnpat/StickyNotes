<?php include('header.inc');?>
<?php
$data = stripslashes(file_get_contents("data"));
$current_md5 = md5($data);
if(isset($_POST['data'])){
  if($_POST['page_md5'] == $current_md5){
    file_put_contents("data",stripslashes($_POST['data']));
    $data = $_POST['data'];
    echo "Saved.<br \>\n";
    $current_md5 = md5($_POST['data']);
  } else {
    echo "Sorry, the current hash does not match the page hash.<br />\nDiff:<br />\n";
    $current_data = explode("\n",rtrim($data));
    $prev_data = explode("\n",rtrim($_POST['data']));
    $diff = array_diff($prev_data,$current_data);
    foreach($diff as $line){
      echo "$line<br />\n";
    }
  }
}
?>
<script type="text/javascript">
function submitEdit(){
  edit.save.value ="Saving...";
}
</script>
<form id="edit" action="edit.php" method="post">
<textarea name="data"><?php echo stripslashes($data); ?></textarea>
<input type="hidden" name="page_md5" value="<?php echo $current_md5; ?>" />
<input id="save" type="submit" value="Save" onclick='return submitEdit()' />
<input type="reset" />
<small><?php echo "Hash: $current_md5";?></small>
</form>
<hr />
<pre>
Examples:
	Straightforward 	&mdash; Hello world.
	Category 		&mdash; Welcome:Hellow World.
	Ignore (Not Sticky)	&mdash; !Hellow World.
Technical Format:
	[!][&lt;Category>:]&lt;Text>
</pre>


<?php include('footer.inc');?>
