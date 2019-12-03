#! /bin/bash

echo -n "Enter a number:"; read num;

mod=$(($num % 2))

if [ $mod -eq 0 ] ; then
	echo "It is an even number"
else
	echo "It is an odd number"
fi
