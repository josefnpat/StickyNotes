<?php include("header.inc");?>
  <ul>
<?php
$colors = array("ccf","cfc","cff","fcc","fcf","fff","ccc",);
$cats = array();
foreach(explode("\n",rtrim(file_get_contents("data"))) as $note){
  if($note[0]!="!"){
    $temp = explode(":",$note);
    if(count($temp) > 1){
      $c_cat = array_shift($temp);
      if(!array_key_exists($c_cat,$cats)){
        $cats[$c_cat] = count($cats);
      }
      $text = implode(":",$temp);
    } else {
      $c_cat = "";
      $text = $note;
    }
    $color = @$colors[$cats[$c_cat]];
?>
    <li>
      <a style="background:#<?php echo $color; ?>" >
        <h2><?php echo "$c_cat"; ?></h2>
        <p><?php echo htmlentities($text); ?></p>
      </a>
    </li>
<?php
  }
}
?>
  </ul>
<?php include("footer.inc");?>
