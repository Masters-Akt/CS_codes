//Method 1
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
    void solve(TreeNode* root, int& ans){
        if(root==NULL) return;
        if(root->val%2==0){
            if(root->left){
                if(root->left->left) ans+=root->left->left->val;
                if(root->left->right) ans+=root->left->right->val;
            }
            if(root->right){
                if(root->right->left) ans+=root->right->left->val;
                if(root->right->right) ans+=root->right->right->val;
            }
        }
        solve(root->left, ans);
        solve(root->right, ans);
    }
public:
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL) return 0;
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};

//Method 2
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
    int sumEvenGrandparent(TreeNode* root, int parent=-1, int grandparent=-1) {
        if(!root) return 0;
        int ans = 0;
        ans+=sumEvenGrandparent(root->left, root->val, parent);
        ans+=sumEvenGrandparent(root->right, root->val, parent);
        if(grandparent!=-1 && !(grandparent&1)) ans+=root->val;
        return ans;
    }
};