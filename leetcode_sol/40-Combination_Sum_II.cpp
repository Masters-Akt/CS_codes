class Solution {
private:
    void backtrack(vector<vector<int>>& ans, vector<int>& candidates, vector<int> temp, int target, int start){
        if(target<0) return;
        if(target==0) ans.push_back(temp);
        else{
            for(int i=start; i<candidates.size();i++){
                if(i>start && candidates[i]==candidates[i-1]) continue;
                temp.push_back(candidates[i]);
                backtrack(ans, candidates, temp, target-candidates[i], i+1);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        backtrack(ans, candidates, {}, target, 0);
        return ans;
    }
};