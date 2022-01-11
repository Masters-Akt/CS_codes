class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1) return true;
        bool check = true;
        if(word[1]-'a'<0) check = false;
        if(word[0]-'a'>=0 && !check) return false;
        for(int i=2;i<word.size();i++){
            bool ch = word[i]-'a'<0 ? false : true;
            if(ch!=check) return false;
        }
        return true;
    }
};