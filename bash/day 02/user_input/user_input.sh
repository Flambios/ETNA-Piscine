#!/bin/bash

bool=false
mot="$(head -n $3 $2 | tail -1)"
motm=$( echo $mot | tr '[:lower:]' '[:upper:]')

len=${#motm}


momy=$(echo $motm | tr "[A-Z]" "_")
echo "Mystery word: $momy ($len letters)"
echo "Enter a letter:"
read lettre
lettrem=$( echo $lettre | tr '[:lower:]' '[:upper:]')

for (( i=1; i<="$len"; i++ ))
do
    if [[ "$lettrem" = $(echo "$motm" | cut -c$i ) ]]
    then
	bool=true
    fi    
done

if [ $bool = true ]
then
    echo "Good job, you are ready for the next step!"
    momy=$(echo $motm | tr -c "[$lettrem]" "_" | cut -c1-"$len")
    echo "$lettrem found!"
else
    echo "Better luck next time!"
    echo "$lettrem not found!"
fi
