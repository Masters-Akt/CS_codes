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
    void solve(TreeNode* root, int& ans, bool goingLeft, int curr){
        if(!root) return;
        ans = max(ans, curr);
        if(goingLeft){
            solve(root->left, ans, !goingLeft, curr+1);
            solve(root->right, ans, goingLeft, 1);
        }else{
            solve(root->right, ans, !goingLeft, curr+1);
            solve(root->left, ans, goingLeft, 1);
        }
    }
public:
    int longestZigZag(TreeNode* root) {
        if(root==NULL) return 0;
        int ans = 0;
        solve(root, ans, true, 0);
        solve(root, ans, false, 0);
        return ans;
    }
};