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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        unordered_map<int, int> m;
        ListNode* temp = head;
        ListNode* cur = new ListNode(0);
        ListNode* temp1 = cur;
        while(temp){
            m[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        while(temp){
            if(m[temp->val]==1){
                cur->next = temp;
                cur = cur->next;
            }
            temp = temp->next;
        }
        cur->next = NULL;
        return temp1->next;
    }
};