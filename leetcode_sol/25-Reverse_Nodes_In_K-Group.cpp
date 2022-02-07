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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head;
        int c = 0;
        while(cur && c!=k){
            cur = cur->next;
            c++;
        }
        if(c==k){
            cur = reverseKGroup(cur, k);
            while(c--){
                ListNode* temp = head->next;
                head->next = cur;
                cur = head;
                head = temp;
            }
            head = cur;
        }
        return head;
    }
};