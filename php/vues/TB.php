<div id="step2">
     </br>
     </br>
     <table border=1>
     <tr>
     <th>Base Name</th>
     <th>Rename a table</th>
     <th>Add an element on the database</th>
     <th>Editing an element on the database</th>
     <th>Delete an element on the database</th>
     </tr>
<?php
     foreach( $lesTb as $tb)
         {   ?>
             <tr>   
             <td><?php echo $tb[0]; ?></td>       
             <td class="text-center"><a href="index.php?uc=ctrl&action=renameTb&Bdname=<?php echo $tb[0];?>">
             <span class="glyphicon glyphicon-pencil"></span></a></td>
             <td class="text-center"><a href="index.php?uc=ctrl&action=addE&Bdname=<?php echo $tb[0]; ?>">
             <span class="glyphicon glyphicon-plus"></span></a></td>
             <td class="text-center"><a href="index.php?uc=ctrl&action=updateT&Bdname=<?php echo $tb[0]; ?>">
             <span class="glyphicon glyphicon-edit"></span></a></td>
             <td class="text-center"><a href="index.php?uc=ctrl&action=deleteT&Bdname=<?php echo $tb[0];?>">
             <span class="glyphicon glyphicon-trash"></span></a></td>
             </tr>
<?php
         }
?>
     </div>