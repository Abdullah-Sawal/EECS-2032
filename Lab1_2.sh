"#!/bin/bash

a=$1
b=$2
c=$3

if [ $c -eq $(( $a + $b )) ]
then
	echo " addition"

elif [ $c -eq $(( $a - $b )) ]
then 
	echo " subtraction"

elif
	[ $c -eq $(( $a * $b)) ] 
then
	echo " multiplication"
else 
	echo "Not any of the three operations"
fi

