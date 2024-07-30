/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root == nullptr) return 0;
        queue<Node*>q;
        q.push(root);
        int level = 0;

        while(!q.empty()){
            int len = q.size();
            for(int i=0; i<len; i++){
                Node* node = q.front();
                q.pop();
                vector<Node*>children =  node->children;
                for(int j=0; j<children.size(); j++){
                    if(children[j] != nullptr) q.push(children[j]);
                }
            }
            level++;
        }

        return level;
    }
};