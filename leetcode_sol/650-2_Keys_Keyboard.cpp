class Solution {
public:
    int minSteps(int n) {
        int ans = 0;
        int temp = 2;
        while(n>1){
            while(n%temp==0){
                ans+=temp;
                n/=temp;
            }
            temp++;
        }
        return ans;
    }
};