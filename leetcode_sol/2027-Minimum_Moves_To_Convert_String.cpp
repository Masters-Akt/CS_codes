class Solution {
public:
    int minimumMoves(string s) {
        int ans = 0, i = 0;
        while(i<s.size()-2){
            if(s[i]=='X' || s[i]=='X' || s[i]=='X'){
                ans++;
                i+=3;
            }else i++;
        }
        if(i==s.size()-2){
            if(s[i]=='X' || s[i+1]=='X') ans++;
        }else if(i==s.size()-1){
            if(s[i]=='X') ans++;
        }
        return ans;
    }
};