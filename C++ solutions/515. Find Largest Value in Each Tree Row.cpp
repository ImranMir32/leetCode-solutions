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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>q;
        if(root != nullptr) q.push(root);
        while(!q.empty()){
            int len = q.size();
            int mx = INT_MIN;
            for(int i=0; i<len; i++){
                TreeNode* top = q.front();
                q.pop();
                mx = max(mx, top->val);
                if(top->left != nullptr) q.push(top->left);
                if(top->right != nullptr) q.push(top->right);
            }
            v.push_back(mx);
        }
        return v;
    }
};