<?php
error_reporting(-1);
?><!DOCTYPE html>
<html>
<head>
<meta charset="utf-8" />
<title>Sticky Notes</title>
<link href="http://fonts.googleapis.com/css?family=Walter+Turncoat" rel="stylesheet" type="text/css"> 
<style type="text/css">
*{
  margin:0;
  padding:0;
}
body{
  font-family:arial,sans-serif;
  font-size:100%;
  margin:3em;
  background:#666;
  color:#fff;
}
#content {
  width: 80%;
  margin: 0 10%;
}
hr {
  margin: 20px;
}
h2,p{
  font-size:100%;
  font-weight:normal;
}
ul,li{
  list-style:none;
}
ul{
  overflow:hidden;
}
ul li a{
  text-decoration:none;
  color:#000;
  background:#ffc;
  display:block;
  height:10em;
  width:10em;
  padding:1em;
  -moz-box-shadow:5px 5px 7px rgba(33,33,33,1);
  -webkit-box-shadow: 5px 5px 7px rgba(33,33,33,.7);
  box-shadow: 5px 5px 7px rgba(33,33,33,.7);
  -moz-transition:-moz-transform .15s linear;
  -o-transition:-o-transform .15s linear;
  -webkit-transition:-webkit-transform .15s linear;
}
ul li{
  margin:1em;
  float:left;
}
ul li h2{
  text-align: right;
  font-size:80%;
  padding-bottom:10px;
}
ul li p{
  font-family:"Walter Turncoat",arial,sans-serif;
  font-size:80%;
}
ul li a{
  -webkit-transform: rotate(-6deg);
  -o-transform: rotate(-6deg);
  -moz-transform:rotate(-6deg);
}
ul li:nth-child(even) a{
  -o-transform:rotate(4deg);
  -webkit-transform:rotate(4deg);
  -moz-transform:rotate(4deg);
  position:relative;
  top:5px;
}
ul li:nth-child(3n) a{
  -o-transform:rotate(-3deg);
  -webkit-transform:rotate(-3deg);
  -moz-transform:rotate(-3deg);
  position:relative;
  top:-5px;
}
ul li:nth-child(5n) a{
  -o-transform:rotate(5deg);
  -webkit-transform:rotate(5deg);
  -moz-transform:rotate(5deg);
  position:relative;
  top:-10px;
}
ul li a:hover,ul li a:focus{
  box-shadow:5px 5px 7px rgba(0,0,0,.7);
  -moz-box-shadow:5px 5px 7px rgba(0,0,0,.7);
  -webkit-box-shadow: 5px 5px 7px rgba(0,0,0,.7);
  -webkit-transform: scale(1.15);
  -moz-transform: scale(1.15);
  -o-transform: scale(1.15);
  position:relative;
  z-index:5;
}
ol{
  text-align:center;
}
ol li{
  display:inline;padding-right:1em;
}
ol li a{
  color:#fff;
}
textarea, input {
  -moz-border-radius: 10px;
  -webkit-border-radius: 10px;
  border-radius: 10px; /* future proofing */
  -khtml-border-radius: 10px; /* for old Konqueror browsers */
  border: none;
}
textarea {
  width: 95%;
  padding: 2.5%;
  margin: 10px 0;
  height: 320px;
}
input {
  width: 10%;
  padding: 10px;
}
</style>
</head>
<body>
<ol>
<?php
if(basename($_SERVER["PHP_SELF"]) != "index.php"){
?>
  <li><a href="index.php">Show</a></li>
<?php
}
if(basename($_SERVER["PHP_SELF"]) != "edit.php"){
?>
  <li><a href="edit.php">Edit</a></li>
<?php
}
?>
</ol>
<hr>
<div id="content">
