echo Enter First Number
read A
echo Enter Second Number
read B
echo "Before swapping A= $A, and B= $B"
swap()
{
	A=$((A+B))
	B=$((A-B))
	A=$((A-B))
}
swap
echo "After swapping A= $A, and B= $B"
