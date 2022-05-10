class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = -1;
        for(int i=2;i<num.size();i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                if((num[i]-'0')>ans) ans = num[i]-'0';
            }
        }
        if(ans==-1) return "";
        string a = "";
        for(int i=1;i<=3;i++) a+=to_string(ans);
        return a;
    }
};