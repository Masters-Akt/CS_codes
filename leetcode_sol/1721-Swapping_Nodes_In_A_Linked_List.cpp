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
    ListNode* swapNodes(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        ListNode* first = head;
        int i=1;
        while(i!=k){
            first = first->next;
            i++;
        }
        i = len-k;
        ListNode* second = head;
        while(i!=0){
            second = second->next;
            i--;
        }
        int tem = first->val;
        first->val = second->val;
        second->val = tem;
        return head;
    }
};