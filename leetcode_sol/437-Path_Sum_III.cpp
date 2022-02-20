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
    int pathSumFromRoot(TreeNode* root, int sum){
        if(!root) return 0;
        return (root->val==sum)+pathSumFromRoot(root->left, sum-root->val)+pathSumFromRoot(root->right, sum-root->val);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        return pathSumFromRoot(root, targetSum)+pathSum(root->left, targetSum)+pathSum(root->right, targetSum);
    }
};