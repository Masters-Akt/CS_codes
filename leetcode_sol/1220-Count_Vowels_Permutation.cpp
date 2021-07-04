class Solution {
public:
    int countVowelPermutation(int n) {
        long a=1, e=1, i=1, o=1, u=1;
        int mod = 1000000007;
        for(int j=1;j<n;j++){
            long anew = (e+i+u)%mod;
            long enew = (a+i)%mod;
            long inew = (e+o)%mod;
            long onew = (i)%mod;
            long unew = (i+o)%mod;
            a = anew; e = enew; i = inew; o = onew; u = unew;
        }
        long ans = (a+e+i+o+u)%mod;
        return (int)ans;
    }
};