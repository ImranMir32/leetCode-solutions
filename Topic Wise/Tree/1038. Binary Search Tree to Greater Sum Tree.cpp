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

    void convertGST(TreeNode* root) {
        if (!root) return;

        // Traverse the right subtree first
        if (root->right) {
            convertGST(root->right);
        }

        // Update the sum and the current node's value
        sum += root->val;
        root->val = sum;

        // Traverse the left subtree
        if (root->left) {
            convertGST(root->left);
        }
    }

    TreeNode* bstToGst(TreeNode* root) {
        if (!root) return nullptr;
        convertGST(root);
        return root;
    }
};
