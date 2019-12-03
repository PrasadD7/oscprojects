#! /bin/bash

echo "Enter three numbers "; read x;read y;read z;
sum1=$(( $x + $y ));
sum2=$(( $sum1 + $z));
avg=$(($sum2/3));
echo "Average  = $avg";
