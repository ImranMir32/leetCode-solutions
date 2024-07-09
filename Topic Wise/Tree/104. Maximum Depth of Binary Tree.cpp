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
    int height(TreeNode* Node){
        if(Node == nullptr){
            return 0;
        }
        
        return max(height(Node->left), height(Node->right)) + 1;
        
    }
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};