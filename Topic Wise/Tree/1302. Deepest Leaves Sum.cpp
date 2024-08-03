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
        if(root == nullptr) return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
    int sum = 0;
    void findDeepNode(TreeNode* root, int cnt, int h){
        if(root == nullptr) return;
        if(cnt == h) sum += root->val;
        findDeepNode(root->left, cnt+1, h);
        findDeepNode(root->right, cnt+1, h);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h = height(root);
        findDeepNode(root, 1, h);
        return sum;
    }
};