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
    int getDepth(TreeNode* root, int x, TreeNode*& parent) {
        if (root == nullptr) return -1;
        if ((root->left && root->left->val == x) || (root->right && root->right->val == x)) {
            parent = root;
            return 1;
        }

        int left = getDepth(root->left, x, parent);
        if (left != -1) return left + 1;

        int right = getDepth(root->right, x, parent);
        if (right != -1) return right + 1;

        return -1;
    }

    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* x_parent = nullptr;
        TreeNode* y_parent = nullptr;

        int x_depth = getDepth(root, x, x_parent);
        int y_depth = getDepth(root, y, y_parent);

        // Check if x and y are at the same depth but have different parents
        return x_depth == y_depth && x_parent != y_parent;
    }
};
