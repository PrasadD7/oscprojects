#!/bin/bash

echo "Enter file name"
read fname

echo "$fname"

if [ -e $fname -a -f $fname ] 
then

backup=$fname.bak
	if [ -e $backup ]
	then
		echo -n "$backup file already exist. "
		echo "Do you wants to overwrite it? Y/N"
		read uinput

		if [ $uinput = "y" -o $uinput = "Y" ]; then
			cp $fname $backup
		else
			echo "Thanks! we are fine here."
		fi
	else
		cp $fname $backup
	fi
fi
