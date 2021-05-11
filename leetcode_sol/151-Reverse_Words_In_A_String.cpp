class Solution {
public:
    string reverseWords(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                c++;
            }else break;
        }
        s.erase(0,c);
        c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                c++;
            }else break;
        }
        s.erase(s.size()-c,c);
        string ans = "", temp="";
        bool ch = true;
        c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                c++;
                if(temp==""){
                    continue;
                }
                if(ch){
                    ch=false;
                    ans=temp;
                    temp="";
                }else{
                    ans=temp+" "+ans;
                    temp="";
                }
            }else{
                temp+=(s[i]);
            }
        }
        if(c!=0)
        ans=temp+" "+ans;
        else ans=temp;
        return ans;
    }
};