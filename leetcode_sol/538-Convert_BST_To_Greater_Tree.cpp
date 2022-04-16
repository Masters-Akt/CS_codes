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
    void inorder(TreeNode* root, vector<int>& store){
        if(!root) return;
        inorder(root->left, store);
        store.push_back(root->val);
        inorder(root->right, store);
    }
    void solve(TreeNode*& root, unordered_map<int, int>& m){
        if(!root) return;
        root->val = m[root->val];
        solve(root->left, m);
        solve(root->right, m);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        vector<int> store;
        inorder(root, store);
        vector<int> prefix(store.size());
        reverse(store.begin(), store.end());
        for(int i=0;i<store.size();i++){
            if(i==0) prefix[i] = store[i];
            else prefix[i] = store[i]+prefix[i-1];
        }
        unordered_map<int, int> m;
        for(int i=0;i<store.size();i++) m[store[i]] = prefix[i];
        solve(root, m);
        return root;
    }
};