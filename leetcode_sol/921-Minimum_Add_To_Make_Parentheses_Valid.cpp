class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0, c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(c<0){
                    ans-=c;
                    c = 0;
                }
                c++;
            }else{
                c--;
            }
        }
        ans+=abs(c);
        return ans;
    }
};