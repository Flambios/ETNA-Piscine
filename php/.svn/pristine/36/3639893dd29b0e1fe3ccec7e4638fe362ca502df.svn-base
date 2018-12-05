<div id="add">
     <form method="POST" action="index.php?uc=ctrl&action=confirAddE">
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
     <input id="nameT" type="text" name="nameT"></br></br>
     <label for="nameTy">Table structure type : </label> 
     <select name="nameTy" size="1" onChange="listeMenu(this)">
     <option></option>
     <option id="INT">INT</option>
     <option id="VARCHAR">VARCHAR</option>
     <option id="CHAR">CHAR</option>
     </select></br></br>
     <input type = "hidden" name ="Bdname" value ="<?php echo $BdName; ?>">
     <input type="submit" name="valider" value="Valider">
     
     </form>
     </div>