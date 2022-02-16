class Solution {
private:
    void solve(vector<int>& nums, set<vector<int>>& s, vector<int>& temp, int index){
        if(temp.size()>1) s.insert(temp);
        for(int i=index;i<nums.size();i++){
            if(temp.size()==0 || nums[i]>=temp.back()){
                temp.push_back(nums[i]);
                solve(nums, s, temp, i+1);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> s;
        vector<int> temp;
        solve(nums, s, temp, 0);
        vector<vector<int>> ans(s.begin(), s.end());
        return ans;
    }
};