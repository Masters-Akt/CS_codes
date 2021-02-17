echo -n "Enter file name:"
read file

if [ -f $file ]
then
	[ -r $file ] && r="Read permission = YES" || r="Read permission = NO"
	[ -w $file ] && w="Write permission = YES" || w="Write permission = NO"
	[ -x $file ] && x="Execute permission = YES" || x="Execute permission = NO"
	echo "The permissions for $file are as follow:"
	echo "$r"
	echo "$w"
	echo "$x"
else
	echo "No such file found."
fi
