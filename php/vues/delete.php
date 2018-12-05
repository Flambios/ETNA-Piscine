<label for="deldb"> Supprimer une base de donnée existante</label></br>

          <select id="basedel" name="basedel" size="1" onChange="">
          <option></option>
     <?php
     foreach($lesBases as $uneBase)
         { ?>
           <option value="<?php echo $uneBase[0];?>"><?php echo $uneBase[0];?></option>
<?php } ?>
                </select></br></br>
