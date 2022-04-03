class Solution {
private:
    bool solve(vector<int>& candies, long long k, long long m){
        long long a=0;
        for(int i=0;i<candies.size();i++){
            a+=candies[i]/m;
            if(a>=k) return true;
        }
        return false;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long l=0, r=0;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>r) r = candies[i];
        }
        while(l+1<r){
            long long mid = (l+r)/2;
            if(solve(candies, k, mid)) l = mid;
            else r = mid;
        }
        if(solve(candies, k, r)) return r;
        return l;
    }
};