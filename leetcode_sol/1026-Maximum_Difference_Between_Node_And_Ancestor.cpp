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
    int solve(TreeNode* root, int tempMax, int tempMin){
        if(root==NULL) return tempMax-tempMin;
        tempMax = max(tempMax, root->val), tempMin = min(tempMin, root->val);
        int l = solve(root->left, tempMax, tempMin);
        int r = solve(root->right, tempMax, tempMin);
        return max(l, r);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        return solve(root, root->val, root->val);
    }
};