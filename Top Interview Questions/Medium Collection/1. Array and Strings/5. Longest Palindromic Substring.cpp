class Solution {
public:
    bool checkPalindrome(string& s, int left, int right){
        if(left>=right) return true;
        if(s[left] != s[right]) return false;
        
        return checkPalindrome(s, left+1, right-1);
    }
    
    string longestPalindrome(string s) {
       if (s.empty()) return "";
        int len = s.size();
        string ans = s.substr(0, 1);

        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                if (checkPalindrome(s, i, j)) {
                    if (j - i + 1 > ans.size()) {
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        
        return ans;
        
    }
};