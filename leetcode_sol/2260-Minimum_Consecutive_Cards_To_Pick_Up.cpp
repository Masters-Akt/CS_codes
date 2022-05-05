class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> m;
        int ans = INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(m[cards[i]]){
                ans = min(ans, i+1-(m[cards[i]])+1);
                m[cards[i]] = i+1;
            }else m[cards[i]] = i+1;
        }
        return ans==INT_MAX?-1:ans;
    }
};