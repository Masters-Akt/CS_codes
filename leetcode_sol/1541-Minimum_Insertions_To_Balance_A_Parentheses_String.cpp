class Solution {
public:
    int minInsertions(string s) {
        int leftopen=0, ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') leftopen++;
            else{
                if(i==s.size()-1 || s[i+1]!=')') ans++;
                else i++;
                if(leftopen>0) leftopen--;
                else ans++;
            }
        }
        return leftopen*2+ans;
    }
};