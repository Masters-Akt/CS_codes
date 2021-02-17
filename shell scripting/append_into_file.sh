echo -n "Enter file name:"
read file

if [ -f $file ]
then
	echo "Start appending: "
	cat >> $file
else
	echo "Created file, start appending: "
	cat > $file
fi
