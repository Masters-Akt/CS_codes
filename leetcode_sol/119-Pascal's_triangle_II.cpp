class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        if(rowIndex==0){
            res.push_back(1);
            return res;
        }
        vector<vector<int>> ans(rowIndex+1);
        ans[0].push_back(1);
        if(rowIndex>0){
            ans[1].push_back(1);
            ans[1].push_back(1);
        }
        for(int i=2;i<=rowIndex;i++){
            ans[i].push_back(1);
            for(int j=1;j<ans[i-1].size();j++){
                ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
            ans[i].push_back(1);
        }
        for(int i=0;i<ans[rowIndex].size();i++){
            res.push_back(ans[rowIndex][i]);
        }
        return res;
    }
};