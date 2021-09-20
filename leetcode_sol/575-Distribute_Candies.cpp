class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(int i=0;i<candyType.size();i++){
            s.insert(candyType[i]);
        }
        if(s.size()<=candyType.size()/2) return s.size();
        return candyType.size()/2;
    }
};