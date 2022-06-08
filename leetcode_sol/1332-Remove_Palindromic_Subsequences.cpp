class Solution {
public:
    int removePalindromeSub(string s) {
        if(s=="") return 0;
        for(int i=0,j=s.size()-1; i<j; i++,j--) if(s[i]!=s[j]) return 2;
        return 1;
    }
};