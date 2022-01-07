class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0] = 0;
        if(n==0) return ans;
        ans[1] = 1;
        for(int i=2;i<n+1;i++){
            if(i%2) ans[i] = ans[i/2]+1;
            else ans[i] = ans[i/2];
        }
        return ans;
    }
};