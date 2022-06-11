class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string, bool> m;
        for(int i=0;i<s.size();i++){
            m[s.substr(0, i+1)] = true;
        }
        int ans = 0;
        for(string x: words){
            if(m[x]) ans++;
        }
        return ans;
    }
};