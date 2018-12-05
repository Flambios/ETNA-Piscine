<?php
//phpinfo();
// ETNA PROJECT, 05/11/2018 by simon_c
// index
// File description:
//      [...]
//

ini_set('display_errors', 1);
require_once("fonction/fonctions.php");
//require_once("controleur/controleur.php");
include("vues/entete.php") ;
include("vues/bandeau.php") ;

if(!isset($_REQUEST['uc']))
    $uc = 'accueil';
else
    $uc = $_REQUEST['uc'];

$pdo = PdoMy_php::getPdoMy_php();
switch($uc)
    {
    case 'accueil' :
    {
        include('vues/accueil.php');
        break;
    }
    case 'ctrl' :
    {
        include('controleur/controleur.php');
        break;
    }
    }
include("vues/pied.php") ;

?>
