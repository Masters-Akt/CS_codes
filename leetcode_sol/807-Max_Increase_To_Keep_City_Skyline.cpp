class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int a[row][col];
        vector<int> lor, tob;
        for(int i=0;i<row;i++){
            int maxh=0;
            for(int j=0;j<col;j++){
                maxh=max(maxh,grid[i][j]);
            }
            lor.push_back(maxh);
        }
        for(int i=0;i<col;i++){
            int maxv=0;
            for(int j=0;j<row;j++){
                maxv = max(maxv,grid[j][i]);
            }
            tob.push_back(maxv);
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                a[i][j]=lor[i];
            }
        }
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(a[j][i]>tob[i]){
                    a[j][i]=tob[i];
                }
            }
        }
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int c=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                c+=(abs(grid[i][j]-a[i][j]));
            }
        }
        return c;
    }
};