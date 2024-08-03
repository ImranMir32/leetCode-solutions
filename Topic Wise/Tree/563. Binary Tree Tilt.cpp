// approach 1:
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
    int totalsum = 0;
    int setTitlt(TreeNode* root){
        if(!root) return 0;
        int leftsum = setTitlt(root->left);
        int rightsum = setTitlt(root->right);
        totalsum += abs(leftsum - rightsum);
        return leftsum+root->val+rightsum;
    }

    int findTilt(TreeNode* root) {
        setTitlt(root);
        return totalsum;
    }
};

// Approach : 2
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
    int setTitlt(TreeNode* root){
        if(!root) return 0;
        int leftsum = setTitlt(root->left);
        int rightsum = setTitlt(root->right);
        int rootValue = root->val;
        root->val = abs(leftsum - rightsum);

        return leftsum+rootValue+rightsum;

    }
    int sum = 0;
    int calculateSum(TreeNode* root){
        if(!root) return sum;
        sum += root->val;
        calculateSum(root->left);
        calculateSum(root->right);
        return sum;
    }
    int findTilt(TreeNode* root) {
        setTitlt(root);
        return calculateSum(root);
    }
};