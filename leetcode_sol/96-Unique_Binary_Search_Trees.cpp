class Solution {
private:
    int numTrees(int n, vector<int>& dp){
        if(dp[n]!=0) return dp[n];
        for(int i=1;i<=n;i++){
            if(i==1) dp[n]+=numTrees(n-i, dp);
            else if(i==n) dp[n]+=numTrees(i-1, dp);
            else dp[n]+=(numTrees(i-1, dp)*numTrees(n-i, dp));
        }
        return dp[n];
    }
public:
    int numTrees(int n) {
        vector<int> dp(20, 0);
        dp[1] = 1;
        return numTrees(n, dp);
    }
};