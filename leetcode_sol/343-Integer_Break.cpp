class Solution {
public:
    int integerBreak(int n) {
        if(n==3 || n==2) return n-1;
        if(n<=1) return 0;
        int m;
        if(n%3==1){
           m = n/3-1;
            return pow(3,m)*4*(n%3);
        }
        if(n%3==0){
            m = n/3;
            return pow(3,m);
        }
        
        m = n/3;
        return pow(3,m)*(n%3);
        
    }
};