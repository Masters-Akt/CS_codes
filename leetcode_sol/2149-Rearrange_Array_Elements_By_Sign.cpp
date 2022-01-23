class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) ans.push_back(nums[i]);
        }
        vector<int> ans2(nums.size());
        int x = 0, y = nums.size()/2;
        for(int i=0;i<ans2.size();i++){
            if(i%2==0) ans2[i] = ans[x++];
            else ans2[i] = ans[y++];
        }
        return ans2;
    }
};