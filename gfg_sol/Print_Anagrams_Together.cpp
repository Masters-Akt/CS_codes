//Problem : https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
//map - string - Asked In Goldman Sachs
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(string x: string_list){
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