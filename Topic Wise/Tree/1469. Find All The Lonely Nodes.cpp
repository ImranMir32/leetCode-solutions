
// 1469. Find All The Lonely Nodes
// Description:
// --------------------
// In a binary tree, a lonely node is a node that is the only child of its parent node. 
// The root of the tree is not lonely because it does not have a parent node.

// Given the root of a binary tree, return an array containing the values of all lonely
// nodes in the tree. Return the list in any order.



// ---------------------------------------------------------------------------------------

// Approach : 1
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
    vector<int> ans;
    
    TreeNode* findLonelyNodes(TreeNode* root) {
        if (root == nullptr) return nullptr;
        
        TreeNode* left = findLonelyNodes(root->left);
        TreeNode* right = findLonelyNodes(root->right);

        if (left == nullptr && right != nullptr) {
            ans.push_back(right->val);
        } else if (left != nullptr && right == nullptr) {
            ans.push_back(left->val);
        }
        
        return root;
    }

    vector<int> getLonelyNodes(TreeNode* root) {
        findLonelyNodes(root);
        return ans;
    }
};


//approach : 2
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
    vector<int> ans;
    
    void findLonelyNodes(TreeNode* root) {
        if (root == nullptr) return;
        
        if (root->left != nullptr && root->right == nullptr) {
            ans.push_back(root->left->val);
        } else if (root->left == nullptr && root->right != nullptr) {
            ans.push_back(root->right->val);
        }

        findLonelyNodes(root->left);
        findLonelyNodes(root->right);
    }

    vector<int> getLonelyNodes(TreeNode* root) {
        findLonelyNodes(root);
        return ans;
    }
};
