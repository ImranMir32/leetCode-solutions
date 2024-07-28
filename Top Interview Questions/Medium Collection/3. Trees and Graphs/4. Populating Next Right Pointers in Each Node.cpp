/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
       if(root == nullptr) return nullptr;

        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int len = q.size();
            Node* prev = nullptr;

            for(int i = 0; i < len; i++){
                Node* current = q.front();
                q.pop();
                
                if(prev != nullptr){
                    prev->next = current;
                }
                
                if(current->left != nullptr){
                    q.push(current->left);
                }
                
                if(current->right != nullptr){
                    q.push(current->right);
                }

                prev = current;
            }
            prev->next = nullptr;
        }
        return root;
    }
};