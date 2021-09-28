class Solution {
public:
    void solve(vector<int> &num, int start, vector<vector<int>> &ans){
        if(start>=num.size()){
            ans.push_back(num);
            return;
        }
        for(int i=start;i<num.size();i++){
            swap(num[start], num[i]);
            solve(num, start+1, ans);
            swap(num[start], num[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, 0, ans);
        return ans;
    }
};