class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rowsize = mat.size(), colsize = mat[0].size(), temp = rowsize*colsize;
        if(r*c!=temp) return mat;
        vector<vector<int>> ans(r, vector<int>(c,0));
        for(int i=0;i<temp;i++) ans[i/c][i%c] = mat[i/colsize][i%colsize];
        return ans;
    }
};