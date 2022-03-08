class Solution {
public:
    int countHomogenous(string s) {
        long long int ans = 0, count = 1, mod=1e9+7;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else{
                ans=(ans+((count%mod*(count+1)%mod)%mod/2))%mod;
                count = 1;
            }
        }
        ans=(ans+((count%mod*(count+1)%mod)%mod/2))%mod;
        return ans;
    }
};