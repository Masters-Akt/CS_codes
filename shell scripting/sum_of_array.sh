sum=0
array=(1 2 3 4 5)
sumall()
{
	for num in ${array[@]}; do
		(( sum += num ))
	done
	printf '%d\n' "$sum"
}
sumall
