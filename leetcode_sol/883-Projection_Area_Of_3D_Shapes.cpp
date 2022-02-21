class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto x: grid){
            for(int y: x){
                if(y!=0) ans++;
            }
        }
        for(auto x: grid){
            int m = 0;
            for(int y: x){
                m = max(m, y);
            }
            ans+=m;
        }
        for(int i=0;i<grid.size();i++){
            int m = 0;
            for(int j=0;j<grid[i].size();j++){
                m = max(m, grid[j][i]);
            }
            ans+=m;
        }
        return ans;
    }
};