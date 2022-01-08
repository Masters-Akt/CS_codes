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
    int pairSum(ListNode* head) {
        int n = 0;
        ListNode* p1 = head;
        ListNode* p2 = head;
        while(p2!=NULL){
            p1=p1->next;
            p2=p2->next->next;
            n++;
        }
        vector<int> sum(n, 0);
        p2 = head;
        int i=0, j=n-1;
        while(p1!=NULL){
            sum[i++]+=p2->val;
            sum[j--]+=p1->val;
            p1=p1->next;
            p2=p2->next;
        }
        int ans = 0;
        for(int i=0;i<sum.size();i++) ans = max(ans, sum[i]);
        return ans;
    }
};