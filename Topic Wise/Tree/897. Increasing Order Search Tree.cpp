// Approach : 1
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
class Solution {
public:
    TreeNode* newRoot = nullptr;
    TreeNode* curr = nullptr;

    void inorderTraversal(TreeNode* root){
        if(root == nullptr) return;
        inorderTraversal(root->left);
        if(newRoot == nullptr){
            newRoot = new TreeNode(root->val);
            curr = newRoot;
        }
        else{
            curr->right = new TreeNode(root->val);
            curr = curr->right;
        }
        inorderTraversal(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorderTraversal(root);
        return newRoot;
    }
};

//-----------------------------------------------------------------------------------------------------------------
//Appeoach : 2
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
class Solution {
public:
    TreeNode* newRoot = nullptr;
    TreeNode* createBST(TreeNode* root, TreeNode* node){
        if(root == nullptr) return new TreeNode(node->val);
        root->right = createBST(root->right, node);
        return root;
    }

    void inorderTraversal(TreeNode* root){
        if(root == nullptr) return;
        inorderTraversal(root->left);
        newRoot = createBST(newRoot, root);
        inorderTraversal(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorderTraversal(root);
        return newRoot;
    }
};