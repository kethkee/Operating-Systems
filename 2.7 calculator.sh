echo “Enter the first number:”
read a
echo “Enter the second number:”
read b
echo “1.Addition   2.Subtraction   3.Multiplication   4.Division”
echo “Enter your choice:”
read ch
case $ch in
	1)rs=$(($a+$b))
		echo “Sum is “$rs;;
	2)rs=$(($a-$b))
		echo “Difference is “$rs;;
	3)rs=$(($a*$b))
		echo “Product is “$rs;;
	4)rs=$(($a/$b))
		echo “Quotient is “$rs;;
	*)echo “Invalid !”;;
esac

