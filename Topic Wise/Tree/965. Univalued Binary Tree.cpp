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
    bool isMatch(TreeNode* root, int& value){
        if(root == nullptr) return true;
        
        if(root->val != value) return false;
        return (isMatch(root->left, value) && isMatch(root->right, value));
    }
    bool isUnivalTree(TreeNode* root) {
        int value = root->val;
        return isMatch(root, value);
    }
};