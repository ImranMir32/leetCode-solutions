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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*>mp;
        unordered_map<int, int>parents, childs;

        for(int i=0; i<descriptions.size(); i++){
            if(mp.find(descriptions[i][0])==mp.end()){
                TreeNode* node = new TreeNode(descriptions[i][0]);
                mp[descriptions[i][0]] = node;
            }
            if(mp.find(descriptions[i][1])==mp.end()){
                TreeNode* node = new TreeNode(descriptions[i][1]);
                mp[descriptions[i][1]]= node;
            }
            if(descriptions[i][2]){
                mp[descriptions[i][0]]->left = mp[descriptions[i][1]];
            }
            else{
                mp[descriptions[i][0]]->right = mp[descriptions[i][1]];
            }
            parents[descriptions[i][0]]++;
            childs[descriptions[i][1]]++;
        }
        
        TreeNode* root;
        for(auto it:mp){
            if(parents.find(it.first) != parents.end() && childs.find(it.first) == childs.end()){
                root = it.second;
                break;
            }
        }
        return root;
    }
};