class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] || grid[n-1][n-1]) return -1;
        queue<pair<int, int>> q;
        vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
        q.push({0, 0});
        grid[0][0] = 1;
        int ans = 0;
        while(!q.empty()){
            int s = q.size();
            ans++;
            for(int i=0;i<s;i++){
                auto x = q.front();
                q.pop();
                if(x.first==n-1 && x.second==n-1) return ans;
                for(int j=0;j<d.size();j++){
                    int xi = x.first+d[j][0];
                    int yi = x.second+d[j][1];
                    if(xi>=0 && yi>=0 && xi<n && yi<n && grid[xi][yi]==0){
                        q.push({xi, yi});
                        grid[xi][yi] = 1; //For removing extra push pop
                    }
                }
            }
        }
        return -1;
    }
};