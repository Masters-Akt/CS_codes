class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>> input;
        for(int i=0;i<startTime.size();i++){
            input.push_back({endTime[i], startTime[i], profit[i]});
        }
        sort(input.begin(), input.end());
        vector<int> dp(startTime.size());
        int temp;
        for(int i=0;i<startTime.size();i++){
            if(i==0){
                dp[i] = input[i][2];
                continue;
            }
            temp = 0;
            for(int j=i-1;j>=0;j--){
                if(input[j][0]<=input[i][1]){
                    temp = dp[j];
                    break;
                }
            }
            dp[i] = max(dp[i-1], temp+input[i][2]);
        }
        return dp[startTime.size()-1];
    }
};