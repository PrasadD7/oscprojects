#!/bin/bash

list=`ls`

#for num in `ls`
for num in $list
do
	if [ -f $num ]
	then
		echo "Printing $num"
		cat $num
		echo
		echo
		echo
		echo
		echo
	fi
done
