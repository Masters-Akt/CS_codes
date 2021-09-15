class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        bool check = true;
        for(int i=0;i<word.size();i++){
            if(check){
                ans = word[i]+ans;
                if(word[i]==ch){
                    check = false;
                }
            }else{
                ans+=word[i];
            }
        }
        if(check) return word;
        return ans;
    }
};