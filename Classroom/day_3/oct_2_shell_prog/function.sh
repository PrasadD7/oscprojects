#!/bin/bash

#function isExist()
isExist()
{
	if [ -e $1 ]
	then
		return 0
	else
		return 1
	fi
}

echo "Enter a file name"
read file

if isExist $file
then
	ls -li $file
else
	echo "$file doesn't exist"
fi

