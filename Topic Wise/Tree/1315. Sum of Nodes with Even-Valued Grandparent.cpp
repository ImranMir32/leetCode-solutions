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
    void calculateChild(TreeNode* root){
        if(!root) return;
        if(root->left) sum+=root->left->val;
        if(root->right) sum+=root->right->val;
    }
    void sumEvenGrandparentHelper(TreeNode* root){
        if(!root) return;
        if(root->val % 2 == 0){
            calculateChild(root->left);
            calculateChild(root->right);
        }
        sumEvenGrandparentHelper(root->left);
        sumEvenGrandparentHelper(root->right);
    }
    int sumEvenGrandparent(TreeNode* root) {
        sumEvenGrandparentHelper(root);
        return sum;
    }
};