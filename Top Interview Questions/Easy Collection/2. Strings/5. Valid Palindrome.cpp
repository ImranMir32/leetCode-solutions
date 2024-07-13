// approach : 1
class Solution {
public:
    bool check(string &s, int i, int j) {
        if (i >= j) return true;
        if (s[i] != s[j]) return false;
        return check(s, i + 1, j - 1);
    }
    
    bool isPalindrome(string s) {
        if(s.size()<=1) return true;
        string st="";

        for(int i=0;i<s.size();i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                st+=tolower(s[i]);
            }
        } 

        return check(st, 0, st.size()-1);
    }
};

// approach: 2
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=1) return true;
        string st="";

        for(int i=0;i<s.size();i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                st+=tolower(s[i]);
            }
        } 

        for(int i=0,j=st.size()-1;i<=j;i++,j--){
            if(st[i]!=st[j]) return false;
        }
        return true;
    }
};