class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s1="";
        for(int i=0;i<s.size();i++){
            if(((int)s[i]>=97 && (int)s[i]<=122) || ((int)s[i]>=48 && (int)s[i]<=57)){
                s1+=s[i];
            }
        }
        for(int i=0;i<s1.size()/2;i++){
            if(s1[i]!=s1[s1.size()-i-1]) return false;
        }
        return true;
    }
};