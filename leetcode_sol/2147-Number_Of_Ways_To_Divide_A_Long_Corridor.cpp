class Solution {
public:
    int numberOfWays(string corridor) {
        int s = 0, mod = 1e9+7;
        for(int i=0;i<corridor.size();i++){
            if(corridor[i]=='S') s++;
        }
        if(s%2 || s==0) return 0;
        int ans = 1;
        int p = 0, temps = 0;
        for(int i=0;i<corridor.size();i++){
            if(temps>2){
                    ans = ((long long)ans*(long long)(p+1))%mod;;
                    p=0;
                    temps=1;
                }
            if(corridor[i]=='S') temps++;
            else{
                if(temps==2) p++;
                else if(temps>2){
                    ans = ((long long)ans*(long long)(p+1))%mod;;
                    p=0;
                    temps=1;
                }
            }
            //cout<<ans<<" "<<temps<<"\n";
        }
        return ans;
    }
};