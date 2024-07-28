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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        ans.push_back({root->val});
        
        int cnt = 1;
        while(!q.empty()){
            vector<int>temp;
            int len = q.size();
            for(int i=0; i<len; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != nullptr){
                    q.push(node->left);
                    temp.push_back(node->left->val);
                }
                if(node->right != nullptr){
                    q.push(node->right);
                    temp.push_back(node->right->val);   
                }
            }
            if(cnt % 2) reverse(temp.begin(), temp.end());
            if(temp.size()) ans.push_back(temp);
            cnt++;
        }
        return ans;
    }
};