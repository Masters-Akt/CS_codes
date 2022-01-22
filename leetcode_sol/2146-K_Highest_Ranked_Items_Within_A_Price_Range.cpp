class Solution {
private:
    static bool comp(pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b){
        if(a.first==b.first){
            if(a.second.first==b.second.first) return a.second.second<b.second.second;
            return a.second.first<b.second.first;
        }
        return a.first<b.first;
    }
public:
    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k) {
        vector<vector<int>> ans;
        queue<pair<int, int>> q;
        q.push({start[0], start[1]});
        vector<int> d{0, 1, 0, -1, 0};
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0) vis[i][j] = true;
            }
        }
        vis[start[0]][start[1]] = true;
        if(grid[start[0]][start[1]]>1 && grid[start[0]][start[1]]>=pricing[0] && grid[start[0]][start[1]]<=pricing[1]){
            vector<int> te;
            te.push_back(start[0]);
            te.push_back(start[1]);
            ans.push_back(te);
        }
        while(!q.empty()){
            int s = q.size();
            vector<pair<int, pair<int, int>>> temp;
            for(int i=0;i<s;i++){
                auto x = q.front();
                q.pop();
                for(int j=0;j<4;j++){
                    int xi = x.first+d[j];
                    int yi = x.second+d[j+1];
                    if(xi>=0 && yi>=0 && xi<n && yi<m && grid[xi][yi]>=1 && !vis[xi][yi]){
                        if(grid[xi][yi]!=1 && grid[xi][yi]>=pricing[0] && grid[xi][yi]<=pricing[1]) temp.push_back({grid[xi][yi], {xi, yi}});
                        q.push({xi, yi});
                        vis[xi][yi] = true;
                    }
                }
            }
            // for(int i=0;i<temp.size();i++){
            //     cout<<temp[i].first<<" "<<temp[i].second.first<<" "<<temp[i].second.second<<"\n";
            // }
            // cout<<endl;
            sort(temp.begin(), temp.end(), comp);
            if(temp.size()<=k-ans.size()){
                    for(int i=0;i<temp.size();i++){
                        vector<int> temp2;
                        temp2.push_back(temp[i].second.first);
                        temp2.push_back(temp[i].second.second);
                        ans.push_back(temp2);
                        //cout<<temp2[0]<<" "<<temp2[1]<<"\n";
                    }
            }else{
                    int i=0;
                    while(ans.size()!=k){
                        vector<int> temp2;
                        temp2.push_back(temp[i].second.first);
                        temp2.push_back(temp[i].second.second);
                        ans.push_back(temp2);
                        i++;
                        //cout<<temp2[0]<<" "<<temp2[1]<<"\n";
                    }
            }
            if(ans.size()==k) break;
        }
        return ans;
    }
};