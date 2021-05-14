class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int c=0;
            int x1=queries[i][0];
            int y1=queries[i][1];
            for(int j=0;j<points.size();j++){
                int x2=points[j][0];
                int y2=points[j][1];
                if(sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) <= queries[i][2]) c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};