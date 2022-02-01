class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int m = INT_MAX, ans = 0;
        for(int i=0;i<nums.size();i++){
            m = min(nums[i], m);
            ans = max(ans, nums[i]-m);
        }
        if(ans==0) return -1;
        return ans;
    }
};