#!/bin/bash

echo -n "Enter a number: "
read num

sum=0

for ((i=0; $i<=$num; i=$i+1))
do
	sum=$(($sum + $i))
done

echo "Sum of first n number for $num is $sum"
