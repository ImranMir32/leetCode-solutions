class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        
        while(ans.size() != numRows){
            vector<int>temp = ans[ans.size()-1];
            vector<int>v;
            
            v.push_back(1);
            for(int i=0; i<temp.size()-1; i++){
                v.push_back(temp[i] + temp[i+1]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        
        return ans;
    }
};