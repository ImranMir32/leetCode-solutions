class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<pair<string,int>>p;
        if(strs.size()==0) return ans;

        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            p.push_back(make_pair(s, i));
        }
        sort(p.begin(),p.end()); 
        vector<string>res,empty;

        res.push_back(strs[p[0].second]);
        for(int i=1;i<p.size();i++){
            if(p[i].first!=p[i-1].first){
                ans.push_back(res);
                res=empty;
                res.push_back(strs[p[i].second]);
            }
            else res.push_back(strs[p[i].second]);
        }
        ans.push_back(res);
        return ans;
    }
};