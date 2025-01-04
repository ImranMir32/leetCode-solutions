class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<vector<int>>v(26);
        for(int i=0; i<s.size(); i++){
            v[s[i]-'a'].push_back(i);
        }
        long long ans=0;
        for(auto &k:v){
            if(k.size()>1){
                int left=k[0];
                int right=k[k.size()-1];
                unordered_set<char> uniqueChars(s.begin() + left + 1, s.begin() + right);
                ans += uniqueChars.size();
            }
        }
        return ans;
    }
};