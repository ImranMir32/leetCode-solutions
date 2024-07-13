class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prev = strs[0];
        for(int i=1; i<strs.size(); i++){
            string s = strs[i], ans = "";
            for(int i=0; i<s.size(); i++){
                if(s[i] == prev[i]) ans += s[i];
                else break;
            }
            prev = ans;
        }
        return prev;
        
    }
};