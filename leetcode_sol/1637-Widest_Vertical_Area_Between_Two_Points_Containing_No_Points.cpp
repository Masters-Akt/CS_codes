class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int width[points.size()];
        for(int i=0;i<points.size();i++){
            width[i]=points[i][0];
        }
        sort(width,width+points.size());
        int m=0;
        for(int i=1;i<points.size();i++){
            m=max(m,width[i]-width[i-1]);
        }
        return m;
    }
};