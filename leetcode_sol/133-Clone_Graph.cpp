/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    unordered_map<Node*, Node*> copies;
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        Node* copy = new Node(node->val, {});
        copies[node] = copy;
        queue<Node*> q;
        q.push(node);
        while(!q.empty()){
            Node* x = q.front();
            q.pop();
            for(Node* y : x->neighbors){
                if(copies.find(y)==copies.end()){
                    copies[y] = new Node(y->val, {});
                    q.push(y);
                }
                copies[x]->neighbors.push_back(copies[y]);
            }
        }
        return copy;
    }
};