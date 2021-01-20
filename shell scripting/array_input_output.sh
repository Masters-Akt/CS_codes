echo Enter 5 elements of array :
i=0
while [ $i -lt 5 ]
do
	read arr[$i]
	i=`expr $i + 1`
done
echo The elements stored in the array are : 
echo ${arr[@]}
