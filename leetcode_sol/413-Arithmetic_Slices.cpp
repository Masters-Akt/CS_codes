class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0, j = 1;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]!=nums[j]-nums[j-1]) j = i;
            ans+=(i-j);
        }
        return ans;
    }
};