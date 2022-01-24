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
    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root || root==p || root==q) return root;
        TreeNode* left = lca(root->left, p, q);
        TreeNode* right = lca(root->right, p, q);
        if(!left) return right;
        if(!right) return left;
        return root;
    }
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return root;
        TreeNode* leftmost = NULL;
        TreeNode* rightmost = NULL;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* x = q.front();
                q.pop();
                if(i==0) leftmost = x;
                if(i==s-1) rightmost = x;
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
        }
        return lca(root, leftmost, rightmost);
    }
};