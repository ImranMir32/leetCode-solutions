class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v;
        map<int, int> m;  
        for (int i = 0; i < nums.size(); i++) m[nums[i]]++;
        int mx=0;
        for(auto k:m) mx=max(mx,k.second);
    
        for(int i=0;i<mx;i++){
            vector<int>vv;
            for(auto k:m){
               if(k.second!=0){
                    vv.push_back(k.first);
                    m[k.first] = k.second - 1;
               }
            }
            if(vv.size()!=0) v.push_back(vv);
        }
        return v;
    }
};