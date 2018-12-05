#!/bin/bash

if [ $# -ne 3 ]
then
    echo "[Error]: there should be exactly 3 arguments!"
    echo "[Usage]: ./usage.sh --source file.txt number"
   exit
fi 

if [ $1 != "--source" ]
then
    echo "[Error]: first argument must be --source!"
    echo "[Usage]: ./usage.sh --source file.txt number"
    exit
fi

if [ ! -f $2 ]
then
    echo "[Error]: $2 is not a file!"
    echo "[Usage]: ./usage.sh --source file.txt number"
    exit
fi

if [ $(wc -l < $2) -lt $3 ]
then
    echo "[Error]: your argument '$3' is invalid!"
    echo "[Error]: it must be a number between 1 and the max number of lines in $2!"
    echo "[Usage]: ./usage.sh --source file.txt number"
    exit
fi

echo "No error, ready for the next step!"
