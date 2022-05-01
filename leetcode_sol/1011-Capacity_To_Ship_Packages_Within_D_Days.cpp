class Solution {
private:
    bool check(int mid, vector<int>& weights, int days){
        int count = 1, sum = 0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid){
                count++;
                sum = weights[i];
            }
        }
        return count<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxcapacity = 0, mincapacity = weights[0];
        for(int i=0;i<n;i++){
            maxcapacity+=weights[i];
            mincapacity = max(mincapacity, weights[i]);
        }
        int ans = 0;
        mincapacity = max(maxcapacity/days, mincapacity);
        while(mincapacity<=maxcapacity){
            int mid = (mincapacity+maxcapacity)/2;
            if(check(mid, weights, days)){
                ans = mid;
                maxcapacity = mid-1;
            }else mincapacity = mid+1;
        }
        return ans;
    }
};