class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totalTime = 0, i=0, j = 0;
        while(j<colors.size()){
            int maxi = 0, sum = 0;
            while(colors[i]==colors[j] && j<colors.size()){
                sum+=neededTime[j];
                maxi = max(maxi, neededTime[j]);
                j++;
            }
            sum -= maxi;
            totalTime += sum;
			i = j;
        }
        return totalTime;
    }
};