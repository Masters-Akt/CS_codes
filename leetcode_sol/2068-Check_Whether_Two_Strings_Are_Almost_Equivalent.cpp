class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> f(26, 0);
        for(char x: word1) f[x-'a']++;
        for(char x: word2) f[x-'a']--;
        for(int i=0;i<26;i++){
            if(abs(f[i])>3) return false;
        }
        return true;
    }
};