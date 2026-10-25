<?php

// Surname: wajib, hanya huruf, apostrof, atau tanda hubung
function validateName(&$errors, $field_list, $field_name)
{
    $pattern = "/^[a-zA-Z'-]+$/";

    if (!isset($field_list[$field_name]) || trim($field_list[$field_name]) === '')
        $errors[$field_name] = 'required';
    else if (!preg_match($pattern, $field_list[$field_name]))
        $errors[$field_name] = 'invalid';
}


function validateEmail(&$errors, $field_list, $field_name)
{
    if (!isset($field_list[$field_name]) || trim($field_list[$field_name]) === '')
        $errors[$field_name] = 'required';
    else if (!filter_var($field_list[$field_name], FILTER_VALIDATE_EMAIL))
        $errors[$field_name] = 'invalid';
}


function validatePassword(&$errors, $field_list, $field_name)
{
    if (!isset($field_list[$field_name]) || $field_list[$field_name] === '')
        $errors[$field_name] = 'required';
    else if (strlen($field_list[$field_name]) < 6)
        $errors[$field_name] = 'invalid';
}


function validateAddress(&$errors, $field_list, $field_name)
{
    if (!isset($field_list[$field_name]) || trim($field_list[$field_name]) === '')
        $errors[$field_name] = 'required';
    else if (strlen(trim($field_list[$field_name])) < 5)
        $errors[$field_name] = 'invalid';
}


function validateState(&$errors, $field_list, $field_name)
{
    if (!isset($field_list[$field_name]) || $field_list[$field_name] === '-1')
        $errors[$field_name] = 'required';
    else if (!preg_match('/^[1-8]$/', $field_list[$field_name]))
        $errors[$field_name] = 'invalid';
}


function validateGender(&$errors, $field_list, $field_name)
{
    if (!isset($field_list[$field_name]))
        $errors[$field_name] = 'required';
    else if (!in_array($field_list[$field_name], array('male', 'female'), true))
        $errors[$field_name] = 'invalid';
}


function validateCountry(&$errors, $field_list, $field_name)
{
    if (!isset($field_list[$field_name]) || $field_list[$field_name] !== 'Australia')
        $errors[$field_name] = 'invalid';
}




function errorMessage($field, $code)
{
    $labels = array(
        'surname' => 'Surname',
        'email'   => 'Email address',
        'passwd'  => 'Password',
        'address' => 'Street Address',
        'state'   => 'State',
        'sex'     => 'Gender',
        'country' => 'Country'
    );
    $invalid = array(
        'surname' => 'hanya boleh berisi huruf, tanda petik (\'), atau tanda hubung (-)',
        'email'   => 'format email tidak valid (contoh: nama@domain.com)',
        'passwd'  => 'minimal 6 karakter',
        'address' => 'terlalu pendek (minimal 5 karakter)',
        'state'   => 'pilihan state tidak valid',
        'sex'     => 'pilihan gender tidak valid',
        'country' => 'nilai country tidak valid'
    );
    $label = isset($labels[$field]) ? $labels[$field] : $field;

    if ($code === 'required')
        return "$label wajib diisi";
    return "$label " . (isset($invalid[$field]) ? $invalid[$field] : 'tidak valid');
}
