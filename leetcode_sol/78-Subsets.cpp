class Solution {
private:
    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int> temp, int start){
        ans.push_back(temp);
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            backtrack(nums, ans, temp, i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        backtrack(nums, ans, {}, 0);
        return ans;
    }
};