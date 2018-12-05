<div id="up2">
     <form method="POST" action="index.php?uc=ctrl&action=up">
     
     <label for="strucN">Choisisez la structure a modifié : </label></br>
     <select name="struc" size="1" onChange="listeMenu(this)">
     <option></option>
<?php
     foreach ($struc as $st)
         { ?>
          <option value="<?php echo $st[0];?>"><?php echo $st[0];?></option>
<?php
         }
?>
     </select></br></br>

<label for="nameTy">Changer le nom de la structure ou le type : </label></br>
     <input type="text" name="nameN" value="">
     <select name="nameTy" size="1" onChange="listeMenu(this)">
     <option></option>
     <option id="INT">INT</option>
     <option id="VARCHAR">VARCHAR</option>
     <option id="CHAR">CHAR</option>
     </select></br></br>
     <input type="hidden" name="Bdname" value="<?php echo $Bdname ?>">
     <input type="hidden" name="tab" value="<?php echo $tab ?>">
     <input type="submit" name="valider" value="Valider">
     </form>
     </div>