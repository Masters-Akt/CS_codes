class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int rows=grid.size(), cols=grid[0].size();
        int minSteps = max(0,rows+cols-2), obstacles=minSteps-1, minStepsNextRound=minSteps;
        if(obstacles<=k) return minSteps; // take a shortcut if we can afford it
        vector<vector<int>> dirs = {{1,0},{0,1},{-1,0},{0,-1}};
        list<vector<int>> togo; togo.push_back({0,0,k}); // BFS: {row, col, remaining k}
        vector<int> visited(rows*cols, -1); // position -> k remaining
        visited[0]=k;
        int steps=0;
        while(togo.size()) {
            steps++;
			minSteps=minStepsNextRound;
            for(int sz=togo.size();sz>0;sz--) {
                int r=togo.front()[0], c=togo.front()[1], k=togo.front()[2];
                togo.pop_front();
                for(auto& d:dirs) {
                    int rr=r+d[0], cc=c+d[1];
                    if(rr<0 || rr>=rows || cc<0 || cc>=cols) continue;
                    int kk = k-grid[rr][cc];
                    if(visited[rr*cols+cc]>=kk) continue; // have been here passing less obstacles
                    // maybe we can take a shortcut and go straight to the goal
					// but jump only from the point closest to the target
                    int stepsToTarget = rows-rr-1+cols-cc-1;
                    if(stepsToTarget-1<=kk && stepsToTarget==minSteps-1) return steps+stepsToTarget;
                    togo.push_back({rr,cc,kk});
                    visited[rr*cols+cc]=kk;
					minStepsNextRound=min(minStepsNextRound,stepsToTarget);
                }
            }
        }
        return -1;
    }
};