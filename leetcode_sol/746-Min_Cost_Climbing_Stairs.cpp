//M1 - Recursion - TLE
class Solution {
private:
    int rec(vector<int> cost ,int n){
        if(n<0) return 0;
        if(n==0 || n==1) return cost[n];
        return cost[n]+min(rec(cost, n-1), rec(cost, n-2));
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        return min(rec(cost, cost.size()-1), rec(cost, cost.size()-2));
    }
};