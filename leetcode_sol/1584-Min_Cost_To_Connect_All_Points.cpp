class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size(), res = 0, i = 0, connected = 0;
        vector<bool> visited(n);
        priority_queue<pair<int, int>> pq;
        while(++connected < n){
            visited[i] = true;
            for (int j = 0; j < n; ++j) if (!visited[j]) pq.push({-(abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1])), j});
            while (visited[pq.top().second]) pq.pop();
            res -= pq.top().first;
            i = pq.top().second;
            pq.pop();
        }
        return res;
    }
};