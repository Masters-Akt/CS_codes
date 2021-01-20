echo Enter first number :
read A
echo Enter second number :
read B
echo Enter third number :
read C
if [ $A -gt $B ]
then
	if [ $A -gt $C ]
	then
		echo $A is greatest.
	else
		echo $C is greatest.
	fi
else
	if [ $B -gt $C ]
	then
		echo $B is greatest.
	else
		echo $C is greatest.
	fi
fi
