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
    bool findTargetHelper(TreeNode* root, int k, unordered_set<int>& seen){
       if(!root) return false;
       if(seen.find(k-root->val) !=seen.end()) return true;
       seen.insert(root->val);
       return (findTargetHelper(root->left, k, seen) || findTargetHelper(root->right, k, seen));
    }
    bool findTarget(TreeNode* root, int k) {
       unordered_set<int> seen;
       return findTargetHelper(root, k, seen);
    }
};