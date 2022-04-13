class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans(m*n);
        int rstart=0, rend = m-1, cstart=0, cend=n-1, pointer=0;
        while(rstart<=rend && cstart<=cend){
            for(int i=cstart;i<=cend;i++) ans[pointer++] = matrix[rstart][i];
            for(int i=rstart+1;i<=rend;i++) ans[pointer++] = matrix[i][cend];
            if(rstart<rend && cstart<cend){
                for(int i=cend-1;i>=cstart;i--) ans[pointer++] = matrix[rend][i];
                for(int i=rend-1;i>rstart;i--) ans[pointer++] = matrix[i][cstart];
            }
            rstart++;
            rend--;
            cstart++;
            cend--;
        }
        return ans;
    }
};