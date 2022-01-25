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
class FindElements {
private:
    TreeNode* myTree = NULL;
    void recover_tree(TreeNode* root){
        if(!root) return;
        if(root->left) root->left->val = 2*root->val+1;
        if(root->right) root->right->val = 2*root->val+2;
        recover_tree(root->left);
        recover_tree(root->right);
    }
    bool find_value(int target, TreeNode* root){
        if(!root) return false;
        if(root->val==target) return true;
        return find_value(target, root->left) || find_value(target, root->right);
    }
public:
    FindElements(TreeNode* root) {
        if(root){
            root->val = 0;
            recover_tree(root);
        }
        myTree = root;
    }
    
    bool find(int target) {
        return find_value(target, myTree);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */