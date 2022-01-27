class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max = 0, mask = 0;
        for(int i = 31; i >= 0; i--){
            mask = mask | (1 << i);
            set<int> s;
            for(int num : nums){
                s.insert(num & mask);
            }
            int tmp = max | (1 << i);
            for(int prefix : s){
                if(s.find(tmp ^ prefix)!=s.end()) {
                    max = tmp;
                    break;
                }
            }
        }
        return max;
    }
};