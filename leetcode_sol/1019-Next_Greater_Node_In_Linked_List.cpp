/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<int> st;
        while(head){
            while(st.size() && ans[st.top()]<head->val){
                ans[st.top()] = head->val;
                st.pop();
            }
            st.push(ans.size());ans.push_back(head->val);
            head = head->next;
        }
        while(!st.empty()){
            int x = st.top();
            st.pop();
            ans[x] = 0;
        }
        return ans;
    }
};