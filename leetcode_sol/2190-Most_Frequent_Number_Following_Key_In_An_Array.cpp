class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int, int> m;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key) m[nums[i+1]]++;
        }
        int l = 0, ans = -1;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>l){
                l = i->second;
                ans = i->first;
            }
        }
        return ans;
    }
};