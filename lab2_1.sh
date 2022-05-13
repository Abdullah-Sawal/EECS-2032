#!/bin/bash


if [ $# -eq 0 ]
then 
        echo "No numbers to add"
	exit 1
fi

declare -i sum=0

for i in $@; 
do 
	sum=$sum+$i
done

echo $sum
