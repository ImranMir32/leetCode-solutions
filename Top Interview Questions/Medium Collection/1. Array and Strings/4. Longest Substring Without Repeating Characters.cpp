class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int>mp;
        int cnt = 0, mx = 0;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]){
                i = mp[s[i]]-1;
                mp.clear();
                cnt = 0;
            }
            else{
                mp[s[i]] = i+1;
                cnt++;
                mx = max(mx, cnt);
            }
        }
        return mx;
    }
};