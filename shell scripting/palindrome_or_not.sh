echo Enter the string:
read s
if [ $(echo $s | rev) == $s ]
then
	echo String is palindrome.
else
	echo String is not palindrome.
fi
