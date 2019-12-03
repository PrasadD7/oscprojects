#!/bin/bash

echo -n "Enter first number"; read x
echo -n "Enter second number"; read y

echo " Using expr ";
sum=`expr $x + $y`;
prod=`expr $x \* $y`;

echo "Sum : $sum";
echo "Product : $prod";

echo " Using let"

let "sum = $x + $y";
let "prod = $x * $y";

echo "Sum : $sum";
echo "Product : $prod";


echo " Using bc";

sum=`echo "$x+$y;"|bc`;
prod=`echo "$x*$y;"|bc`;

echo "Sum : $sum";
echo "Product : $prod";
