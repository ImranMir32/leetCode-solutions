class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len= s.size();
        string postfix = s.substr(1, len-1);
        string prefix = s.substr(0, len-1);
        
        string newS= postfix + prefix;
        return newS.find(s) != string::npos;
    }
};