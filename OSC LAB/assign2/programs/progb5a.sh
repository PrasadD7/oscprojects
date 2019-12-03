#! /bin/bash

echo "Enter three numbers :"; read x; read y; read z;

if [ $x -gt $y -a $x -gt $z ]; then
		echo "$x is greatest number";
elif [ $y -gt $x -a $y -gt $z ]; then
		echo "$y is greatest number";
elif [ $z -gt $x -a $z -gt $y ]; then
                echo "$z is greatest number";
else
	echo "ALL ARE EQUAL";
	fi

