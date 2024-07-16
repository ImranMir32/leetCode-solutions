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
    TreeNode* root = nullptr;
    
    TreeNode* createBST(TreeNode* node, int value){
        if(node == nullptr){
            return new TreeNode(value);
        }
        if(node->val > value){
            node->left = (createBST(node->left, value));
        }
        
        if(node->val < value){
            node->right = createBST(node->right, value);
        }
        
        return node;
    }
    
    void populatedSorted(vector<int>& nums, int start, int finish){
        if(start>=finish) return;
        int mid = (start + finish) / 2;
        
        root = createBST(root, nums[mid]);
        populatedSorted(nums, start, mid);
        populatedSorted(nums, mid+1, finish);
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        populatedSorted(nums, 0, nums.size());
        
        return root;
    }
};