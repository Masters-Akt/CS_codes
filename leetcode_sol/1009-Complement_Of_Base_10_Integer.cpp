class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        long long number_of_bits = floor(log2(n))+1;
        long long ones = ((long long)(1<<number_of_bits)-1);
        return ones^n;
    }
};