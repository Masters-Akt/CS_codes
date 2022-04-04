//Method 1
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

//Method 2 using two pointers
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=1;i<k;i++) fast = fast->next;
        ListNode* first = fast;
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        swap(first->val, slow->val);
        return head;
    }
};