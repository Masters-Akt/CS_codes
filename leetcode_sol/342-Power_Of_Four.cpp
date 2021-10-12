class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        if(ceil(log(n)/log(4))==floor(log(n)/log(4))) return true;
        return false;
    }
};