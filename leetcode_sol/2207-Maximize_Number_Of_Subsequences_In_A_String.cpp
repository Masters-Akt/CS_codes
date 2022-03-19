class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        vector<vector<long long>> dp(text.size()+1, vector<long long>(3, 0));
        for(int i=0;i<3;i++) dp[0][i] = 0;
        for(int i=0;i<=text.size();i++) dp[i][0] = 1;
        int ca = 0, cb = 0;
        for(int i=1;i<=text.size();i++){
            if(text[i-1]==pattern[0]) ca++;
            else if(text[i-1]==pattern[1]) cb++;
            for(int j=1;j<3;j++){
                if(text[i-1]==pattern[j-1]) dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[text.size()][2]+max(ca, cb);
    }
};