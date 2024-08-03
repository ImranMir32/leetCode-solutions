// Approach  : /**
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
    int cnt  = 0;
    int totalNodeCount(TreeNode* root, int& n){
        if(!root) return n;
        n++;
        totalNodeCount(root->left, n);
        totalNodeCount(root->right, n);
        return n;
    }
    int averageOfSubtreeHelper(TreeNode* root){
        if(!root) return 0;

        int leftsum = averageOfSubtreeHelper(root->left);
        int rightsum = averageOfSubtreeHelper(root->right);
        int totalsum = leftsum + root->val + rightsum;
        int n = 0;
        n = totalNodeCount(root, n);
        if(totalsum / n == root->val) cnt++;
        return totalsum;
    }
    int averageOfSubtree(TreeNode* root) {
        averageOfSubtreeHelper(root);
        return cnt;
    }
};

// Approach : 2
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
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        averageOfSubtreeHelper(root, count);
        return count;
    }

private:
    std::pair<int, int> averageOfSubtreeHelper(TreeNode* root, int& count) {
        if (!root) return {0, 0};
        
        auto left = averageOfSubtreeHelper(root->left, count);
        auto right = averageOfSubtreeHelper(root->right, count);
        
        int sum = left.first + right.first + root->val;
        int numNodes = left.second + right.second + 1;
        
        if (sum / numNodes == root->val) count++;
        
        return {sum, numNodes};
    }
};
