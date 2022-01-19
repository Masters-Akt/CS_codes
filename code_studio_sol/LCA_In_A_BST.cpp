//TLE - Not Optimal - 9 out of 10 TC passed
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(!root || root==P || root==Q) return root;
    TreeNode<int>* left = LCAinaBST(root->left, P, Q);
    TreeNode<int>* right = LCAinaBST(root->right, P, Q);
    if(!left) return right;
    if(!right) return left;
    return root;
}
