class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true, decreasing = true;
        for(int i=1;i<nums.size();i++) increasing&=nums[i-1]<=nums[i], decreasing&=nums[i-1]>=nums[i];
        return increasing || decreasing;
    }
};