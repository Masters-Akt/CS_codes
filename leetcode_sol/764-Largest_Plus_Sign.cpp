class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> grid(n, vector<int>(n, 1));
        for(int i=0;i<mines.size();i++){
            grid[mines[i][0]][mines[i][1]] = 0;
        }
        vector<vector<int>> left(grid), right(grid), up(grid), down(grid);
        for(vector<int> &x: left){
            for(int i=1;i<x.size();i++){
                if(x[i]==0) x[i] = 0;
                else x[i]+=(x[i-1]);
            }
        }
        for(vector<int> &x: right){
            for(int i=x.size()-2;i>=0;i--){
                if(x[i]==0) x[i] = 0;
                else x[i]+=(x[i+1]);
            }
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(up[i][j]==0) up[i][j]=0;
                else up[i][j]+=up[i-1][j];
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
                if(down[i][j]==0) down[i][j]=0;
                else down[i][j]+=down[i+1][j];
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans = max(ans, min({left[i][j], right[i][j], down[i][j], up[i][j]}));
            }
        }
        return ans;
    }
};