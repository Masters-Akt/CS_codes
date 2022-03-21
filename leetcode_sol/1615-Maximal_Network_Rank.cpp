class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> vec(n);
        vector<vector<int>> rdNum(n, vector<int>(n,0));
        int i,j, sum=0, maxSum = INT_MIN;
        for(i=0; i<roads.size(); i++){
            vec[roads[i][0]] = vec[roads[i][0]]+1;
            vec[roads[i][1]] = vec[roads[i][1]]+1;
            rdNum[roads[i][0]][roads[i][1]] =1;
            rdNum[roads[i][1]][roads[i][0]] =1;
        }
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                sum = vec[i]+vec[j];
                if(rdNum[i][j] == 1) sum = sum-1;
                maxSum = max(maxSum, sum);
            }
        } 
        return maxSum;
    }
};