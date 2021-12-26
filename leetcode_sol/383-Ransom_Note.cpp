class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        for(char x: ransomNote) m[x]++;
        for(char x: magazine) m[x]--;
        for(auto x: m) if(x.second>0) return false;
        return true;
    }
};