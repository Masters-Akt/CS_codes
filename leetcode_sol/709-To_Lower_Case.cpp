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

//M2
class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])) ans+=tolower(s[i]);
            else ans+=s[i];
        }
        return ans;
    }
};