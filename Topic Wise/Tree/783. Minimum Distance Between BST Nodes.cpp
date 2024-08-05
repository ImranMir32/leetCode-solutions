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
    int ans = INT_MAX;
    int prev_val = INT_MAX;
    void inorder(TreeNode* root){
        if(root == nullptr) return;
        inorder(root->right);

        if(ans > prev_val - root->val){
            ans = prev_val - root->val;
        }
        prev_val = root->val;
        inorder(root->left);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};