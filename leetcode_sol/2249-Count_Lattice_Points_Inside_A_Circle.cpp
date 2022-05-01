class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int, int>> s;
        for(int i=0;i<circles.size();i++){
            int r = circles[i][2];
            for(int j=-r;j<=r;j++){
                for(int k=-r;k<=r;k++){
                    if(r*r>=j*j+k*k) s.insert({j+circles[i][0], k+circles[i][1]});
                }
            }
        }
        return s.size();
    }
};