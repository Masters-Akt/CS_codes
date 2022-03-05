class Solution {
private:
    static bool comp(pair<int, int>& a, pair<int, int>& b){
        return a.first<b.first;
    }
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> ans;
        vector<pair<int, int>> store;
        for(int i=0;i<nums.size();i++){
            string n = "";
            int temp = nums[i];
            if(temp==0) n+=to_string(mapping[nums[i]]);
            else{
                while(temp>0){
                    n+=(to_string(mapping[temp%10]));
                    temp/=10;
                }
                reverse(n.begin(), n.end());    
            }
            store.push_back({stoi(n), nums[i]});
        }
        sort(store.begin(), store.end(), comp);
        for(auto i=store.begin();i!=store.end();i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};