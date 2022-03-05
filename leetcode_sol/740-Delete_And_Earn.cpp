class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> store(10001, 0);
        for(int x: nums) store[x]+=x;
        for(int i=2;i<10001;i++){
            store[i] = max(store[i-1], store[i-2]+store[i]);
        }
        return store[10000];
    }
};