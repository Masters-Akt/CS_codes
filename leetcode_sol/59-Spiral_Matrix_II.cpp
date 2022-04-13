class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int rstart=0, rend=n-1, cstart=0, cend=n-1, val=1;
        while(rstart<=rend && cstart<=cend){
            for(int i=cstart;i<=cend;i++) ans[rstart][i] = val++;
            for(int i=rstart+1;i<=rend;i++) ans[i][cend] = val++;
            if(rstart<rend && cstart<cend){
                for(int i=cend-1;i>cstart;i--) ans[rend][i] = val++;
                for(int i=rend;i>rstart;i--) ans[i][cstart] = val++;    
            }
            rstart++;
            cstart++;
            rend--;
            cend--;
        }
        return ans;
    }
};