#!/bin/bash

annee=`date +%Y `
mois=`date +%B`
jour=`date +%A`
numj=`date +%d`
echo "Today we are $jour $mois $numj, $annee."

test="$(curl -s "https://api.sunrise-sunset.org/json?lat=36.7201600&lng=-4.4203400&date=today")"
sunrise=$(echo $test | cut -d '"' -f 6)
sunset=$(echo $test | cut -d '"' -f 10)


echo "Sunrise is expected at $sunrise and sunset at $sunset."

loca="$(curl -s http://aletum.jails.simplerezo.com/etna-iss.json)"
isslat="$(echo $loca | cut -d '"' -f 10)"
isslot="$(echo $loca | cut -d '"' -f 14)"


echo "The ISS is currently located at $isslat, $isslot  :  from us!"
