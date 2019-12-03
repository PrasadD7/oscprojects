#! /bin/bash

echo -n "Enter n"; read n;

sum=0;

for((i=$n; $i>=1 ; i=$i-1))
do
	#sum=$(($sum + $i))
	$sum=`expr $sum \* $i`;
done

echo "Sum of n number for $n is $sum";
