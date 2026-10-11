<?php
$weight = array("Andy"=>"70", "Barry"=>"65", "Charlie"=>"75");
$keys = array_keys($weight);
$length = count($weight);

for($i = 0; $i < $length; $i++) {
    $nama = $keys[$i];
       echo $nama . " is " . $weight[$nama] . " kg.<br>";
}
?>