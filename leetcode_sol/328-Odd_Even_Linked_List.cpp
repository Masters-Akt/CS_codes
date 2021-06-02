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

//Note: Same can be done using two different linked lists and connecting them

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = head;
        int len = 1;
        while(temp->next!=NULL){
            len++;
            temp = temp->next;
        }
        len/=2;
        ListNode* prev = head;
        ListNode* temp2 = head->next;
        while(len--){
            ListNode* newnode = new ListNode();
            newnode->next = NULL;
            newnode->val = temp2->val;
            temp->next = newnode;
            temp=temp->next;
            prev->next = temp2->next;
            delete temp2;
            prev = prev->next;
            temp2 = prev->next;
        }
        return head;
    }
};