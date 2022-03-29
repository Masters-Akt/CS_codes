class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int total_xor = 0;
        for(int x: nums) total_xor^=x;
        vector<int> ans(nums.size());
        ans[0] = total_xor^=(1<<maximumBit)-1;
        for(int i=1;i<nums.size();i++) ans[i] = total_xor^=nums[nums.size()-i];
        return ans;
    }
};