// approach :1
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        vector<pair<int,int>>p;
        for(int i=0;i< groupSizes.size();i++) p.push_back(make_pair(groupSizes[i],i));
        p.push_back(make_pair(5000,5000));
        sort(p.begin(),p.end());
        
        vector<int>v,zero;
        int cnt=0;
        for(int i=0;i<p.size()-1;i++){
            if(p[i].first!=p[i+1].first){
                v.push_back(p[i].second); 
                ans.push_back(v);
                v=zero;
                cnt=0;
            }
            else {
                v.push_back(p[i].second);
                cnt++;
                if(cnt==p[i].first){
                    ans.push_back(v);
                    v=zero;
                    cnt=0;
                }
            } 
        }
        if(v.size()>0) ans.push_back(v);
        return ans;
    }
};

// approach :2
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
	    unordered_map<int,vector<int>> groups;

	    for(int i=0; i<groupSizes.size(); i++){
		    auto& group=groups[groupSizes[i]];
		    group.push_back(i);
		    if(group.size()==groupSizes[i]){
			    res.push_back(group);
			    group={};
		    }
	    }
	    return res;
    }
};