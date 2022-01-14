class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        vector<vector<int>> dp(dungeon.size()+1, vector<int>(dungeon[0].size()+1, INT_MAX));
        dp[dungeon.size()-1][dungeon[0].size()] = 1;
        dp[dungeon.size()][dungeon[0].size()-1] = 1;
        for(int i=dungeon.size()-1;i>=0;i--){
            for(int j=dungeon[0].size()-1;j>=0;j--){
                int h = min(dp[i+1][j], dp[i][j+1])-dungeon[i][j];
                dp[i][j] = h<=0?1:h;
            }
        }
        return dp[0][0];
    }
};