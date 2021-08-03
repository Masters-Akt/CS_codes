class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool check[26] = {false};
        for(int i=0;i<sentence.size();i++){
            check[sentence[i]-'a'] = true;
        }
        for(int i=0;i<26;i++){
            if(!check[i]) return false;
        }
        return true;
    }
};