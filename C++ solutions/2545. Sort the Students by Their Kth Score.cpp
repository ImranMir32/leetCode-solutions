class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {  
        vector<pair<int,vector<int>>>res;
        int len=score.size();
        for(int i=0;i<len;i++){
            vector<int>v;
            int len1=score[i].size();
            for(int j=0;j<len1;j++) v.push_back(score[i][j]);

            res.push_back(make_pair(score[i][k],v));
        }
        sort(res.begin(),res.end());
        
        vector<vector<int>>ans;
        for(int i=len-1;i>=0;i--){
            ans.push_back(res[i].second);
        }
        return ans;

    }
};