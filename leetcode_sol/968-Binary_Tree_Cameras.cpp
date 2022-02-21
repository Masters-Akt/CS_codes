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
    int solve(TreeNode* root, int& ans){
        if(!root) return 1;
        int l = solve(root->left, ans);
        int r = solve(root->right, ans);
        if(l==0 || r==0){
            ans++;
            return 2;
        }
        if(l==2 || r==2){
            return 1;
        }
        return 0;
    }
public:
    int minCameraCover(TreeNode* root) {
        //0 - there is no camera at this node, and it's not monitored by camera at either of its children, which means neither of child nodes has camera
        //1 - there is no camera at this node; however, this node is monitored by at least 1 of its children, which means at least 1 of its children has camera
        //2 - there is a camera at this node
        int ans = 0;
        if(solve(root, ans)==0) ans++;
        return ans;
    }
};