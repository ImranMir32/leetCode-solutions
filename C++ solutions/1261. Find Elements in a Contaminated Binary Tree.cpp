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
class FindElements {
    public:
        map<int, int>mp;
        void buildMap(TreeNode* root, int value){
            if(root == nullptr) return;
            if(root->left != nullptr) {
                int x = 2 * value + 1;
                mp[x] = 1;
                buildMap(root->left, x);
            }
            if(root->right != nullptr) {
                int x = 2 * value + 2;
                mp[x] = 1;
                buildMap(root->right, x);
            }
    
        }
        FindElements(TreeNode* root) {
            if(root == nullptr) return;
            mp[0] = 1;
            buildMap(root, 0);
        }
        
        bool find(int target) {
            return mp[target];
        }
    };
    
    /**
     * Your FindElements object will be instantiated and called as such:
     * FindElements* obj = new FindElements(root);
     * bool param_1 = obj->find(target);
     */