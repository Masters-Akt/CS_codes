//Better way - Using Subset Sum function
class Solution {
private:
    bool subsetSum(vector<int>& nums, int sum){
        vector<vector<bool>> dp(nums.size()+1, vector<bool>(sum+1));
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                if(i==0 || j==0){
                    if(i==0) dp[i][j] = false;
                    if(j==0) dp[i][j] = true;
                    continue;
                }
                if(nums[i-1]<=j) dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[nums.size()][sum];
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x: nums) sum+=x;
        if(sum%2) return false;
        return subsetSum(nums, sum/2);
    }
};

//Same code
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