//Kumar Ankit
#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    int height(Node* node){
        if(node == NULL) return 0;
        else{
            int lheight = height(node->left);
            int rheight = height(node->right);
            if(lheight>rheight) return lheight+1;
            else return rheight+1;
        }
    }
    
    void printLevel(Node* root, int level){
        if(root == NULL) return;
        if(level == 1) cout<<root->data<<" ";
        else if(level>1){
            printLevel(root->left, level-1);
            printLevel(root->right, level-1);
        }
    }

    void levelOrder(Node * root) {
        int h = height(root);
        for(int i=1;i<=h;i++){
            printLevel(root, i);
        }
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.levelOrder(root);
    return 0;
}
