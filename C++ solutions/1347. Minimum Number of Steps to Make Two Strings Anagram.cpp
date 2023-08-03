class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m;
        for(int i=0;i<s.size();i++) m[s[i]]++;
        for(int i=0;i<t.size();i++){
            if(m[t[i]]){
                m[t[i]]--;
            }
        }
        int ans=0;
        for(auto k:m) ans+=k.second;
        return ans;
    }
};