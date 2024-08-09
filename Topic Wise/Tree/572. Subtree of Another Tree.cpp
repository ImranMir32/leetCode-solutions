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
    bool check(TreeNode* root, TreeNode* subRoot){
        if(root == nullptr && subRoot == nullptr) return true;
        if((root != nullptr && subRoot == nullptr) || (root == nullptr && subRoot != nullptr) || (root->val != subRoot->val)) return false;

        return check(root->left, subRoot->left) && check(root->right, subRoot->right);
    }
    bool isSubtreeHelper(TreeNode* root, TreeNode* subRoot, int subH){
        int h = height(root);
        if(subH > h) return false;
        if(subH == h) return check(root, subRoot);
        return isSubtreeHelper(root->left, subRoot, subH) || isSubtreeHelper(root->right, subRoot, subH);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        int subH = height(subRoot);
        return isSubtreeHelper(root, subRoot, subH);
    }
};