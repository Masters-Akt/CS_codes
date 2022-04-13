class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans = {{rStart, cStart}};
        int x = 0, y = 1;
        for(int i=0;ans.size()<rows*cols;i++){
            for(int j=0;j<(i/2)+1;j++){
                rStart+=x;
                cStart+=y;
                if(rStart>=0 && rStart<rows && cStart>=0 && cStart<cols) ans.push_back({rStart, cStart});
            }
            int temp = x;
            x = y;
            y = -temp;
        }
        return ans;
    }
};