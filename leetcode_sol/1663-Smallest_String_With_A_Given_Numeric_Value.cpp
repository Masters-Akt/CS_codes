class Solution {
public:
    string getSmallestString(int n, int k) {
        k-=n;
        string ans(n, 'a');
        int i = n-1;
        while(k>0){
            int x = min(k, 25);
            ans[i]+=x;
            k-=x;
            i--;
        }
        return ans;
    }
};