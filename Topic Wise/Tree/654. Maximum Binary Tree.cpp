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
    int findMax(vector<int>& nums, int s, int f){
        int mx = INT_MIN;
        int ind = -1;
        for(int i=s;i<=f;i++){
            if(mx < nums[i]){
                mx = nums[i];
                ind = i;
            }
        }
        return ind;

    }

    TreeNode* maximumBinaryTree(vector<int>& nums, int s, int f){
        if(s>f) return nullptr;
        if(s==f) return new TreeNode(nums[s]);

        int ind=findMax(nums, s, f);
        TreeNode* root = new TreeNode(nums[ind]);
        root->left =  maximumBinaryTree(nums, s, ind-1);
        root->right = maximumBinaryTree(nums, ind+1, f);

        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maximumBinaryTree(nums, 0, nums.size()-1);
    }
};