class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> node_degree(n, 0);
        for(auto &road: roads){
            node_degree[road[0]]++;
            node_degree[road[1]]++;
        }
        sort(node_degree.begin(), node_degree.end());
        long long answer = 0;
        for(int i=0;i<n;i++) answer+=((i+1)*node_degree[i]);
        return answer;
    }
};