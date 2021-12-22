class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int ans = 0;
        vector<vector<int>> dp(matrix.size()+1, vector<int>(matrix[0].size()+1, 0));
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[i].size();j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans*ans;
    }
};