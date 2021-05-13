class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if((int)s[i]>=97 && (int)s[i]<=122){
                ans+=s[i];
            }else{
                int d = (int)s[i-1];
                int n=0;
                if(s[i]=='0') n=0;
                else if(s[i]=='1') n=1;
                else if(s[i]=='2') n=2;
                else if(s[i]=='3') n=3;
                else if(s[i]=='4') n=4;
                else if(s[i]=='5') n=5;
                else if(s[i]=='6') n=6;
                else if(s[i]=='7') n=7;
                else if(s[i]=='8') n=8;
                else n=9;
                d+=n;
                d=d%97;
                ans+=((char)(d+97));
            }
        }
        return ans;
    }
};