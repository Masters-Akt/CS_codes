class Solution {
private:
    void solve(vector<vector<int>>& ans, vector<int>& temp, vector<int>& numbers, int k, int index){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(index==numbers.size()) return;
        for(int i=index;i<numbers.size();i++){
            temp.push_back(numbers[i]);
            solve(ans, temp, numbers, k, i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> numbers;
        for(int i=1;i<=n;i++) numbers.push_back(i);
        solve(ans, temp, numbers, k, 0);
        return ans;
    }
};