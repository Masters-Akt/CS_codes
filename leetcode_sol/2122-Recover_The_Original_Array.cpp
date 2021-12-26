class Solution {
private:
    bool checkPossible(multiset<int> ms, int k, vector<int>& ans){
        while(!ms.empty()){
            int ele = *ms.begin();
            int high_ele = 2*k+ele;
            if(ms.find(high_ele)==ms.end()) return false;
            //Erase iterators and not elements as there can be multiple occurences in miltiset
            ms.erase(ms.begin());
            auto it = ms.find(high_ele);
            ans.push_back(ele+k);
            ms.erase(it);
        }
        return true;
    }
public:
    vector<int> recoverArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        multiset<int> ms(nums.begin(), nums.end());
        int n = nums.size(), lowest = nums[0];
        for(int i=1;i<n;i++){
            vector<int> ans;
            int highest = nums[i];
            if((highest-lowest)%2==0){
                int k = (highest-lowest)/2;
                if(k && checkPossible(ms, k, ans)) return ans;
            }
        }
        return {};
    }
};