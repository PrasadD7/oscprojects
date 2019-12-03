#!/bin/bash

echo  "Enter divident"; read n1;
echo  "Enter divisor"; read n2;

quotient=`echo "scale=2;$n1/$n2" | bc`

echo "Result : $quotient";
