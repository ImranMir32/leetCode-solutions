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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr) return sum;

        if(root->left != nullptr){
            if(root->left->left == nullptr && root->left->right == nullptr){
                sum += root->left->val;
            }
            else sumOfLeftLeaves(root->left);
        }
        if(root->right != nullptr) sumOfLeftLeaves(root->right);

        return sum;
    }
};