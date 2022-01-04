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
    void inorder(TreeNode* root, vector<TreeNode*>& inorder_store){
        if(root==NULL) return;
        inorder(root->left, inorder_store);
        inorder_store.push_back(root);
        inorder(root->right, inorder_store);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> inorder_store;
        inorder(root, inorder_store);
        if(inorder_store.size()==0) return NULL;
        for(int i=1;i<inorder_store.size();i++){
            inorder_store[i-1]->right = inorder_store[i];
            inorder_store[i-1]->left = NULL;
        }
        inorder_store[inorder_store.size()-1]->left = NULL;
        inorder_store[inorder_store.size()-1]->right = NULL;
        return inorder_store[0];
    }
};