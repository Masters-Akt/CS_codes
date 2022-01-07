class Solution {
public:
    int binaryGap(int n) {
        int ans = 0, count = 1;
        bool check = true;
        while(n){
            if(n&1){
                if(check){
                    check = false;
                }else{
                    ans = max(ans, count);
                    count = 1;
                }
            }else{
                if(!check) count++;
            }
            n = n>>1;
        }
        return ans;
    }
};