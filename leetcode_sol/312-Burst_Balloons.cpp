class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        vector<vector<int>> dp(n+2, vector<int>(n+2, 0));
        for(int window=1; window<=n; window++){
            for(int left=1; left<=n-window+1; left++){
                int right = left+window-1;
                for(int i=left;i<=right;i++){
                    dp[left][right] = max(dp[left][right], (dp[left][i-1]+dp[i+1][right]+(nums[left-1]*nums[i]*nums[right+1])));
                }
            }
        }
        return dp[1][n];
    }
};