class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> m;
        while(n!=1 && !m[n]){
            m[n] = true;
            int tempn = 0;
            while(n){
                tempn+=(n%10)*(n%10);
                n/=10;
            }
            n=tempn;
        }
        if(n==1) return true;
        return false;
    }
};