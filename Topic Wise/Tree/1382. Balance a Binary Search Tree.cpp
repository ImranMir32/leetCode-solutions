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
    vector<int>nums;
    void inorder(TreeNode* root){
        if(root == nullptr) return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* new_root = nullptr;
    TreeNode* createBST(TreeNode* root, int value){
        if(root == nullptr){
           return new TreeNode(value);
        }
        if(root->val > value) root->left = createBST(root->left, value);
        else root->right = createBST(root->right, value);
        return root;
    }

    void populatedSorted(vector<int>& nums, int start, int finish){
        if(start>=finish) return;
        int mid = (start + finish) / 2;
        
        new_root = createBST(new_root, nums[mid]);
        populatedSorted(nums, start, mid);
        populatedSorted(nums, mid+1, finish);
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        populatedSorted(nums, 0, nums.size());
        return new_root;
    }
};