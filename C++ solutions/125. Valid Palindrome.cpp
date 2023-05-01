//approach : 1
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string st="";
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) st+=s[i];
            else if(s[i]>='A' && s[i]<='Z') st+=tolower(s[i]);
        }
        for(int i=0,j=st.size()-1;i<j;i++,j--){
            if(st[i]!=st[j]) return false;
        }
        return true;
    }
};

//approach : 2
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size(),k=0;
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) s[k++]=s[i];
            else if(s[i]>='A' && s[i]<='Z') s[k++]=tolower(s[i]);
        }
        for(int i=0,j=k-1;i<j;i++,j--){
            if(s[i]!=s[j]) return false;
        }
        return true;
    }
};