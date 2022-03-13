class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> ans;
        vector<int> store;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key) store.push_back(i);
        }
        for(int i=0;i<store.size();i++){
            int x = store[i]-k;
            if(x<0) x = 0;
            while(x<=store[i]){
                ans.insert(x);
                x++;
            }
            x = store[i]+k;
            if(x>nums.size()-1) x = nums.size()-1;
            while(x>=store[i]){
                ans.insert(x);
                x--;
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};