/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    void solve(TreeNode*& cloned, TreeNode*& target, TreeNode*& x){
        if(x!=NULL) return;
        if(cloned->val==target->val){
            x = cloned;
            return;
        }
        if(cloned->left) solve(cloned->left, target, x);
        if(cloned->right) solve(cloned->right, target, x);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* x = NULL;
        solve(cloned, target, x);
        return x;
    }
};