class Solution {
public:
    int countOrders(int n) {
        long ans = 1, mod = 1e9 + 7;
        for(int i=1; i<=n; i++) ans = (ans*(i*2-1)*i)%mod;
        return ans;
    }
};