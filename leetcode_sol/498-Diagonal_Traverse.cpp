class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.size()==0) return {};
        int n = mat.size(), m = mat[0].size();
        vector<int> ans(n*m);
        int k = 0;
        vector<int> temp;
        for(int i=0;i<n+m-1;i++){
            temp.clear();
            int row, col;
            if(i<m) row = 0;
            else row = i-m+1;
            if(i<m) col = i;
            else col = m-1;
            while(row<n && col>-1){
                temp.push_back(mat[row][col]);
                row++;
                col--;
            }
            if(i%2==0) reverse(temp.begin(), temp.end());
            for(int i=0;i<temp.size();i++) ans[k++] = temp[i];
        }
        return ans;
    }
};