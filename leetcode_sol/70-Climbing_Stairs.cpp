class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int ostep = 2, tstep = 1, total = 0;
        for(int i=2;i<n;i++){
            total = ostep + tstep;
            tstep = ostep;
            ostep = total;
        }
        return total;
    }
};