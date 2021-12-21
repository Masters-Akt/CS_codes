class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        vector<vector<int>> ans(isWater.size(), vector<int>(isWater[0].size(), -1));
        queue<pair<int, int>> q;
        for(int i=0;i<isWater.size();i++){
            for(int j=0;j<isWater[i].size();j++){
                if(isWater[i][j]==1){
                    ans[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        vector<int> d = {0, 1, 0, -1, 0};
        int h = 1;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto p = q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int x = p.first+d[i];
                    int y = p.second+d[i+1];
                    if(x>=0 && y>=0 && x<isWater.size() && y<isWater[0].size() && ans[x][y]==-1){
                        ans[x][y] = h;
                        q.push({x, y});
                    }
                }    
            }
            h++;
        }
        return ans;
    }
};