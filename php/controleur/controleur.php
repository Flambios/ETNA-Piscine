<?php
$action = $_REQUEST['action'];

switch($action)
    {
    case 'step1' :
    {
        $lesBasesTb = $pdo->getBdTb();
        include('vues/BD.php');
        break;
    }

    case 'newBd' :
    {
        $lesBases = $pdo->getAllBd();
        include('vues/new.php');
        break;
    }

    case 'addBd' :
    {
        if($_POST['newBd']!="")
            {
                $name=$_POST['newBd'];
                $pdo->addBd($name);
                echo "<script>alert(\"$name a été ajouté a la base de donnée\");</script>";
            }
        else
            {
                echo "<script>alert(\"TA MERE LA TCHOIN\");</script>";
            }
        $lesBasesTb = $pdo->getBdTb();
        include('vues/BD.php');
        break;
    
    }

    case 'updateBd' :
    {
        $name=$_REQUEST['name'];
        include('vues/update.php');
        break;
    
    }

    case 'confirmModi' :
    {
        if(isset($_REQUEST['updbd']))
            {
                $oldName=$_REQUEST['name'];
                $newName=$_REQUEST['updbd'];
                $pdo->editBd($oldName, $newName);
            }
        $lesBasesTb = $pdo->getBdTb();
        include('vues/BD.php');
        break;
    }

    case 'deleteBd' :
    {
        if (isset($_REQUEST['name']))
            {
                $name=$_REQUEST['name'];
                if($name == "mysql")
                    echo "<script>alert(\"Erreur ne peut supprimé mysql\");</script>";
                else {
                    $pdo->delBd($name);
                    echo "<script>alert(\"La Base de donnée $name supprimé\");</script>";
                }
            }
        else
            {
                echo "<script>alert(\"TA MERE LA TCHOIN\");</script>";
            }
    }

    case 'step2' :
    {
        $lesTb = $pdo->getAllBd();
        include('vues/TB.php');
        break;
    }

    case 'renameTb' :
    {
        if (isset($_REQUEST['Bdname']))
            {
                $bdname = $_REQUEST['Bdname'];
                $lesTb = $pdo->getTb($bdname);
            }
        include('vues/renameT.php');
        break;
        
    }

    case 'ConfRenameTb' :
    {
        if (isset($_REQUEST['oldTb']) && (isset($_REQUEST['newTb'])))
            {
                $oldTb = $_REQUEST['oldTb'];
                $newTb = $_REQUEST['newTb'];
                $pdo->renameTb($oldTb, $newTb);
                echo "<script>alert(\"La table a bien été modifié\");</script>";
            }
        else
            {
                echo "<script>alert(\"TA MERE LA TRIPLE TCHOIN\");</script>";
            }
    
    }
    
    case 'addE' :
    {
        $BdName = $_REQUEST['Bdname'];
        $lesTb = $pdo->getTb($BdName);
        include('vues/addE.php');
        break;
    }

    case 'confirAddE' :
    {
        if($_POST['nameT'] != "" && $_POST['nameTy'] != "")
            {
                $BdName = $_POST['Bdname'];
                $TbName = $_POST['table'];
                $strucN = $_POST['nameT'];
                $strucT = $_POST['nameTy'];
                $pdo->addE($BdName, $TbName, $strucN, $strucT);
                echo "<script>alert(\"La structure $strucN de type $strucT a été crée\");</script>";
                header("Refresh:1; url=index.php?uc=ctrl&action=step2");
            }
        else
            {
                echo "<script>alert(\"TA MERE L'OCTUPLE TCHOIN\");</script>";
            }
        break;
    }

    case 'deleteT' :
    {
        $BdName = $_REQUEST['Bdname'];
        $lesTb = $pdo->getTb($BdName);
        include('vues/delE.php');
        break;
    }

    case 'delTb' :
    {
        if ($_POST['name'] != "" && $_POST['table'] != "")
            {
                $Bdname = $_POST['Bdname'];
                $Tname = $_POST['table'];
                $name=$_POST['name'];
                $pdo->delTb($Bdname, $Tname, $name);
                echo "<script>alert(\"Table $name supprimé\");</script>";
                header("Refresh:1; url=index.php?uc=ctrl&action=step2");
                
            }
        else
            {
                echo "<script>alert(\"TA MERE LA TCHOIN\");</script>";
            }
    }
    
    case 'updateT' :
    {
        $Bdname= $_REQUEST['Bdname'];
        $lesTb = $pdo->getTb($Bdname);
        include('vues/upE.php');
        break;
    }

    case 'confirUp' :
    {
        if ($_POST['nameTa'] != "")
            {
                $bdd = $_POST['Bdname'];
                $tab = $_POST['nameTa'];
                $struc = $pdo->getStruc($bdd, $tab);
                echo "<script>alert(\"aaa $tab $bdd\");</script>";
            }
        else
            {
                echo "<script>alert(\"Binks\");</script>";
                include('vues/accueil.php');
            }
        include('vues/updE.php');
        break;
        
    }

    case 'up' :
    {
        if ($_POST['struc'] != "" && $_POST['table'] != "")
            {
                $Bdname = $_POST['Bdname'];
                $Tname = $_POST['table'];
                $name= $_POST['struc'];
                $nameN= $_POST['nameN'];
                //$pdo->($Bdname, $Tname, $name, $type, $nameN);
                echo "<script>alert(\"Table $name supprimé\");</script>";
                header("Refresh:1; url=index.php?uc=ctrl&action=step2");

            }
        else
            {
                echo "<script>alert(\"TA MERE LA TCHOIN\");</script>";
            }
    }
        
    }
?>