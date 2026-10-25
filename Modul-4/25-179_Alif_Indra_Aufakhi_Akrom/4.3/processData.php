<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <title>Hasil Pemrosesan Form - Sub-bab 4.3</title>
</head>
<body>
    <h3>Posted data: </h3>
    <?php
    
    foreach ($_POST as $key => $value)
        echo "($key) => ($value)<br/>";

    ?>
</body>
</html>
