class Solution {
public:
    double largestSumOfAverages(vector<int>& nums, int k) {
        vector<int> sum(nums.size()+1, 0);
        for(int i=0;i<nums.size();i++){
            sum[i+1] = sum[i] + nums[i];
        }
        if(k==1) return (sum[nums.size()]*1.0)/nums.size();
        vector<vector<double>> dp(nums.size()+1, vector<double>(k+1, 0.0));
        for(int i=1;i<=nums.size();i++){
            dp[i][1] = (1.0*sum[i])/i;
        }
        for(int i=2;i<=k;i++){
            for(int j=i;j<=nums.size();j++){
                for(int x=j-1;x>=i-1;x--){
                    dp[j][i] = max(dp[j][i], dp[x][i-1]+1.0*(sum[j]-sum[x])/(j-x));
                }
            }
        }
        return dp[nums.size()][k];
    }
};