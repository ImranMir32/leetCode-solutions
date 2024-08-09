// Approach 1: BFS


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
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int level = 1;
        while(!q.empty()){
            int len = q.size();
            for(int i=0; i<len; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left == nullptr && node->right == nullptr) return level;
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
            }
            level++;
        }

        return level;
    }
};



// Approch 2: DFS
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
    int mn = INT_MAX;
    void minDepthHelper(TreeNode* root, int level){
        if(root->left == nullptr && root->right == nullptr){
            mn = min(mn, level);
            return;
        }
        if(root->left) minDepthHelper(root->left, level+1);
        if(root->right) minDepthHelper(root->right, level+1);
    }
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        minDepthHelper(root, 1);
        return mn;
    }
};