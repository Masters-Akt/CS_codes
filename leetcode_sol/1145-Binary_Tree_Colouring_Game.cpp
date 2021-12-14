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
    void find_element(TreeNode* root, TreeNode*& ele_x, int x){
        if(root->val==x){
            ele_x = root;
            return;
        }
        if(root->left) find_element(root->left, ele_x, x);
        if(root->right) find_element(root->right, ele_x, x);
    }
    void count_ele(TreeNode* root, int& p){
        if(root==NULL) return;
        p++;
        count_ele(root->left, p);
        count_ele(root->right, p);
    }
public:
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        TreeNode* ele_x;
        find_element(root, ele_x, x);
        int l=0, r=0;
        count_ele(ele_x->left, l);
        count_ele(ele_x->right, r);
        return max({l, r, n-l-r-1})>n/2;
    }
};