class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int car[1001] = {0};
        for(int i=0;i<trips.size();i++){
            car[trips[i][1]]+=trips[i][0];
            car[trips[i][2]]-=trips[i][0];
        }
        for(int i=0;i<1001;i++){
            capacity-=car[i];
            if(capacity<0) return false;
        }
        return true;
    }
};