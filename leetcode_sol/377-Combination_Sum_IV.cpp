class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;
        for(unsigned int i=1;i<=target;i++){
            for(unsigned int num: nums){
                if(i>=num) dp[i]+=dp[i-num];
            }
        }
        return (int)dp[target];
    }
};