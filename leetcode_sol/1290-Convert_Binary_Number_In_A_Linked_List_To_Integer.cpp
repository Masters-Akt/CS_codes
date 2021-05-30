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
    int getDecimalValue(ListNode* head) {
        int len=0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int d=0;
        len--;
        while(head!=NULL){
            if(head->val==1){
                d+=pow(2,len);
            }
            len--;
            head=head->next;
        }
        return d;
    }
};