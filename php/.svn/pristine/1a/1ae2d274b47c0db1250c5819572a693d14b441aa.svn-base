<?php

class PdoMy_php
{
    private static $serveur='mysql:host=127.0.0.1';
    private static $user='root' ;
    private static $mdp='root' ;
    private static $monPdo;
    private static $monPdoPhp = null;
    
    private function __construct()
    {
        PdoMy_php::$monPdo = new PDO(PdoMy_php::$serveur, PdoMy_php::$user, PdoMy_php::$mdp);
        PdoMy_php::$monPdo->query("SET CHARACTER SET utf8");
    }

    public function _destruct(){
        PdoMy_php::$monPdo = null;
    }

    public  static function getPdoMy_php()
    {
        if(PdoMy_php::$monPdoPhp == null)
            {
                PdoMy_php::$monPdoPhp= new PdoMy_php();
            }
        return PdoMy_php::$monPdoPhp;
    }

    public static function getAllBd()
    {
        $req = "SHOW DATABASES";
        $res = PdoMy_php::$monPdo->query($req);
        $lesLignes = $res->fetchALL();
        return $lesLignes;
    }

    public static function getBdTb()
    {
        $req = "SELECT DISTINCT(SCHEMATA.SCHEMA_NAME), COUNT(TABLE_NAME), MIN(create_time) create_time, sum(data_length + index_length)/1024/1024 FROM INFORMATION_SCHEMA.SCHEMATA INNER JOIN INFORMATION_SCHEMA.TABLES ON SCHEMATA.SCHEMA_NAME=TABLES.TABLE_SCHEMA GROUP BY SCHEMA_NAME";
        $res = PdoMy_php::$monPdo->query($req);
        $lesLignes = $res->fetchAll();
        return $lesLignes;
    }

    public static function addBd($name)
    {
        $req = "CREATE DATABASE ".$name;
        $res = PdoMy_php::$monPdo->exec($req);
        return $res;
    }

    public static function delBd($name)
    {
        $req = "DROP DATABASE ".$name;
        $res = PdoMy_php::$monPdo->exec($req);
        return $res;
    }

    public static function editBd($oldName, $newName)
    {
        $pdo = PdoMy_php::getPdoMy_php();
        $pdo->addBd($newName);
        $new =("RENAME TABLE");
        //$ds = $new->fetchAll();
        $res =("SELECT * FROM $oldName");
        $ds = PdoMy_php::$monPdo->query($res);
        foreach($ds as $dt)
            {
                $new .= PdoMy_php::$monPdo->query(" ".$newName.".".$dt[0]." LIKE ".$oldName.".".$dt[0]);
            }
        $pdo->delBd($oldName);
    }

    public static function getTb($name)
    {
        $req = "SHOW TABLES FROM ".$name.";";
        $res = PdoMy_php::$monPdo->query($req);
        $lesTb = $res->fetchAll();
        return $lesTb;
    }

    public static function renameTb($oldTb, $newTb)
    {
        $req = "USE bruh; RENAME TABLE ".$oldTb." TO ".$newTb.";";
        $res = PdoMy_php::$monPdo->exec($req);
        return $res;
    }

    public static function addE($Bdname, $name, $colN, $type)
    {
        $req = "USE ".$Bdname."; ALTER TABLE ".$name." ADD ".$colN." ".$type."(50)";
        $res = PdoMy_php::$monPdo->exec($req);
        return $res;
    }

    public static function delTb($Bdname, $Tname, $name)
    {
        $req = "USE ".$Bdname."; ALTER TABLE ".$Tname." DROP ".$name.";";
        $res = PdoMy_php::$monPdo->exec($req);
        return $res;
    }

    public static function editTb($Bdname, $Tname, $name, $type, $nameN)
    {
        $req = "USE ".$Bdname."; ALTER TABLE ".$Tname." MODIFY ".$name." ".$type."; ALTER TABLE ".$Tname." CHANGE ".$name." ".$nameN;
        $res = PdoMy_php::$monPdo->exec($req);
        return $res;
    }

    public static function getStruc($Bdname, $Tname)
    {
        //$req = "USE ".$Bdname."; DESCRIBE ".$Tname.";";
        $req = "USE ".$Bdname."; SHOW COLUMNS FROM ".$Tname.";";
        $res = PdoMy_php::$monPdo->query($req);
        $re = $res->fetchAll(PDO::FETCH_COLUMN);
        return $re;
    }

}
?>