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
private:
    TreeNode* solve(TreeNode*& root, int low, int high, bool delCurr){
        if(!root) return root;
        root->left = solve(root->left, low, high, false);
        root->right = solve(root->right, low, high, false);
        if(root->val>=low && root->val<=high) return root;
        TreeNode* ret;
        if(root->val<low) ret = root->right;
        else ret = root->left;
        if(!delCurr) delete(root);
        return ret;
    }
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return solve(root, low, high, true);
    }
};