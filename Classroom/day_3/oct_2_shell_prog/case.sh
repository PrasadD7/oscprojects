#!/bin/bash

echo Enter a number
read num

case $num in
	1)
		echo "It is one"
		echo "temp"
		;;
	2) ;;
	3) ;;
	4) ;;
	5) 
		echo "Value is between 2 to 5"
		;;
	*)
		echo "Value is out of range"
		;;
esac
