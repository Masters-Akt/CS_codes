class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        vector<long long> suffix(beans.size()+1);
        suffix[0] = 0;
        long long sum = 0;
        for(int i=0;i<beans.size();i++){
            sum+=beans[i];
            suffix[i+1] = sum;
        }
        long long ans = LONG_MAX;
        for(int i=0;i<beans.size();i++){
            long long temp = suffix[i]+sum-suffix[i+1]-(beans.size()-i-1)*beans[i];
            ans = min(ans, temp);
        }
        return ans;
    }
};