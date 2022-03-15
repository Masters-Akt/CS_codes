class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});
        int ans = 1;
        maze[entrance[0]][entrance[1]] = '+';
        vector<int> dir = {0, 1, 0, -1, 0};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto [i, j] = q.front();
                q.pop();
                for(int d=0;d<4;d++){
                    int xi = i+dir[d], yi = j+dir[d+1];
                    if(min(xi, yi)>=0 && xi<maze.size() && yi<maze[0].size() && maze[xi][yi]=='.'){
                        if(min(xi, yi)==0 || yi==maze[0].size()-1 || xi==maze.size()-1) return ans;
                        maze[xi][yi] = '+';
                        q.push({xi, yi});
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};