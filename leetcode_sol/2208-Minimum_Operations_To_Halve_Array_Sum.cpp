class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        double sum = 0;
        for(int x: nums){
            sum+=x;
            pq.push((double)x);
        }
        double target = sum/2;
        int ans = 0;
        while(sum>target){
            double x = pq.top();
            pq.pop();
            sum-=(x/2);
            pq.push(x/2);
            ans++;
        }
        return ans;
    }
};