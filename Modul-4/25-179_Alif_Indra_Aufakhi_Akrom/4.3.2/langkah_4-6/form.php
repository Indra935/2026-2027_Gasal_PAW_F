<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <title>Register - Self-Submission (Langkah 4-6)</title>
    <style>
        body { font-family: Verdana, sans-serif; font-size: 13px; }
        fieldset { background: #ddddff; width: 460px; }
        .field { margin: 4px 0; }
        .field label { display: inline-block; width: 120px; text-align: right; margin-right: 8px; vertical-align: top; }
    </style>
</head>
<body>
<?php

$errors = array();

if (isset($_POST['surname']))
{
    require 'validate.inc';
    validateName($errors, $_POST, 'surname');

    if ($errors)
    {
        echo '<h1>Invalid, correct the following errors:</h1>';
        foreach ($errors as $field => $error)
            echo "$field $error<br/>";

        include 'form.inc';
    }
    else
    {
        echo 'Form submitted successfully with no errors';
    }
}
else
{
    include 'form.inc';
}
?>
</body>
</html>
