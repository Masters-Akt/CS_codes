class Solution {
private:
    const int MOD = 1e9 + 7;
    int solve(int n, int k ,int target ,vector<vector<int>> &dp){
        if(target<n || target>k*n) return 0;
        if(n==1) return (target<=k)?1:0;
        if(dp[n][target]!=-1) return dp[n][target];
        int sum = 0;
        for(int i=1;i<=k;i++){
            sum+=solve(n-1, k, target-i, dp);
            sum%=MOD;
        }
        return dp[n][target]=sum;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return solve(n,k,target,dp);
    }
};