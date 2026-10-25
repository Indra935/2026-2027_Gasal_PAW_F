<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <title>Register - Self-Submission (Langkah 9)</title>
    <style>
        body { font-family: Verdana, sans-serif; font-size: 13px; }
        fieldset { background: #ddddff; width: 460px; }
        .field { margin: 4px 0; }
        .field label { display: inline-block; width: 120px; text-align: right; margin-right: 8px; vertical-align: top; }
        .error-list { color: #b00020; }
        .err { color: #b00020; font-size: 11px; display: block; margin-left: 132px; }
    </style>
</head>
<body>
<?php

$errors = array();

if ($_SERVER['REQUEST_METHOD'] === 'POST')
{
    require 'validate.inc';
    validateName($errors, $_POST, 'surname');
    validateEmail($errors, $_POST, 'email');
    validatePassword($errors, $_POST, 'passwd');
    validateAddress($errors, $_POST, 'address');
    validateState($errors, $_POST, 'state');
    validateGender($errors, $_POST, 'sex');
    validateCountry($errors, $_POST, 'country');

    if ($errors)
    {
        echo '<h1>Invalid, correct the following errors:</h1>';
        echo '<ul class="error-list">';
        foreach ($errors as $field => $error)
            echo '<li>' . htmlspecialchars(errorMessage($field, $error)) . '</li>';
        echo '</ul>';

        include 'form.inc';
    }
    else
    {
        echo 'Form submitted successfully with no errors';
    }
}
else
{
    // tampilkan form (pertama kali dibuka)
    include 'form.inc';
}
?>
</body>
</html>
