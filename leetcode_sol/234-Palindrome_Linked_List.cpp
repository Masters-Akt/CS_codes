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
    ListNode* reverse_ll(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* n = head->next;
            head->next = prev;
            prev = head;
            head = n;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast) slow = slow->next;
        slow = reverse_ll(slow);
        fast = head;
        while(slow){
            if(fast->val!=slow->val) return false;
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }
};