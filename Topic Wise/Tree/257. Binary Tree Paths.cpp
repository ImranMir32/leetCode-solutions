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
    string s = "";
    vector<string> paths;
    vector<string> binaryTreePaths(TreeNode* root) {
        if (!root) return paths;
        dfs(root);
        return paths;
    }

    void dfs(TreeNode* node) {
        if (!node) return;

        int len = s.length();
        if (!s.empty()) s += "->";
        s += to_string(node->val);

        if (!node->left && !node->right) {
            paths.push_back(s);
            s.resize(len);
            return;
        } 
        if (node->left) dfs(node->left);
        if (node->right) dfs(node->right);
        
        s.resize(len);
    }
};
