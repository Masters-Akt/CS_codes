class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = nums[nums.size()-1]-nums[0], mi = nums[0]+k, ma = nums[nums.size()-1]-k;
        for(int i=0;i<nums.size()-1;i++){
            int min1 = min(mi, nums[i+1]-k);
            int max1 = max(ma, nums[i]+k);
            ans = min(ans, max1-min1);
        }
        return ans;
    }
};