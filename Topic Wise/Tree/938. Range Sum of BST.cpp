// Approch : 1
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
    long long sum = 0;
    void calculateSum(TreeNode* root, int low, int high){
        if(root == nullptr) return;
        if(root->val >= low && root->val <= high){
            sum += root->val;
            calculateSum(root->left, low, high);
            calculateSum(root->right, low, high);
        }
        else if(root->val < low) calculateSum(root->right, low, high);
        else calculateSum(root->left, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        calculateSum(root, low, high);
        return sum;
    }
};

// Approach: 2
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
    int res=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root!=NULL){
            if(root->val>=low && root->val<=high) res+=root->val;
            rangeSumBST(root->left,low,high);
            rangeSumBST(root->right,low,high);
        }
        return res;
    }
};