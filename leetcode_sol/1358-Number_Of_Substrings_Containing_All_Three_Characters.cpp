class Solution {
public:
    int numberOfSubstrings(string s) {
        if(s.size()<3) return 0;
        int a = 0, b = 0, c = 0, i = 0, j = i+2;
        for(int p=i;p<=j;p++){
            if(s[p]=='a') a++;
            else if(s[p]=='b') b++;
            else c++;
        }
        int ans = 0;
        while(j<=s.size()-1 && i<=s.size()-3){
            if(j-i<2){
                j++;
                if(j>s.size()-1) break;
                if(s[j]=='a') a++;
                else if(s[j]=='b') b++;
                else c++;
                continue;
            }
            if(a>0 && b>0 && c>0){
                ans+=(s.size()-j);
                if(s[i]=='a') a--;
                else if(s[i]=='b') b--;
                else c--;
                i++;
            }else{
                j++;
                if(j>s.size()-1) break;
                if(s[j]=='a') a++;
                else if(s[j]=='b') b++;
                else c++;
            }
        }
        return ans;
    }
};