class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int N = nums.size();
        vector<int> S(N+1);
        S[0]=0;
        for(int i=1;i<=N;i++) S[i]=S[i-1]+nums[i-1];
        vector<vector<int>> dp(m, vector<int>(N, INT_MAX));
        for(int i=0; i<N; i++) dp[0][i]=S[N]-S[i];
        for(int s = 1; s < m; s++) {
            for(int i = 0; i < N; i++) {
                for(int j = i + 1; j < N; j++) {
                    if (N-j<s-1) continue;
                    dp[s][i] = min(dp[s][i], max(dp[s-1][j], S[j] - S[i]));
                }
            }
        }
        return dp[m-1][0];
    }
};