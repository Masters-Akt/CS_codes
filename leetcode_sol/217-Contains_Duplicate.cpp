//M1
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) return true;
        }
        return false;
    }
};

//M2
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()) return true;
            else m[nums[i]] = 1;
        }
        return false;
    }
};

//M3
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]) return true;
            m[nums[i]] = true;
        }
        return false;
    }
};