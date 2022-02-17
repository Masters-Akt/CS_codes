class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        int x1 = startPos[1], x2 = homePos[1], y1 = startPos[0], y2 = homePos[0], res = -colCosts[x1]-rowCosts[y1];
        if(x1>x2) swap(x1, x2);
        if(y1>y2) swap(y1, y2);
        while(x1<=x2) res+=colCosts[x1++];
        while(y1<=y2) res+=rowCosts[y1++];
        return res;
    }
};
