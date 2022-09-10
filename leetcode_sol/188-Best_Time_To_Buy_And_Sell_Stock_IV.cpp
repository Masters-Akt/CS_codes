class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<int> dp(2*k+1, INT_MIN);
        dp[0] = 0;
        for(int j=0;j<prices.size();j++){
            for(int i=0;i<=2*k-2;i+=2){
                dp[i+1] = max(dp[i+1], dp[i]-prices[j]);
                dp[i+2] = max(dp[i+2], dp[i+1]+prices[j]);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};