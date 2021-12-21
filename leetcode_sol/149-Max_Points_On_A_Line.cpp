class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size(), c = 0;
        for(int i=0;i<n;i++){
            map<pair<int, int>, int> slope;
            int dup = 0;
            for(int j=i;j<n;j++){
                int dy = points[i][1]-points[j][1];
                int dx = points[i][0]-points[j][0];
                if(dy==0 && dx==0) dup++;
                else{
                    int g = __gcd(dx, dy);
                    dy/=g, dx/=g;
                    slope[{dy, dx}]++;
                }
            }
            c = max(c, dup);
            for(auto x: slope){
                c = max(c, x.second+dup);
            }
        }
        return c;
    }
};