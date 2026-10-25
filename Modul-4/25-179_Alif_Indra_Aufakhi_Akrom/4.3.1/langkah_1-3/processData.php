<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <title>Validasi Sederhana - Langkah 1-3</title>
</head>
<body>
    <?php
    require 'validate.inc';

    if (validateName($_POST, 'surname'))
        echo 'Data OK!';
    else
        echo 'Data invalid!';
    ?>
</body>
</html>
