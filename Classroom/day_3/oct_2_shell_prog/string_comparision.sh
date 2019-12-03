#!/bin/bash

echo "Enter two string values"
read str1
read str2


#checking for equality and not-equality
if [ $str1 != $str2 ]
then
	echo "$str1 and $str2 are not-equal"
else
	echo "$str1 and $str2 are equal"
fi

str=""
#checking if string is empty
if [ $str ]
then
	echo "$str is a non-empty string"
else
	echo "It is an empty string"
fi

#if string length is > 0
if [ -n $str1 ]
then
	echo "$str1 is non zero length string"
fi

str=""
#if string length is = 0
if [ -z $str ]
then
	echo "$str is zero length string"
else
	echo "$str is non-zero length string"
fi
