<div id="delE">
     <form method="POST" action="index.php?uc=ctrl&action=delTb">
     <label for="nameTa">Table name : </label>
     <select name="table" size="1" onChange="listeMenu(this)">
     <option></option>
<?php
     foreach ($lesTb as $tb)
         { ?>
           <option value="<?php echo $tb[0];?>"><?php echo $tb[0];?></option>
<?php
         }
?>
     </select></br>
<label for="nameT">Table structure name : </label>
     <input id="name" type="text" name="name"></br></br>
     <input type="hidden" name="Bdname" value="<?php echo $BdName; ?>">
     <input type="submit" name="valider" value="Valider" onclick="return confirm('Voulez-vous vraiment supprimer ce produit?');">
     </form>
     </div>