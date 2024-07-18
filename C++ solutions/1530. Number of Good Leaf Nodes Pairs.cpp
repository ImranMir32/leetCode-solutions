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
    int goodPairs = 0;
    vector<int> DFS(TreeNode* root, int& dis){
        if(root == nullptr) return {};
        if(root->left == nullptr && root->right == nullptr) return {1};

        vector<int> leftv = DFS(root->left, dis);
        vector<int> rightv = DFS(root->right, dis);

        for(auto lv : leftv){
            for(auto rv : rightv){
                if(lv + rv <= dis) goodPairs++;
            }
        }

        vector<int> parentv;
        for(auto lv : leftv){
            if(lv+1 <= dis) parentv.push_back(lv+1); 
        } 
        for(auto rv : rightv){
            if(rv+1 <= dis) parentv.push_back(rv+1); 
        } 

        return parentv;
    }
    
    int countPairs(TreeNode* root, int distance) {
        DFS(root, distance);
        return goodPairs;
    }
};