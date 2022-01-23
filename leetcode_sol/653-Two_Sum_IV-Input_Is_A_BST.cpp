//Most Optimized, TC = O(N), SC = O(H)x2
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
class BSTIterator{
private:
    stack<TreeNode*> myStack;
    bool reverse = true; //reverse->true=before, reverse->false=next
    
    void pushAll(TreeNode* node){
        while(node){
            myStack.push(node);
            if(reverse) node = node->right;
            else node = node->left;
        }
    }
public:
    BSTIterator(TreeNode* root, bool isReverse){
        reverse = isReverse;
        pushAll(root);
    }
    bool hasNext(){
        return !myStack.empty();
    }
    int next(){
        TreeNode* temp = myStack.top();
        myStack.pop();
        if(reverse) pushAll(temp->left);
        else pushAll(temp->right);
        return temp->val;
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTIterator l(root, false); //next
        BSTIterator r(root, true); //before
        int i = l.next(), j=r.next();
        while(i<j){
            if(i+j==k) return true;
            else if(i+j<k) i = l.next();
            else j = r.next();
        }
        return false;
    }
};