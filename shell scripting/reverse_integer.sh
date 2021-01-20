echo Enter an integer :
read n
temp=0
rev=0
while [ $n -gt 0 ]
do
	temp=`expr $n % 10`
	rev=`expr rev \* 10 + $temp`
	n=`expr $n / 10`
done
echo Reverse is $rev
