echo "Enter two numbers"
read x
read y

echo "x=$x and y=$y"
sum=`expr $x + $y` # doing addition

echo "Sum of $x and $y is $sum"
