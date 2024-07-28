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
    vector<int>ans;
    void inorderTraversalHelper(TreeNode* root){
        if(root == nullptr) return;
        inorderTraversalHelper(root->left);
        ans.push_back(root->val);
        inorderTraversalHelper(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        
        inorderTraversalHelper(root);
        return ans;
    }
};