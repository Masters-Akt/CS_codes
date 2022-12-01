class Solution {
public:
    bool halvesAreAlike(string s) {
        int counta=0, countb=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') counta++;
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') countb++;
        }
        return counta==countb;
    }
};