class Solution {
public:
    string toLowerCase(string str) {
        string ans="";
        for(int i=0;i<str.length();i++){
            if((int)str[i]>=65 && (int)str[i]<=90){
                ans=ans+(char)((int)str[i] + 32);
            }
            else{
                ans=ans+str[i];
            }
        }
        return ans;
    }
};