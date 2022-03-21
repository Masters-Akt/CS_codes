class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> ans(triangle.back());
        for(int i=triangle.size()-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                ans[j] = min(ans[j], ans[j+1])+triangle[i][j];
            }
        }
        return ans[0];
    }
};