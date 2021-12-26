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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> st;
        int sum = 0;
        ListNode* ans = NULL;
        unordered_map<int, int> m; //storing possible sum
        m[0] = 1;
        while(temp){
            if(temp->val==0){ //ignorimg 0 values
                temp = temp->next;
                continue;
            }
            if(!st.empty()){
                int tempsum = sum+temp->val;
                if(m[tempsum]==1){ //if already found in map
                    while(sum!=tempsum && !st.empty()){ //keep popping and checking
                        m[sum] = 0; //removing not useful value
                        sum-=(st.top()->val);
                        st.pop();
                    }
                }else{
                    sum = tempsum; //update sum
                    m[sum] = 1; //enter into map
                    st.top()->next = temp; 
                    st.push(temp); //store in stack
                }
            }else{
                st.push(temp); //store it
                sum+=temp->val; //update sum
                m[sum] = 1; //add in map
                ans = temp;
            }
            temp = temp->next;
        }
        if(!st.empty()) st.top()->next = NULL; 
        else ans = NULL;
        return ans;
    }
};