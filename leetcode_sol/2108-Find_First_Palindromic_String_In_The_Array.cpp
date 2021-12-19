class Solution {
private:
    bool palin(string s){
        int l = 0, h = s.size()-1;
        while(l<h){
            if(s[l]!=s[h]) return false;
            l++;
            h--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(palin(words[i])) return words[i];
        }
        return "";
    }
};