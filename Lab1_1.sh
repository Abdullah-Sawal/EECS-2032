#!/bin/bash

file_name=$0

string=$1
read -p "Enter second string: " string2

echo "Hello, this is $0"

if [ $string == $string2 ]
then
       	echo "Identical"
else
	echo "Not identical"

fi










