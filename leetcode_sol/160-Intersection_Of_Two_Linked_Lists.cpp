/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp_a = headA;
        ListNode* temp_b = headB;
        while(temp_a!=temp_b){
            temp_a = (temp_a!=NULL) ? temp_a->next : headB;
            temp_b = (temp_b!=NULL) ? temp_b->next : headA;
        }
        return temp_a;
    }
};