class Solution {
public:
    int findComplement(int num) {
        long long number_of_bits = floor(log2(num))+1;
        long long ones = ((long long)(1<<number_of_bits) - 1);
        return ones^num;
    }
};