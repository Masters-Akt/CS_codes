class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1, INT_MAX);
        dist[k] = 0;
        for(int i=0;i<n;i++){
            for(vector<int> e: times){
                int u = e[0], v = e[1], w = e[2];
                if(dist[u] != INT_MAX && dist[v] > dist[u] + w) dist[v] = dist[u] + w;
            }
        }
        int maxwait = 0;
        for(int i=1;i<=n;i++) maxwait = max(maxwait, dist[i]);
        return maxwait==INT_MAX ? -1 : maxwait;
    }
};