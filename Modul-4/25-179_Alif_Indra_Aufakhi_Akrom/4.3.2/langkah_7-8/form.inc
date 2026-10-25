<?php

if (!function_exists('old'))
{
    function old($name)
    {
        return isset($_POST[$name]) ? htmlspecialchars($_POST[$name], ENT_QUOTES, 'UTF-8') : '';
    }
}

$states = array(
    '1' => 'Australian Capital Territory',
    '2' => 'Queensland',
    '3' => 'Victoria',
    '4' => 'New South Wales',
    '5' => 'Tasmania',
    '6' => 'South Australia',
    '7' => 'Western Australia',
    '8' => 'Northern Territory'
);
?>
<h1>Register</h1>
<fieldset>
    <legend>Person Details</legend>
    <form name="myForm" action="form.php" method="POST">
        <div class="field">
            <label for="surname">Surname</label>
            <input type="text" id="surname" name="surname" size="31" value="<?php echo old('surname'); ?>"/>
        </div>
        <div class="field">
            <label for="email">Email address</label>
            <input type="text" id="email" name="email" size="31" value="<?php echo old('email'); ?>"/>
        </div>
        <div class="field">
            <label for="passwd">Password</label>
            <!-- Password sengaja TIDAK diisi kembali demi keamanan -->
            <input type="password" id="passwd" name="passwd" size="31"/>
        </div>
        <div class="field">
            <label for="address">Street Address</label>
            <textarea id="address" name="address" rows="3" cols="22"><?php echo old('address'); ?></textarea>
        </div>
        <div class="field">
            <label for="state">State</label>
            <select id="state" name="state">
                <option value="-1">[choose your state]</option>
                <?php
                foreach ($states as $value => $label)
                {
                    $selected = (isset($_POST['state']) && $_POST['state'] === (string)$value) ? ' selected' : '';
                    echo "<option value=\"$value\"$selected>$label</option>\n";
                }
                ?>
            </select>
        </div>
        <div class="field">
            <input type="hidden" name="country" value="Australia"/>
        </div>
        <div class="field">
            <label>Gender</label>
            <input type="radio" id="male" name="sex" value="male"<?php echo (isset($_POST['sex']) && $_POST['sex'] === 'male') ? ' checked' : ''; ?>/><label for="male" style="width:auto;margin:0 8px 0 0">Male</label>
            <input type="radio" id="female" name="sex" value="female"<?php echo (isset($_POST['sex']) && $_POST['sex'] === 'female') ? ' checked' : ''; ?>/><label for="female" style="width:auto;margin:0">Female</label>
        </div>
        <div class="field">
            <label for="vegetarian">Vegetarian?</label>
            <input type="checkbox" id="vegetarian" name="vegetarian"<?php echo isset($_POST['vegetarian']) ? ' checked' : ''; ?>/>
        </div>
        <div class="field">
            <label>&nbsp;</label>
            <input type="submit" value="Submit" name="submit"/><input type="reset" value="Reset" name="reset"/>
        </div>
    </form>
</fieldset>
