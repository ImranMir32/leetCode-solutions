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
    void inorderTraversal(TreeNode* root, vector<int>& v){
        if(root == nullptr) return;
        
        inorderTraversal(root->left, v);
        v.push_back(root->val);
        inorderTraversal(root->right, v);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        inorderTraversal(root, v);
        
        for(int i=1; i<v.size(); i++){
            if(v[i-1] >= v[i]) return false;
        }
        return true;
    }
};

//Approach : 2
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
    bool checkValid(TreeNode* root, long leftLimit, long rightLimit){
        if(root == nullptr) return true;
        if(!(leftLimit < root->val && root->val < rightLimit)) return false;
        
       return (checkValid(root->left, leftLimit, root->val) && checkValid(root->right, root->val, rightLimit));
    }
    
    bool isValidBST(TreeNode* root) {
        return checkValid(root,  LONG_MIN, LONG_MAX);
    }
};