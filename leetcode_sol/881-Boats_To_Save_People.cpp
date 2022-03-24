class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people), end(people));
        int high = people.size()-1, low = 0;
        int ans = 0;
        while(low<=high){
            if(people[low]+people[high]<=limit) low++, high--;
            else high--;
            ans++;
        }
        return ans;
    }
};