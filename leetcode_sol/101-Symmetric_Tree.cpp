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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        TreeNode *left, *right;
        queue<TreeNode*> check;
        check.push(root->left);
        check.push(root->right);
        while(!check.empty()){
            TreeNode *x = check.front();
            check.pop();
            TreeNode *y = check.front();
            check.pop();
            if((!x && y) || (x && !y)) return false;
            if(x && y){
                if(x->val != y->val) return false;
                check.push(x->left);
                check.push(y->right);
                check.push(x->right);
                check.push(y->left);
            }
        }
        return true;
    }
};