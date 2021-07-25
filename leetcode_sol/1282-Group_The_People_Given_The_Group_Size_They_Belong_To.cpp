class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> group(500);
        vector<bool> check(500, false);
        for(int i=0;i<groupSizes.size();i++){
            group[groupSizes[i]-1].push_back(i);
            check[groupSizes[i]-1]=true;
        }
        vector<vector<int>> ans;
        for(int i=0;i<500;i++){
            if(check[i]){
                vector<int> temp;
                for(int j=0;j<group[i].size();j++){
                    temp.push_back(group[i][j]);
                    if(temp.size()==i+1){
                        ans.push_back(temp);
                        temp.clear();
                    }
                }
            }
        }
        return ans;
    }
};