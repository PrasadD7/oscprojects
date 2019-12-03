#! /bin/bash

echo -n "Enter string:"; read str1;
echo -n "Enter another string:"; read str2;
str=$str1$str2;
echo "Concatenated string is $str";


