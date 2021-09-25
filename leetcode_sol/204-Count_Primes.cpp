class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;
        vector<bool> p(n, true);
        p[0] = p[1] = false;
        for(int i=2;i<sqrt(n);i++){
            if(p[i]){
                for(int j=i*i;j<n;j+=i){
                    p[j] = false;
                }
            }
        }
        return count(p.begin(), p.end(), true);
    }
};