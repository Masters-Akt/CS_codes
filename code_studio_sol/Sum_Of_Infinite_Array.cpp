vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    // Write your code here
    int mod = 1e9+7;
    vector<long long> prefixSum(n+1);
    prefixSum[0] = 0;
    for(int i=0;i<n;i++) prefixSum[i+1] = (prefixSum[i]+arr[i])%mod;
    vector<int> ans(q, 0);
    for(int i=0;i<q;i++){
        long long l = queries[i][0]-1, r = queries[i][1];
        long long a = ((prefixSum[(int)(r%n)] - prefixSum[(int)(l%n)])%mod + (prefixSum[n]*((r/n - l/n)%mod))%mod)%mod;
       	ans[i] = (int)((a+mod)%mod);
    }
    return ans;
}