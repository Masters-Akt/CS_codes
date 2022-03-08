class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string, bool> dead;
        for(auto& x : deadends) dead[x] = true;
        unordered_map<string, bool> vis;
        string curr = "0000";
        if(dead[curr]) return -1;
        vis[curr] = true;
        queue<pair<string, int>> q;
        q.push({curr, 0});
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto x = q.front();
                q.pop();
                string c = x.first;
                int level = x.second;
                if(c==target) return level;
                for(int i=0;i<4;i++){
                    int n = c[i]-'0';
                    int next = (n==9)?0:n+1;
                    int prev = (n==0)?9:n-1;
                    string nexts = c, backs = c;
                    nexts[i] = next+'0';
                    backs[i] = prev+'0';
                    if(!dead[nexts] && !vis[nexts]){
                        vis[nexts] = true;
                        q.push({nexts, level+1});
                    }
                    if(!dead[backs] && !vis[backs]){
                        vis[backs] = true;
                        q.push({backs, level+1});
                    }
                }
            }
        }
        return -1;
    }
};