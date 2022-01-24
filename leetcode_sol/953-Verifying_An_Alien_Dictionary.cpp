class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> m(26);
        for(int i=0;i<26;i++){
            m[order[i]-'a'] = i;
        }
        for(string &x: words){
            for(char &ch: x){
                ch = m[ch-'a'] + 'a';
            }
        }
        return is_sorted(words.begin(), words.end());
    }
};