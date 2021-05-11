class Solution {
public:
    int trailingZeroes(int n) {
        if(n<=4) return 0;
        int c=0;
        int i=5;
        while(i<=n){
            c+=(n/i);
            i*=5;
        }
        return c;
    }
};