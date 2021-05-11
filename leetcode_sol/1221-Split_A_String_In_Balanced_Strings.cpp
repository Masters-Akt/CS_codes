class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0, r=0, l=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R') r++;
            else l++;
            if(r==l){
                count++;
                r=0;
                l=0;
            }
        }
        return count;
    }
};