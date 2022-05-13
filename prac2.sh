#!/bin/bash

count=1


while	[ $count -eq 1 ]
do
	read a b c

	if [ $a -lt $b -a $b -lt $c ]
	then
		echo "$b"
		count=0

	else
	
		echo "NO"
	fi

done


