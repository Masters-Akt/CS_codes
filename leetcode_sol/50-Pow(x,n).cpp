class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long num = n; //to manage overflow
        if(n<0) num*=(-1); //for negative numbers
        while(num>0){
            if(num%2==0){
                x=x*x;
                num/=2;
            }else{
                ans*=x;
                num--;
            }
        }
        if(n<0) return (double)(1.0)/ans;
        return ans;
    }
};