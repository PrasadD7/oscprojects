#! /bin/bash

x=$1
y=$2
z=$3

if [ $x -eq $y -a $y -eq $z -a $x -eq $z] ; then
                echo "EQUILATERAL TRIANGLE";
elif [ $x -eq  $y -o $y -eq $z -o $x -eq $z ] ; then
                echo "ISOSCALES TRIANGLE";
else
  		echo "SCALENE TRIANGLE";
	fi

