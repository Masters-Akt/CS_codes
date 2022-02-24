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
private:
    ListNode* merge(ListNode* left, ListNode* right){
        ListNode* cur = NULL;
        if(!left) return right;
        if(!right) return left;
        if(left->val < right->val){
            cur = left;
            cur->next = merge(left->next, right);
        }else{
            cur = right;
            cur->next = merge(left, right->next);
        }
        return cur;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(second);
        return merge(l1, l2);
    }
};