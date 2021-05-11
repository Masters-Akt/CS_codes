class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        int temp=n;
        while(temp>0){
            prod=prod*(temp%10);
            sum+=(temp%10);
            temp=temp/10;
        }
        return prod-sum;
    }
};