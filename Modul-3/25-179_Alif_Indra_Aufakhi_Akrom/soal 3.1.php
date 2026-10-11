<?php
$height = array("Andy"=>"176", "Barry"=>"165", "Charlie"=>"170");

$height["David"] = "180";
$height["Ethan"] = "172";
$height["Frank"] = "168";
$height["George"] = "175";
$height["Harry"] = "182";

$output = array();
foreach ($height as $nama => $tinggi) {
    $output[] = '"' . $nama . '"=>"' . $tinggi . '"';
}
echo 'height = (' . implode(', ', $output) . ')<br>';
echo "Nilai dengan indeks terakhir: " . $height["Harry"] . "<br>";

unset($height["Barry"]);

$output_after = array();
foreach ($height as $nama => $tinggi) {
    $output_after[] = '"' . $nama . '"=>"' . $tinggi . '"';
}
echo 'height = (' . implode(', ', $output_after) . ')<br>';
echo "Nilai dengan indeks terakhir setelah dihapus: " . $height["Harry"];
?>