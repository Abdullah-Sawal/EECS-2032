#!/bin/bash

name=""
Quantity=""
class=""
key=""
min=""
max=""

if [ $1 == -I ]; 
then
	

	while read A B C D
	do
		quantity=$B
		name=$A
                key=$D
		if [ $C == "I" ];
		then	
			while read E F G
			do

				if [ $key == $E ];	
				then
					if [ $F -le $quantity -a $quantity -le $G ]
					then
		
				echo "$name"	       
			       fi
		       fi
			done<B.txt
		fi
	done<A.txt
fi


if [ $1 == -G ]
	then
		while read A B C D
		do
			quantity=$B
			name=$A
			key=$D

			if [ $C = "G" ]
			then
				while read E F G
				do
					if [ $key == $E ]
					then
						if [ $F -le $quantity -a $quantity -le $G ]
						then
							echo "$name"
						fi
					fi
				done<B.txt
			fi
		done<A.txt
	fi
if [ $1 == -check ]
then
	while read A B C D
	do
		grep -q $D B.txt
         if [ $? != 0 ]
	 then
               echo "$D is in file A.txt but not in B.txt"
       fi
done<A.txt
            while read E F G 
	    do 
		    grep -q $E A.txt
		    if [ $? != 0 ]
		    then
			    echo "$E is in file B.txt but not in A.txt"
		    fi
	    done<B.txt
    fi










