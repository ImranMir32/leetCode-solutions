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
    TreeNode* createTree(vector<int>& preorder, map<int, int>& inorderMap, int rootIndex, int left, int right){
        if(left>right) return nullptr;
        TreeNode* root = new TreeNode(preorder[rootIndex]);
        
        int mid = inorderMap[preorder[rootIndex]];
        if(mid > left){
            root->left =  createTree(preorder, inorderMap, rootIndex+1, left, mid-1);
        }
        if(mid < right){
            root->right = createTree(preorder, inorderMap, rootIndex+mid-left+1, mid+1, right);
        }
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int>inorderMap;
        for(int i=0; i<inorder.size(); i++) inorderMap[inorder[i]] = i;
        
        int rootIndex = 0, left = 0, right = preorder.size()-1;
        return createTree(preorder, inorderMap, rootIndex, left, right);
    }
};