class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        for(int i=0;i<mat.size();i++) mat[i].push_back(i);
        sort(mat.begin(), mat.end());
        vector<int> ans(k);
        for(int i=0;i<k;i++){
            ans[i] = mat[i][mat[i].size()-1];
        }
        return ans;
    }
};