//Method 1 - BFS
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.size()==0) return mat;
        vector<vector<int>> distance(mat.size(), vector<int>(mat[0].size(), INT_MAX));
        queue<pair<int, int>> q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0) distance[i][j] = 0;
                q.push({i, j});
            }
        }
        int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int r = p.first+dir[i][0];
                int c = p.second+dir[i][1];
                if(r>=0 && c>=0 && r<mat.size() && c<mat[0].size()){
                    if(distance[r][c]>(long long)distance[p.first][p.second]+1){
                        distance[r][c] = distance[p.first][p.second]+1;
                        q.push({r, c});
                    }
                }
            }
        }
        return distance;
    }
};

//Method 2 - DP
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.size()==0) return mat;
        vector<vector<int>> distance(mat.size(), vector<int>(mat[0].size(), INT_MAX-1));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0) distance[i][j] = 0;
                else{
                    if(i>0) distance[i][j] = min(distance[i][j], distance[i-1][j]+1);
                    if(j>0) distance[i][j] = min(distance[i][j], distance[i][j-1]+1);
                }
            }
        }
        for(int i=mat.size()-1;i>=0;i--){
            for(int j=mat[0].size()-1;j>=0;j--){
                if(i<mat.size()-1) distance[i][j] = min(distance[i][j], distance[i+1][j]+1);
                if(j<mat[0].size()-1) distance[i][j] = min(distance[i][j], distance[i][j+1]+1);
            }
        }
        return distance;
    }
};