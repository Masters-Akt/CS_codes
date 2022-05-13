/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*> q;
        q.push(root);
        bool level = true;
        while(!q.empty()){
            int s = q.size();
            int val = -1;
            while(s--){
                TreeNode* x = q.front();
                q.pop();
                if(level){
                    if(x->val%2==0) return false;
                    if(val==-1) val = x->val;
                    else{
                        if(x->val<=val) return false;
                        val = x->val;
                    }
                }else{
                    if(x->val%2) return false;
                    if(val==-1) val = x->val;
                    else{
                        if(x->val>=val) return false;
                        val = x->val;
                    }
                }
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
            level = !level;
        }
        return true;
    }
};