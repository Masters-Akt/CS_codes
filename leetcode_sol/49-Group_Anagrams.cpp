class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(string x: strs){
            string y = x;
            sort(y.begin(), y.end());
            m[y].push_back(x);
        }
        for(auto x: m){
            ans.push_back(x.second);
        }
        return ans;
    }
};