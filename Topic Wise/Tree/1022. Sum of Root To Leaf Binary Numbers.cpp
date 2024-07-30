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
    vector<string>ans;
    void binaryString(TreeNode* root, string& s) {
        if (root == nullptr) return;
        
        s += to_string(root->val);
        
        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(s);
        } else {
            binaryString(root->left, s);
            binaryString(root->right, s);
        }
        
        s.pop_back();
    }

    int count(){
        int sum = 0;
        for(int i=0; i<ans.size();i++){
            string s = ans[i];
            int num = 0, p = 0;
            for(int j=s.size()-1; j>=0; j--){
                if(s[j]=='1') num+=pow(2,p); 
                p++; 
            }
            sum += num;
        }
        return sum;
    }
    int sumRootToLeaf(TreeNode* root) {
        string s = "";
        binaryString(root, s);
        return count();
    }
};