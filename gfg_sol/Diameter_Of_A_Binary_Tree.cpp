//Problem: https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
class Solution {
  private:
    int height(Node* root, int& ans){
        if(!root) return 0;
        int lh = height(root->left, ans);
        int rh = height(root->right, ans);
        ans = max(ans, 1+lh+rh);
        return 1+max(lh, rh);
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int ans = 0;
        height(root, ans);
        return ans;
    }
};