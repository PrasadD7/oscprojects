#! /bin/bash

curmon=`date +%m`;

echo "Current month is $curmon";

pyear=$curmon"p";
echo "This month in previous year ";
echo " `cal  -m $pyear`  "

nyear=$curmon"f";
echo "This month in next year ";
echo " `cal  -m $nyear`  ";
