class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        n-=(n&-n); //removing 1st bit and checking if it is 0 or not
        if(n==0) return true;
        return false;
    }
};