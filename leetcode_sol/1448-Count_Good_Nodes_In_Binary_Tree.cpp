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
    void solve(TreeNode*& root, int& ans, int val){
        if(!root) return;
        if(root->val>=val){
            ans++;
            solve(root->left, ans, root->val);
            solve(root->right, ans, root->val);
        }else{
            solve(root->left, ans, val);
            solve(root->right, ans, val);
        }
        
    }
public:
    int goodNodes(TreeNode* root) {
        int ans = 0;
        solve(root, ans, INT_MIN);
        return ans;
    }
};