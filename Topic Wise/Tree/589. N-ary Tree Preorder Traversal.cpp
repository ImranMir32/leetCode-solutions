//Approach : 1
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
    vector<int>ans;
    vector<int> preorder(Node* root) {
        if(root == nullptr) return {};
        
        vector<Node*> node = root->children;
        ans.push_back(root->val);
        if(node.size() == 0) return ans;
        for(int i=0; i<node.size(); i++){
            preorder(node[i]);
        }
        return ans;
    }
};

//  Approach : 2
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
    vector<int> preorder(Node* root) {
        if(root == nullptr) return {};
        vector<int>ans;
        stack<Node*>st;
        st.push(root);
        
        while(!st.empty()){
            Node* node = st.top();
            st.pop();
            ans.push_back(node->val);
            for(int i=node->children.size()-1; i>=0; i--){
                st.push(node->children[i]);
            }
        }
        return ans;
    }
};