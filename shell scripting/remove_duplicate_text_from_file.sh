echo -n "Enter file name:"
read file
if [ -f $file ]
then
	sort $file | uniq
	echo "Duplicates removed"
else
	echo "No such file found"
fi
