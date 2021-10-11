//M-1
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

//M-2
class Solution {
public:
    static bool myfunc(vector<int>& a, vector<int>& b){
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), myfunc);
        int ans = 0;
        for(auto box: boxTypes){
            int temp = min(box[0], truckSize);
            ans+=box[1]*temp;
            truckSize-=temp;
            if(!truckSize) break;
        }
        return ans;
    }
};