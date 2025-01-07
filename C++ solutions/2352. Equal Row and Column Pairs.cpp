class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int>mpr, mpc;
        for(int i=0; i<grid.size(); i++){
            vector<int>v;
            for(int j=0; j<grid.size(); j++){
                v.push_back(grid[i][j]);
            }
            mpc[v]++;
        }
        for(int i=0; i<grid.size(); i++){
            vector<int>v;
            for(int j=0; j<grid.size(); j++){
                v.push_back(grid[j][i]);
            }
            mpr[v]++;
        }
        
        int ans=0;
        for(auto k:mpc){
            if(mpr[k.first]){
                ans +=(k.second*mpr[k.first]);
            }
        }
        return ans;
    }
};