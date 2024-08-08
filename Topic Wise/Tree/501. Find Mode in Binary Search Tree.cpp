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
    int curr_num = 0, curr_fre = 0, max_fre = 0;
    vector<int>result;
    void DFS(TreeNode* root){
        if(root == nullptr) return;
        DFS(root->left);

        if(curr_num == root->val){
            curr_fre++;
        }
        else{
            curr_num = root->val;
            curr_fre = 1;
        }

        if(curr_fre > max_fre){
            result = {};
            max_fre = curr_fre;
        }
        if(curr_fre == max_fre){
            result.push_back(root->val);
        }

        DFS(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        DFS(root);
        return result;
    }
};