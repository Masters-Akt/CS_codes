echo ENter size of array :
read n
echo ENter array elements:
i=0
while [ $i -lt $n ]
do
	read arr[$i]
	i=`expr $i + 1`
done
echo Initially Array :
echo ${arr[*]}
#Bubble sort
for ((i=0; i<n; i++))
do
	for ((j=0; j<$n-i-1; j++))
	do
		if [ ${arr[j]} -gt ${arr[$((j+1))]} ]
		then
			temp=${arr[j]}
			arr[$j]=${arr[$((j+1))]}
			arr[$((j+1))]=$temp
		fi
	done
done
echo Array afer sorting :
echo ${arr[*]}
