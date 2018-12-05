<div id="Bases">
     
     <table border=1>
     <tr>
     <th>Number of Tables</th>
     <th>Base Name</th>
     <th>Creation date</th>
     <th>Memory space</th>
     <th>Modifier</th>
     <th>Supprimer</th>
     </tr>
<?php
     foreach( $lesBasesTb as $uneBaseTb)
         {   ?>
             <tr>
             <td><?php echo $uneBaseTb[1]; ?></td>
             <td><?php echo $uneBaseTb[0]; ?></td>
             <td><?php
             if ($uneBaseTb[2] == NULL)
                 echo "NULL";
             else
                 echo $uneBaseTb[2]; ?></td>
             <td><?php echo $uneBaseTb[3]; ?></td>
             <td class="text-center"><a href="index.php?uc=ctrl&action=updateBd&name=<?php echo $uneBaseTb[0]; ?>">
             <span class="glyphicon glyphicon-edit"></span></a></td>
             <td class="text-center"><a href="index.php?uc=ctrl&action=deleteBd&name=<?php echo $uneBaseTb[0]; ?>"
             onclick="return confirm('Voulez-vous vraiment supprimer ce produit?');">
             <span class="glyphicon glyphicon-trash"></span></a></td>
             </tr>

<?php
         }
?>
     <li><a href="index.php?uc=ctrl&action=newBd">Ajouter une base de donnée</li>
     </div>