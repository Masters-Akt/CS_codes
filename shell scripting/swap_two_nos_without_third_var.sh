echo Enter First Number
read A
echo Enter Second Number
read B
echo "Before swapping, A = $A and B = $B"
#swapping
A=$((A+B))
B=$((A-B))
A=$((A-B))
echo "After swapping, A = $A and B = $B"
