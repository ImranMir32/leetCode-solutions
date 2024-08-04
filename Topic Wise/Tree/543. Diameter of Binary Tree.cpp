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
    int height(TreeNode* root){
        if(!root) return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
    int ans = 0;
    int helper(TreeNode* root){
        if(!root) return 0;

        int left = height(root->left);
        int right = height(root->right);
        ans = max(ans, left+right);
        helper(root->left);
        helper(root->right);

        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return helper(root);
    }
};