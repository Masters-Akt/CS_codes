echo Enter year YYYY : 
read year

byfour=`expr $year % 4`
byhundered=`expr $year % 100`
byfourhundered=`expr $year % 400`

if [ $byfour -eq 0 -a $byhundered -ne 0 -o $byfourhundered -eq 0 ]
then
	echo $year is a leap year.
else
	echo $year is not a leap year.
fi
