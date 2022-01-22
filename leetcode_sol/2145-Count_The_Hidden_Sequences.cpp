class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long sum = 0, l = INT_MAX, h = INT_MIN;
        for(long long i=0;i<differences.size();i++){
            sum+=differences[i];
            l = min(l, sum);
            h = max(h, sum);
        }
        long long ans = 0;
        for(long long i=lower;i<=upper;i++){
            if(i+l>=lower && i+h<=upper) ans++;
        }
        return (int)ans;
    }
};