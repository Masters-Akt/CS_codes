class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int, int>> bt(boxTypes.size());
        for(int i=0;i<boxTypes.size();i++){
            bt[i].first = boxTypes[i][1];
            bt[i].second = boxTypes[i][0];
        }
        sort(bt.begin(), bt.end());
        int i = bt.size()-1, ans = 0;
        while(truckSize>0 && i>=0){
            if(truckSize>=bt[i].second){
                ans+=bt[i].first*bt[i].second;
                truckSize-=bt[i].second;
            }else{
                ans+=bt[i].first*truckSize;
                break;
            }
            i--;
        }
        return ans;
    }
};