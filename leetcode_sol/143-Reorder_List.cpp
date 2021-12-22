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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast) slow = slow->next;
        stack<ListNode*> st;
        while(slow!=NULL){
            st.push(slow);
            slow = slow->next;
        }
        slow = head;
        while(!st.empty()){
            ListNode* temp = slow->next;
            ListNode* x = st.top();
            st.pop();
            slow->next = x;
            x->next = temp;
            slow = temp;
        }
        slow->next = NULL;
    }
};