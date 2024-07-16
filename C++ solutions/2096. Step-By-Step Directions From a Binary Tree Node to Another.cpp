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
    TreeNode* findLCA(TreeNode* root, int p, int q){
        if(root == nullptr) return root;
        TreeNode* leftSide = findLCA(root->left, p, q);
        TreeNode* rightSide = findLCA(root->right, p ,q);

        if((leftSide && rightSide) || (root->val == p || root->val == q)) return root;
        return (leftSide == nullptr) ? rightSide : leftSide;
    }
    string start = "", des = "";

    void dsa(TreeNode* root, string& path, int p, int q){
        if(root == nullptr) return;
        if(root->val == p) start = path;
        if(root->val == q) des = path;

        path.push_back('L');
        dsa(root->left, path, p, q);
        path.pop_back();

        path.push_back('R');
        dsa(root->right, path, p, q);
        path.pop_back();
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* LCA = findLCA(root, startValue, destValue);
        string path = "";
        dsa(LCA, path, startValue, destValue);

        for(auto& ch : start) ch = 'U';
        return start+des;
    }
};