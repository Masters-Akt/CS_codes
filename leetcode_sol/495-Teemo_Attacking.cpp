class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int c = 0, end=-1;
        for(int i=0;i<timeSeries.size();i++){
            if(end>=timeSeries[i]){
                c+=(duration-end+timeSeries[i]-1);
            }else c+=duration;
            end = timeSeries[i]+duration-1;
        }
        return c;
    }
};