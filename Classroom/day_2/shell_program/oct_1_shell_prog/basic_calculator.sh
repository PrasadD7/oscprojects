echo "Enter two numbers"
read x
read y

echo "x=$x and y=$y"
sum=`expr $x + $y` # doing addition
sub=`expr $x - $y` # doing addition
mul=`expr $x \* $y` # doing addition
div=`expr $x / $y` # doing addition
echo "Sum of $x and $y is $sum"
echo "Sub of $x and $y is $sub"
echo "Mul of $x and $y is $mul"
echo "Div of $x and $y is $div"
