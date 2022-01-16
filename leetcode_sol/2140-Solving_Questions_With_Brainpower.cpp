class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size(), -1);
        dp[questions.size()-1] = questions[questions.size()-1][0];
        for(int i=questions.size()-2;i>=0;i--){
            long long comp = 0;
            if(i+questions[i][1]+1<questions.size()) comp = dp[i+questions[i][1]+1];
            dp[i] = max(dp[i+1], comp+questions[i][0]);
        }
        return dp[0];
    }
};