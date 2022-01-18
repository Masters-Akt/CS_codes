vector<int> solve(vector<int> nums, int index){
    vector<int> ans(nums.size());
    for(int i=0;i<nums.size();i++){
        ans[i] = nums[(i+index)%nums.size()];
    }
    return ans;
}
vector<vector<int>> leftRotationsOfArray(vector<int> nums, vector<int> queries) {
    // Write your code here.
    vector<vector<int>> ans(queries.size());
    for(int i=0;i<queries.size();i++){
        ans[i] = (solve(nums, queries[i]));
    }
    return ans;
}