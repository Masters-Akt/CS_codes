/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    if(!root) return new TreeNode<int>(val);
    if(root->val<val) root->right = insertionInBST(root->right, val);
    else root->left = insertionInBST(root->left, val);
    return root;
}