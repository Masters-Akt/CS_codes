echo "Choose any of the options below:"
echo "1. Creating a file."
echo "2. Copying a file."
echo "3. Removing a file."
echo "4. Renaming a file."
echo "5. Exit."
echo "Enter ypur choice among the above (1 to 5):"
read option
case "$option" in
	1)
		echo "Enter file name to be created:"
		read file
		cat > file
		;;
	2)
		echo "Enter file name to copy:"
		read file1
		echo "Enter destination file name:"
		read file2
		if [ -f $file1 ]
		then
			cp $file1 $file2
		else
			echo "$file1 does not exist."
		fi
		;;
	3)
		echo "Enter the file to be removed : "
		read file
		if [ -f $file ]
		then
			rm -i $file
		else
			echo "$file file does not exist."
		fi
		;;
	4)
		echo "Enter the file to be renamed : "
		read file
		echo "Enter the new file name : "
		read newfile
		if [ -f $file ]
		then
			mv -i $file $newfile
		else
			echo "$file file does not exist."
		fi
		;;
	5)
		echo "Exit."
		exit;;
esac
