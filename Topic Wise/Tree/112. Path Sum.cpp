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
    bool flag = false;
    void hasPathSumHelper(TreeNode* root, int targetsum, int sum){
        if(root->left == nullptr && root->right == nullptr){
            if(sum + root->val == targetsum) flag = true;
            return;
        }
        if(root->left) hasPathSumHelper(root->left, targetsum, sum+root->val);
        if(root->right) hasPathSumHelper(root->right, targetsum, sum+root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        
        hasPathSumHelper(root, targetSum, 0);
        return flag;
    }
};