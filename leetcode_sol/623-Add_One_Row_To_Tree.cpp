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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*> q;
        if(depth==1){
            TreeNode* x = new TreeNode(val);
            x->left = root;
            return x;
        }
        q.push(root);
        while(!q.empty()){
            depth--;
            if(depth==0) return root;
            int s = q.size();
            while(s--){
                TreeNode* x = q.front();
                q.pop();
                if(depth==1){
                    TreeNode* l = x->left;
                    TreeNode* r = x->right;
                    x->left = new TreeNode(val);
                    x->right = new TreeNode(val);
                    x->left->left = l;
                    x->right->right = r;
                }else{
                    if(x->left) q.push(x->left);
                    if(x->right) q.push(x->right);
                }
            }
        }
        return root;
    }
};