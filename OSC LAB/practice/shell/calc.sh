#! /bin/bash

echo -n "Enter two nos"; read n1;
read n2;
sum=$(($n1 + $n2));
sub=$(($n1 - $n2));
mul=`expr $n1 \* $n2 `;
div=`echo "scale=2; $n1 / $n2" | bc`
mod=`echo "scale=2; $n1 % $n2" | bc`
echo "sum=$sum";
echo "sub=$sub";
echo "mul=$mul";
echo "div=$div";
echo "mod=$mod";
