//9 out of 10 test cases passed
int countCubeSumPairs(int n) {
    // Write your code here.
    int ans = 0;
    for(int i=1;i<=cbrt(n);i++){
        int ch = n-i*i*i;
        int c = cbrt(ch);
        if(c*c*c==ch) ans++;
    }
    return ans;
}