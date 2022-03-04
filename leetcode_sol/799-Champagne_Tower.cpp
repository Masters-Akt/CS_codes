class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> store(101);
        store[0] = poured;
        for(int i=1;i<=query_row;i++){
            for(int j=i;j>=0;j--){
                store[j] = max(0.0, (store[j]-1)/2);
                store[j+1]+=store[j];
            }
        }
        return min(1.0, store[query_glass]);
    }
};