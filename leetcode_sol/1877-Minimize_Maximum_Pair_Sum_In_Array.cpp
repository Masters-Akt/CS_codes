class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m = 0;
        for(int i=0;i<nums.size()/2;i++){
            m=max(m, nums[i]+nums[nums.size()-i-1]);
        }
        return m;
    }
};