class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string str;
        int ans = 0;
        while(ss>>str){
            ans++;
            if(str.substr(0, searchWord.size())==searchWord) return ans;
        }
        return -1;
    }
};