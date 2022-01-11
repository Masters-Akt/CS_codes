class Solution {
private:
    void solve(vector<vector<int>>& land, int i, int j, vector<int>& temp){
        int tempj = j;
        while(tempj<land[0].size() && land[i][tempj]==1) tempj++;
        int tempi = i;
        while(tempi<land.size() && land[tempi][j]==1) tempi++;
        tempi = tempi==0?tempi:tempi-1;
        tempj = tempj==0?tempj:tempj-1;
        temp.push_back(tempi);
        temp.push_back(tempj);
        for(int x=i;x<=tempi;x++){
            for(int y=j;y<=tempj;y++){
                land[x][y] = 0;
            }
        }
    }
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        for(int i=0;i<land.size();i++){
            for(int j=0;j<land[i].size();j++){
                if(land[i][j]){
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    solve(land, i, j, temp);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};