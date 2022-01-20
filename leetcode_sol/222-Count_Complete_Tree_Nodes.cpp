//TC = O((logN)^2) , SC = O(logN)
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
    int countNodes(TreeNode* root) {
        int lh = 0, rh = 0;
        TreeNode* temp = root;
        while(temp){
            lh++;
            temp = temp->left;
        }
        temp = root;
        while(temp){
            rh++;
            temp = temp->right;
        }
        if(lh!=rh) return 1+countNodes(root->left)+countNodes(root->right);
        return pow(2,lh)-1;
    }
};