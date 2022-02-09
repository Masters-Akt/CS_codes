class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> suffix(nums.size()+1);
        suffix[0] = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            suffix[i+1] = sum;
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i] = (i)*nums[i]-suffix[i]+(sum-suffix[i]-nums[i])-(nums.size()-i-1)*nums[i];
        }
        return ans;
    }
};