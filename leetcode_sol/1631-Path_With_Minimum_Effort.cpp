class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        //Dijkshtra's Algo
        int m = heights.size(), n = heights[0].size();
        vector<int> dir = {0, 1, 0, -1, 0};
        //lambda function for priority queue compare
        auto comp = [&](pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b){ return a.first>=b.first;};
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, decltype(comp)> pq(comp);
        vector<vector<int>> effort(m, vector<int>(n, INT_MAX));
        effort[0][0] = 0;
        pq.push({0, {0, 0}});
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            if(x.second.first==m-1 && x.second.second==n-1) break;
            for(int d=0;d<4;d++){
                int i = x.second.first+dir[d], j = x.second.second+dir[d+1];
                if(i>=0 && j>=0 && i<m && j<n){
                    int new_effort = max(effort[x.second.first][x.second.second], abs(heights[x.second.first][x.second.second]-heights[i][j]));
                    if(new_effort<effort[i][j]){
                        effort[i][j] = new_effort;
                        pq.push({new_effort, {i, j}});
                    }
                }
            }
        }
        return effort[m-1][n-1];
    }
};