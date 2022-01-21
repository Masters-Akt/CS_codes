//M1 - Recursion - TC=O(N), SC=O(N)
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
    void flatten(TreeNode* &root, TreeNode*& prev){
        if(!root) return;
        flatten(root->right, prev);
        flatten(root->left, prev);
        root->right = prev;
        root->left = NULL;
        prev = root;
    }
public:
    void flatten(TreeNode* root) {
        TreeNode* prev = NULL;
        flatten(root, prev);
    }
};

//M2 - Using Stack
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
    void flatten(TreeNode* root) {
        if(!root) return;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* cur = st.top();
            st.pop();
            if(cur->right) st.push(cur->right);
            if(cur->left) st.push(cur->left);
            if(!st.empty()) cur->right = st.top();
            cur->left = NULL;
        }
    }
};