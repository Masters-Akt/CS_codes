echo Displaying prime numbers between 1 and 100 : 
for i in `seq 2 1 100`
do
	c=0
	for j in `seq 2 1 $i`
	do
		if [ `expr $i % $j` == 0 ]
		then
			c=`expr $c + 1`
		fi
	done
	if [ $c == 1 ]
	then
		echo $i
	fi
done
