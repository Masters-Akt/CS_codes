class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arranged;
        for(int i=0;i<heights.size();i++) arranged.push_back(heights[i]);
        sort(arranged.begin(), arranged.end());
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=arranged[i]) c++;
        }
        return c;
    }
};