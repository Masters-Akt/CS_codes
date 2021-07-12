class Solution {
public:
    
    string helper(string s) {
        unordered_map<char, char> m;
        char curr = 'a';
        for(auto x:s) if(!m[x]) m[x] = curr++;
        for (int i=0; i<s.size(); i++) s[i] = m[s[i]];
        return s;
    }
    
    bool isIsomorphic(string s, string t) {
        return helper(s) == helper(t);
    }
};