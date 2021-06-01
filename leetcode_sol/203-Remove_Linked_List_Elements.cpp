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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->next==NULL){
            if(head->val==val){
                delete head;
                head=NULL;
            }
            return head;
        }
        ListNode* temp = head->next;
        ListNode* prev = head;
        while(temp!=NULL){
            if(temp->val==val){
                prev->next = temp->next;
                delete temp;
                temp=prev->next;
            }else{
                prev = temp;
                temp=temp->next;
            }
        }
        if(head->val==val){
            temp=head;
            head=head->next;
            delete temp;
        }
        return head;
    }
};

//Recursive Approach Method 2

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        head->next = removeElements(head->next, val);
        if(head->val==val) return head->next;
        return head;
    }
};