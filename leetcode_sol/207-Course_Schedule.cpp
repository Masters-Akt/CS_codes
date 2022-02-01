class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> no_of_prereq(numCourses, 0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            no_of_prereq[prerequisites[i][0]]++;
        }
        queue<int> q;
        for(int i=0;i<no_of_prereq.size();i++){
            if(!no_of_prereq[i]) q.push(i);
        }
        int count_completed = 0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            count_completed++;
            for(int i=0;i<adj[x].size();i++){
                no_of_prereq[adj[x][i]]--;
                if(!no_of_prereq[adj[x][i]]) q.push(adj[x][i]);
            }
        }
        return count_completed==numCourses;
    }
};