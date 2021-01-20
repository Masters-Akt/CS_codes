echo Enter size of array:
read n
echo Enter array elements:
i=0
while [ $i -lt $n ]
do
	read arr[$i]
	i=`expr $i + 1`
done
echo Initially Array :
echo ${arr[*]}
#Selection sort
for ((i=0; i<n-1; i++))
do
	small=${arr[$i]}
	index=$i
	for ((j=i+1; j<n; j++))
	do
		if ((arr[j]<small))
		then
			small=${arr[$j]}
		fi
	done
	temp=${arr[$i]}
	arr[$i]=${arr[$index]}
	arr[$index]=$temp
done
echo Array after sorting:
echo ${arr[*]}
