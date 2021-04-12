echo "Enter file Name : "
read file
if [ -e $file ]
then
    echo "Enter another file name : "
    read file2
    uniq $file $file2
else
    echo "File does not exists"
fi