class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int> st;
        vector<int> ans(heights.size());
        for(int i=heights.size()-1;i>=0;i--){
            int removed = 0;
            while(!st.empty() && st.top()<heights[i]){
                st.pop();
                removed++;
            }
            ans[i] = removed+!st.empty();
            st.push(heights[i]);
        }  
        return ans;
    }
};