#!/bin/bash

echo "Enter two numbers in the range of 1 to 10"
read a
read b

if [ $a -le 10 -a $a -ge 1 ]; then

	if [ $a -ge $b ]
	then
		if [ $a -eq $b ]; then
			echo "$a == $b"
		else
			echo "$a > $b"
		fi
	elif [ $a -le $b ]
	then
		if [ $a -lt $b ]; then
			echo "$a < $b"
		else
			echo "$a == $b"
		fi
	fi
else
	echo "ERROR: You entered number out of range"
fi

