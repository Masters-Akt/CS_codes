class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int sum = 0;
        for(auto x: nums) sum+=x;
        if(sum%2) return false;
        sum/=2;
        vector<bool> dp(sum+1, false); //for storing each position which is being taken or not
        dp[0] = true;
        for(int i=0;i<nums.size();i++){
            for(int j=sum;j>=nums[i];j--){
                dp[j] = dp[j]||dp[j-nums[i]]; //whichever sum is generated will be marked true
            }
        }
        return dp[sum];
    }
};