class Solution {
private:
    void solve(vector<vector<int>>& ans, vector<int>& numbers, vector<int> temp, int start, int k, int n, int sum){
        if(temp.size()==k && sum==n){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<9;i++){
            if(numbers[i]==-1) continue;
            sum+=numbers[i];
            temp.push_back(numbers[i]);
            int t = numbers[i];
            numbers[i] = -1;
            solve(ans, numbers, temp, i+1, k, n, sum);
            sum-=t;
            numbers[i] = t;
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        solve(ans, numbers, {}, 0, k, n, 0);
        return ans;
    }
};