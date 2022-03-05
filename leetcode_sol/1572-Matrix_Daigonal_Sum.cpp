class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int c = mat[0].size()-1;
        for(int i=0;i<mat.size();i++){
            ans+=mat[i][i];
            if(c!=i) ans+=mat[i][c];
            c--;
        }
        return ans;
    }
};