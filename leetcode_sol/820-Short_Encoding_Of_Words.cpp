class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string> s(words.begin(), words.end());
        for(string w : s)
            for(int i=1;i<w.size();i++)
                s.erase(w.substr(i));
        int ans = 0;
        for(string w : s) ans+=w.size()+1;
        return ans;
    }
};