class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int n = stations.size(), curr = startFuel, i = 0, result = 0;
        while(curr<target){
            while(i<n && curr>=stations[i][0]){
                pq.push(stations[i++][1]);
            }
            if(pq.empty()) return -1;
            curr+=pq.top();
            pq.pop();
            result++;
        }
        return result;
    }
};
