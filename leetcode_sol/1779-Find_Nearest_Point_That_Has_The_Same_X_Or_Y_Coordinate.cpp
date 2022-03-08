class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int position = -1, ans = INT_MAX;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
                int distance = abs(x-points[i][0])+abs(y-points[i][1]);
                if(distance<ans){
                    ans = distance;
                    position = i;
                }
            }
        }
        return position;
    }
};