#!/bin/bash


echo  $(head -$3 $2 | tail -1)| tr '[:lower:]' '[:upper:]'
