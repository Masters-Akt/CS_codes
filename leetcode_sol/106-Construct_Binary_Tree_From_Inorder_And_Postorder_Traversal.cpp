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
    TreeNode* buildTree(vector<int>& inorder, int is, int ie, vector<int>& postorder, int ps, int pe, map<int, int>& hm){
        if(is>ie || ps>pe) return NULL;
        TreeNode* root = new TreeNode(postorder[pe]);
        int inRoot = hm[postorder[pe]];
        int numsLeft = inRoot-is;
        root->left = buildTree(inorder, is, inRoot-1, postorder, ps, ps+numsLeft-1, hm);
        root->right = buildTree(inorder, inRoot+1, ie, postorder, ps+numsLeft, pe-1, hm);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int> hm;
        for(int i=0;i<inorder.size();i++) hm[inorder[i]] = i;
        return buildTree(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, hm);
    }
};