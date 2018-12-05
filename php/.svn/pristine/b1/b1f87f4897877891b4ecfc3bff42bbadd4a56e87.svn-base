<div id="update">
     <form method="POST" action="index.php?uc=ctrl&action=confirUp">
     <input type="hidden" name="Bdname" value="<?php echo $Bdname ?>">
     <label for="nameT">Choisisez une table a modifié : </label></br>
     <select name="nameTa" size="1" onChange="">
     <option></option>
<?php
     foreach ($lesTb as $tb)
         { ?>
           <option value="<?php echo $tb[0];?>"><?php echo $tb[0];?></option>
           
<?php
         }
?>
     </select></br></br>
     <input type="submit" name="valider" value="Valider">
     </form>
     </div>