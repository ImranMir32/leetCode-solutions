class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int len=original.size();
        vector<vector<int>>ans;
        if(m*n!=len) return ans;
        vector<int>v,vv;
        int cnt=0;
        for(int i=0;i<len;i++){
            v.push_back(original[i]);
            cnt++;
            if(cnt%n==0 && v.size()!=0){
                ans.push_back(v);
                v=vv;
            }
        } 
        return ans;
    }
};