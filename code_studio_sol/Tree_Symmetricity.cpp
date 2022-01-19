/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool solve(BinaryTreeNode<int>* l, BinaryTreeNode<int>* r){
    if(!l || !r) return l==r;
    if(l->data != r->data) return false;
    return solve(l->left, r->right) && solve(l->right, r->left);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    return !root || solve(root->left, root->right);
}