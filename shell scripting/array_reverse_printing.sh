echo Enter size of array:
read n
echo Enter elements of array:
i=0
while [ $i -lt $n ]
do
	read arr[$i]
	i=`expr $i + 1`
done
echo Reverse of the array is :
i=`expr $n - 1`
while [ $i -ge 0 ]
do
	echo ${arr[$i]}
	i=`expr $i - 1`
done
