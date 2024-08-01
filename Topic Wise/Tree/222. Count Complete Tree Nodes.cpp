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
    int findCount(TreeNode* root, int& cnt){
        if(!root) return cnt;
        cnt++;
        findCount(root->left, cnt);
        findCount(root->right, cnt);
        return cnt;
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int cnt = 0, ans = 1;
        if(root->left) ans += findCount(root->left, cnt);
        cnt = 0;
        if(root->right) ans += findCount(root->right, cnt);
        return ans;
    }
};