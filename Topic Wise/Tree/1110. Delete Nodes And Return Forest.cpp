/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr, right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<TreeNode*> roots;
    unordered_set<int> toDeleteSet;

    TreeNode* dfs(TreeNode* node) {
        if (!node) return nullptr;
        
        node->left = dfs(node->left);
        node->right = dfs(node->right);
        
        if (toDeleteSet.count(node->val)) {
            if (node->left) roots.push_back(node->left);
            if (node->right) roots.push_back(node->right);
            return nullptr;
        }
        return node;
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        toDeleteSet = unordered_set<int>(to_delete.begin(), to_delete.end());
        if (!toDeleteSet.count(root->val)) {
            roots.push_back(root);
        }
        dfs(root);
        return roots;
    }
};