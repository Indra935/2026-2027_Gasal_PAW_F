<?php
$fruits = array("Avocado", "Blueberry", "Cherry");

array_push($fruits, "Durian", "Elderberry", "Fig", "Grape", "Honeydew");

echo 'fruits = ("' . implode('", "', $fruits) . '")<br>';

$index_tertinggi = count($fruits) - 1;
echo "Nilai dengan indeks tertinggi: " . $fruits[$index_tertinggi];
?>