//Partially Accepted - 10 out of 11 TC passed
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<map>
TreeNode<int> *buildTree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &inMap){
    if(preStart>preEnd || inStart>inEnd) return NULL;
    TreeNode<int> *root = new TreeNode<int>(preorder[preStart]);
    int inRoot = inMap[root->data];
    int numsLeft = inRoot-inStart;
    root->left = buildTree(preorder, preStart+1, preStart+numsLeft, inorder, inStart, inRoot-1, inMap);
    root->right = buildTree(preorder, preStart+numsLeft+1, preEnd, inorder, inRoot+1, inEnd, inMap);
    return root;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    map<int, int> inMap;
    for(int i=0;i<inorder.size();i++) inMap[inorder[i]] = i;
    TreeNode<int> *root = buildTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, inMap);
    return root;
}