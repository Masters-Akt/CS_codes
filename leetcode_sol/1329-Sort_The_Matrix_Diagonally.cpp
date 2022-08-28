class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i-j].push_back(mat[i][j]);
            }
        }
        for(int k=-(n-1);k<m;k++) sort(mp[k].begin(),mp[k].end());
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                mat[i][j]=mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
        return mat;
    }
};