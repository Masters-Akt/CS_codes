class Solution {
public:
    int numSub(string s) {
        long long int mod = 1e9+7, ans = 0, count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') count++;
            else{
                ans = (ans+(((count%mod)*(count+1)%mod)%mod/2))%mod;
                count = 0;
            }
        }
        ans = (ans+(((count%mod)*(count+1)%mod)%mod/2))%mod;
        return ans;
    }
};