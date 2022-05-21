class Solution {
public:
    int kthGrammar(int n, int k) {
        int ans = 0;
        while(k>1){
            k = k%2==1 ? k+1 : k/2;
            ans^=1;
        }
        return ans;
    }
};