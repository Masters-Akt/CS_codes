class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(ceil(log10(n)/log10(3))==floor(log10(n)/log10(3))) return true;
        return false;
    }
};