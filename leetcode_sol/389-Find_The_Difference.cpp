class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;
        for(char x: t) m[x]++;
        for(char x: s) m[x]--;
        for(auto x: m){
            if(x.second>0) return x.first;
        }
        return '0';
    }
};