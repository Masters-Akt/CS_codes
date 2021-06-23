class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int c = 0;
        for(int i=1;i<points.size();i++){
            c+=(max(abs(points[i][0]-points[i-1][0]), abs(points[i][1]-points[i-1][1])));
        }
        return c;
    }
};