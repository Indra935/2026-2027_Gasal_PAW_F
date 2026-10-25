<!-- Langkah 4: seluruh skrip di dalam elemen <form> dipindahkan ke file ini -->
<h1>Register</h1>
<fieldset>
    <legend>Person Details</legend>
    <form name="myForm" action="form.php" method="POST">
        <div class="field">
            <label for="surname">Surname</label>
            <input type="text" id="surname" name="surname" size="31"/>
        </div>
        <div class="field">
            <label for="email">Email address</label>
            <input type="text" id="email" name="email" size="31"/>
        </div>
        <div class="field">
            <label for="passwd">Password</label>
            <input type="password" id="passwd" name="passwd" size="31"/>
        </div>
        <div class="field">
            <label for="address">Street Address</label>
            <textarea id="address" name="address" rows="3" cols="22"></textarea>
        </div>
        <div class="field">
            <label for="state">State</label>
            <select id="state" name="state">
                <option value="-1" selected>[choose your state]</option>
                <option value="1">Australian Capital Territory</option>
                <option value="2">Queensland</option>
                <option value="3">Victoria</option>
                <option value="4">New South Wales</option>
                <option value="5">Tasmania</option>
                <option value="6">South Australia</option>
                <option value="7">Western Australia</option>
                <option value="8">Northern Territory</option>
            </select>
        </div>
        <div class="field">
            <input type="hidden" name="country" value="Australia"/>
        </div>
        <div class="field">
            <label>Gender</label>
            <input type="radio" id="male" name="sex" value="male"/><label for="male" style="width:auto;margin:0 8px 0 0">Male</label>
            <input type="radio" id="female" name="sex" value="female"/><label for="female" style="width:auto;margin:0">Female</label>
        </div>
        <div class="field">
            <label for="vegetarian">Vegetarian?</label>
            <input type="checkbox" id="vegetarian" name="vegetarian"/>
        </div>
        <div class="field">
            <label>&nbsp;</label>
            <input type="submit" value="Submit" name="submit"/><input type="reset" value="Reset" name="reset"/>
        </div>
    </form>
</fieldset>
