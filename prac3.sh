#!/bin/bash

flag=0

read a

for ((i=1;i<$a;i++))
do
	for((r=1;r<$a;r++))
	do
		hypo=$(( (i*i)+(r*r) ))
		nSquare=$(( (a*a) ))

		if [ "$hypo" -eq "$nSquare" ] 
		then
			flag=1
			echo "Yes"
			break
		fi
	done
	if [ $flag -eq 1 ]
	then
	       	break
	fi
done
if [ $flag -eq 0 ] 
then 
	echo "NO"
fi



