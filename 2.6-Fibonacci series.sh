echo “Enter the limit:”
read n
x=0
y=1
echo “The Fibonacci Series up to ”$n “ terms is : ”
for ((i=1;i<=n;i++))
do
	echo $x
	f=$(($x+$y))
	x=$y
	y=$f
done
