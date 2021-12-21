class Solution {
private:
    void solve(vector<vector<int>>& rooms, vector<bool>& visited, int r){
        for(int i=0;i<rooms[r].size();i++){
            if(!visited[rooms[r][i]]){
                visited[rooms[r][i]] = true;
                solve(rooms, visited, rooms[r][i]);    
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        visited[0] = true;
        solve(rooms, visited, 0);
        for(int i=0;i<visited.size();i++) if(!visited[i]) return false;
        return true;
    }
};