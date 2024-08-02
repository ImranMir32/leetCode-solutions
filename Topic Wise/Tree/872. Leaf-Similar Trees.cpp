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
    void findLeaf(TreeNode* root, vector<int>&leaf){
        if(root == nullptr) return;
        if(!root->left && !root->right) leaf.push_back(root->val);
        findLeaf(root->left, leaf);
        findLeaf(root->right, leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int>leaf1, leaf2;
       findLeaf(root1, leaf1);
       findLeaf(root2, leaf2); 
       return leaf1 == leaf2;
    }
};