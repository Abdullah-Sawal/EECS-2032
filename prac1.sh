#!/bin/bash
IFS=$'\t'
count=0


read a

while read id name 
do
	while read courses nameS
	do  
             if [ "$a" ==  "$id" ]  
	     then 
		     if [ "$name" == "$nameS" ]
		     then
			     count=$((count+1))
			    
	     fi

	     fi

	
	done<namecourse.txt
done<nameid.txt

echo "$count"

