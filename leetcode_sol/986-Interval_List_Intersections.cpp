class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int i=0, j=0;
        while(i<firstList.size() && j<secondList.size()){
            int l = max(firstList[i][0], secondList[j][0]);
            int h = min(firstList[i][1], secondList[j][1]);
            if(l<=h) ans.push_back({l,h});
            if(firstList[i][1] < secondList[j][1]) i++;
            else j++;
        }
        return ans;
    }
};