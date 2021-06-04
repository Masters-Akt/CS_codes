class Solution {
public:
    string reverseWords(string s) {
        string ans="", temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(temp!=""){
                    reverse(temp.begin(), temp.end());
                    ans+=temp;
                    temp="";
                }
                ans+=s[i];
            }else{
                temp+=s[i];
            }
        }
        if(temp!=""){
            reverse(temp.begin(), temp.end());
            ans+=temp;
        }
        return ans;
    }
};