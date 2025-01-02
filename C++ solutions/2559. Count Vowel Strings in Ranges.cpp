class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>pre_sum;
        int n=words.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            string s=words[i];
            int l=s.size()-1;
            if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u') && (s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u')) cnt++;
            pre_sum.push_back(cnt);
        }

        vector<int>ans;
        for(int i=0; i<queries.size(); i++){
            int l=queries[i][0];
            int r=queries[i][1];
            int cnt=pre_sum[r];
            if(l-1>=0) cnt=cnt-pre_sum[l-1];
            ans.push_back(cnt);
        }
        return ans;
    }
};