// approach : 1
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
    vector<int> postorder(Node* root) {
        if (root == nullptr) return {};
        
        vector<Node*>child = root->children;
        if(child.size() == 0) {
            ans.push_back(root->val);
            return ans;
        }
        for(int i=0; i<child.size(); i++){
            postorder(child[i]);
        }
        ans.push_back(root->val);
        return ans;
    }
};

// ---------------------------------------------------------------------------------------------------------

//approach : 2
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
    void postorderHelper(Node* root, vector<int>& ans) {
        if (root == nullptr) return;

        for (Node* child : root->children) {
            postorderHelper(child, ans);
        }
        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> ans;
        postorderHelper(root, ans);
        return ans;
    }
};
