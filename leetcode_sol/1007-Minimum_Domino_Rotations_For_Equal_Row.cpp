class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> t(6, 0), b(6, 0), same(6, 0);
        for(int i=0;i<tops.size();i++){
            t[tops[i]-1]++;
            b[bottoms[i]-1]++;
            if(tops[i]==bottoms[i]) same[tops[i]-1]++;
        }
        for(int i=0;i<6;i++){
            if(t[i]+b[i]-same[i]==tops.size()) return tops.size()-max(t[i], b[i]);
        }
        return -1;
    }
};