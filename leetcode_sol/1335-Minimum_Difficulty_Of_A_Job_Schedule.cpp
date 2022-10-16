class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size(), inf = 1e9, maxd;
        if(n<d) return -1;
        vector<int> dp(n+1, 1e9);
        dp[n] = 0;
        for(int dx=1;dx<=d;dx++){
            for(int i=0;i<=n-dx;i++){
                maxd = 0, dp[i] = inf;
                for(int j=i;j<=n-dx;j++){
                    maxd = max(maxd, jobDifficulty[j]);
                    dp[i] = min(dp[i], maxd + dp[j + 1]);
                }
            }
        }
        return dp[0];
    }
};