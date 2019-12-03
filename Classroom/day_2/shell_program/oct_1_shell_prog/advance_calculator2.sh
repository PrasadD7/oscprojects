echo "Enter two numbers"
read x
read y

echo "x=$x and y=$y"
sum=$(($x+$y)) # doing addition
sub=$(($x - $y)) # doing addition
mul=$(($x * $y)) # doing addition
div=`echo "scale=2;$x / $y" | bc` # doing division
#div=$(($x / $y)) # doing addition
echo "Sum of $x and $y is $sum"
echo "Sub of $x and $y is $sub"
echo "Mul of $x and $y is $mul"
echo "Div of $x and $y is $div"
