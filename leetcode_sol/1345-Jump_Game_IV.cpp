class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int, vector<int>> m;
        for(int i=0;i<arr.size();i++) m[arr[i]].push_back(i);
        queue<pair<int, int>> q;
        vector<bool> visited(arr.size());
        visited[0] = true;
        q.push({0, 0});
        int ans;
        while(!q.empty()){
            int v = q.front().first;
            int jumps = q.front().second;
            q.pop();
            if(v==arr.size()-1){
                ans = jumps;
                break;
            }
            if(v+1<arr.size() && !visited[v+1]){
                visited[v+1] = true;
                q.push({v+1, jumps+1});
            }
            if(v-1>=0 && !visited[v-1]){
                visited[v-1] = true;
                q.push({v-1, jumps+1});
            }
            if(!m.count(arr[v])) continue;
            for(auto& j: m[arr[v]]){
                if(!visited[j]){
                    visited[j] = true;
                    q.push({j, jumps+1});
                }
            }
            m.erase(arr[v]);
        }
        return ans;
    }
};