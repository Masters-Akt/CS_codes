class Solution {
private:
    int solve(vector<vector<int>>& moves, vector<vector<int>>& dp, int index, int total_moves){
        int mod = 1e9+7;
        if(total_moves==0) return 1;
        if(dp[total_moves][index]!=-1) return dp[total_moves][index];
        int ans = 0;
        for(auto x: moves[index]){
            ans = (ans+solve(moves, dp, x, total_moves-1))%mod;
        }
        return dp[total_moves][index] = ans;
    }
public:
    int knightDialer(int n) {
        vector<vector<int>> moves = {{4, 6}, {6, 8}, {7, 9}, {4, 8}, {0, 3, 9}, {}, {0, 1, 7}, {2, 6}, {1, 3}, {2, 4}};
        int mod = 1e9+7;
        long long ans = 0;
        vector<vector<int>> dp(n+1, vector<int>(10, -1));
        for(int i=0;i<=9;i++){
            ans = (ans+(solve(moves, dp, i, n-1)))%mod;
        }
        return (int)(ans%mod);
    }
};