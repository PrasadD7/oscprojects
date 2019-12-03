#! /bin/bash

echo "Enter a number";
read n;
mul=1;
for (( i=1 ; $i <= n ; i=$i + 1))
do
let " mul= $mul * i "
done

echo "Factorial : $mul";

