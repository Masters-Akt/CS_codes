class Solution {
public:
    int commonFactors(int a, int b) {
        if(a<b) return commonFactors(b, a);
        int start = 1, ans = 0;
        while(start<=b){
            if(a%start==0 && b%start==0) ans++;
            start++;
        }
        return ans;
    }
};