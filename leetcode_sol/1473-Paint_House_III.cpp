class Solution {
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        int INF = 1e9;
        vector<vector<int>> dp(target + 1, vector<int> (n, INF));
        if(houses[0]==0) dp[1] = cost[0];
        else dp[1][houses[0]-1] = 0;
        for(int i=1;i<m;i++){
            for(int groups=target;groups>0;groups--){
                for(int color1=0;color1<n;color1++){
                    int min_cost = dp[groups][color1];
                    dp[groups][color1] = INF;
                    if(houses[i]!=0 && houses[i]!=color1+1) continue;
                    int c = (houses[i] == 0)?cost[i][color1]:0;
                    min_cost+=c;
                    for(int color2=0;color2<n;color2++){
                        if(color1==color2) continue;
                        min_cost = min(min_cost, dp[groups-1][color2]+c);
                    }
                    dp[groups][color1] = min_cost;
                }
            }
        }
        int ans = INF;
        for(int color=0;color<n;color++) ans = min(ans, dp[target][color]);
        return (ans<INF) ? ans : -1;
    }
};