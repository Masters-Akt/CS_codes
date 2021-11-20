//Method 1 - TC = O(N2) SC = O(1) - Brute Force
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int x: nums){
            int occ = 0;
            for(int y: nums){
                occ+=(x==y);
            }
            if(occ==1) return x;
        }
        return -1;
    }
};

//Method 2 - Hashmap - TC = O(N) SC = O(N)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x: nums) m[x]++;
        for(auto [x, y]: m) if(y==1) return x;
        return -1;
    }
};

//Method 3 - Hashset - TC = O(N) SC = O(N)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto x: nums){
            if(s.count(x)) s.erase(x);
            else s.insert(x);
        }
        return *begin(s);
    }
};

//Method 4 - XOR - TC = O(N) SC = O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(auto x: nums) ans^=x; //a^a=0
        return ans;
    }
};

//Method 5 - Linear Search - TC = O(N) SC = O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i+=2) if(nums[i]!=nums[i+1]) return nums[i];
        return nums.back();
    }
};