class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> A;
        vector<string> B;
        for(int i=0;i<paths.size();i++){
            A.push_back(paths[i][0]);
            B.push_back(paths[i][1]);
        }
        string ans = B[0];
        while(find(A.begin(), A.end(), ans)!=A.end()){
            ans = B[find(A.begin(), A.end(), ans)-A.begin()];
        }
        return ans;
    }
};