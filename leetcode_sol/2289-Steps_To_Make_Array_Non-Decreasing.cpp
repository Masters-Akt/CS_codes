class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int total_steps = 0;
        stack<pair<int, int>> st;
        int n = nums.size();
        st.push({nums[n-1], 0});
        for(int i=n-2;i>=0;i--){
            int max_steps_till_now = 0;
            while(!st.empty() && nums[i]>st.top().first){
                max_steps_till_now = max(max_steps_till_now+1, st.top().second);
                st.pop();
            }
            total_steps = max(total_steps, max_steps_till_now);
            st.push({nums[i], max_steps_till_now});
        }
        return total_steps;
    }
};